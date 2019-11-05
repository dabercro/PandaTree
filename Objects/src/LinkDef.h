#include "PandaTree/Objects/interface/Flags.h"
#include "PandaTree/Objects/interface/Met.h"
#include "PandaTree/Objects/interface/RecoMet.h"
#include "PandaTree/Objects/interface/Particle.h"
#include "PandaTree/Objects/interface/SecondaryVertex.h"
#include "PandaTree/Objects/interface/PrimaryVertex.h"
#include "PandaTree/Objects/interface/RecoParticle.h"
#include "PandaTree/Objects/interface/PFParticle.h"
#include "PandaTree/Objects/interface/GenPart.h"
#include "PandaTree/Objects/interface/Lepton.h"
#include "PandaTree/Objects/interface/Photon.h"
#include "PandaTree/Objects/interface/Electron.h"
#include "PandaTree/Objects/interface/Muon.h"
#include "PandaTree/Objects/interface/Jet.h"
#include "PandaTree/Objects/interface/Triggers.h"
#include "PandaTree/Objects/interface/BReweight.h"
#include "PandaTree/Objects/interface/Event.h"

#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ namespace panda;

#pragma link C++ class panda::Flags;
#pragma link C++ class panda::Met;
#pragma link C++ class panda::RecoMet;
#pragma link C++ class panda::Particle;
#pragma link C++ class panda::SecondaryVertex;
#pragma link C++ class panda::PrimaryVertex;
#pragma link C++ class panda::RecoParticle;
#pragma link C++ class panda::PFParticle;
#pragma link C++ class panda::GenPart;
#pragma link C++ class panda::Lepton;
#pragma link C++ class panda::Photon;
#pragma link C++ class panda::Electron;
#pragma link C++ class panda::Muon;
#pragma link C++ class panda::Jet;
#pragma link C++ class panda::Triggers;
#pragma link C++ class panda::BReweight;
#pragma link C++ class panda::Array<panda::Particle>;
#pragma link C++ class panda::Collection<panda::Particle>;
#pragma link C++ class panda::Ref<panda::Particle>;
#pragma link C++ class panda::RefVector<panda::Particle>;
#pragma link C++ class panda::Array<panda::SecondaryVertex>;
#pragma link C++ class panda::Collection<panda::SecondaryVertex>;
#pragma link C++ class panda::Ref<panda::SecondaryVertex>;
#pragma link C++ class panda::RefVector<panda::SecondaryVertex>;
#pragma link C++ class panda::Array<panda::RecoParticle>;
#pragma link C++ class panda::Collection<panda::RecoParticle>;
#pragma link C++ class panda::Ref<panda::RecoParticle>;
#pragma link C++ class panda::RefVector<panda::RecoParticle>;
#pragma link C++ class panda::Array<panda::PFParticle>;
#pragma link C++ class panda::Collection<panda::PFParticle>;
#pragma link C++ class panda::Ref<panda::PFParticle>;
#pragma link C++ class panda::RefVector<panda::PFParticle>;
#pragma link C++ class panda::Array<panda::GenPart>;
#pragma link C++ class panda::Collection<panda::GenPart>;
#pragma link C++ class panda::Ref<panda::GenPart>;
#pragma link C++ class panda::RefVector<panda::GenPart>;
#pragma link C++ class panda::Array<panda::Lepton>;
#pragma link C++ class panda::Collection<panda::Lepton>;
#pragma link C++ class panda::Ref<panda::Lepton>;
#pragma link C++ class panda::RefVector<panda::Lepton>;
#pragma link C++ class panda::Array<panda::Photon>;
#pragma link C++ class panda::Collection<panda::Photon>;
#pragma link C++ class panda::Ref<panda::Photon>;
#pragma link C++ class panda::RefVector<panda::Photon>;
#pragma link C++ class panda::Array<panda::Electron>;
#pragma link C++ class panda::Collection<panda::Electron>;
#pragma link C++ class panda::Ref<panda::Electron>;
#pragma link C++ class panda::RefVector<panda::Electron>;
#pragma link C++ class panda::Array<panda::Muon>;
#pragma link C++ class panda::Collection<panda::Muon>;
#pragma link C++ class panda::Ref<panda::Muon>;
#pragma link C++ class panda::RefVector<panda::Muon>;
#pragma link C++ class panda::Array<panda::Jet>;
#pragma link C++ class panda::Collection<panda::Jet>;
#pragma link C++ class panda::Ref<panda::Jet>;
#pragma link C++ class panda::RefVector<panda::Jet>;
#pragma link C++ typedef panda::ParticleArray;
#pragma link C++ typedef panda::ParticleCollection;
#pragma link C++ typedef panda::ParticleRef;
#pragma link C++ typedef panda::ParticleRefVector;
#pragma link C++ typedef panda::SecondaryVertexArray;
#pragma link C++ typedef panda::SecondaryVertexCollection;
#pragma link C++ typedef panda::SecondaryVertexRef;
#pragma link C++ typedef panda::SecondaryVertexRefVector;
#pragma link C++ typedef panda::RecoParticleArray;
#pragma link C++ typedef panda::RecoParticleCollection;
#pragma link C++ typedef panda::RecoParticleRef;
#pragma link C++ typedef panda::RecoParticleRefVector;
#pragma link C++ typedef panda::PFParticleArray;
#pragma link C++ typedef panda::PFParticleCollection;
#pragma link C++ typedef panda::PFParticleRef;
#pragma link C++ typedef panda::PFParticleRefVector;
#pragma link C++ typedef panda::GenPartArray;
#pragma link C++ typedef panda::GenPartCollection;
#pragma link C++ typedef panda::GenPartRef;
#pragma link C++ typedef panda::GenPartRefVector;
#pragma link C++ typedef panda::LeptonArray;
#pragma link C++ typedef panda::LeptonCollection;
#pragma link C++ typedef panda::LeptonRef;
#pragma link C++ typedef panda::LeptonRefVector;
#pragma link C++ typedef panda::PhotonArray;
#pragma link C++ typedef panda::PhotonCollection;
#pragma link C++ typedef panda::PhotonRef;
#pragma link C++ typedef panda::PhotonRefVector;
#pragma link C++ typedef panda::ElectronArray;
#pragma link C++ typedef panda::ElectronCollection;
#pragma link C++ typedef panda::ElectronRef;
#pragma link C++ typedef panda::ElectronRefVector;
#pragma link C++ typedef panda::MuonArray;
#pragma link C++ typedef panda::MuonCollection;
#pragma link C++ typedef panda::MuonRef;
#pragma link C++ typedef panda::MuonRefVector;
#pragma link C++ typedef panda::JetArray;
#pragma link C++ typedef panda::JetCollection;
#pragma link C++ typedef panda::JetRef;
#pragma link C++ typedef panda::JetRefVector;
#pragma link C++ class panda::Event;

#endif
