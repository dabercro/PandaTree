target=libpanda.so
src=$(wildcard Objects/src/*.cc) $(wildcard Framework/src/*.cc)
obj=$(patsubst %.cc,obj/%.o,$(subst /src/,/,$(src)))

lib/$(target): $(obj) obj/dict.o
	mkdir -p lib
	g++ -std=c++11 -O2 -fPIC -shared $(shell root-config --libs) -o $@ $^
	mv obj/*.pcm lib

obj/dict.o: $(patsubst %.cc,%.h,$(subst /src/,/interface/,$(src)))
	rootcling -f obj/dict.cc $^
	g++ -std=c++11 -O2 -fPIC -c -o $@ -I$(shell root-config --incdir) -I$(shell pwd) obj/dict.cc

obj/Framework/%.o: Framework/src/%.cc Framework/interface/%.h
	mkdir -p obj/Framework
	g++ -std=c++11 -O2 -fPIC -c -o $@ -I$(shell root-config --incdir) $<

obj/Objects/%.o: Objects/src/%.cc Objects/interface/%.h
	mkdir -p obj/Objects
	g++ -std=c++11 -O2 -fPIC -c -o $@ -I$(shell root-config --incdir) $<

.PHONY: clean

clean:
	rm -f obj/*.cc obj/*.o obj/*/*.o lib/*.pcm $(target)
