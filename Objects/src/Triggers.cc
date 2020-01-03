#include "../interface/Triggers.h"

/*static*/
panda::utils::BranchList
panda::Triggers::getListOfBranches()
{
  utils::BranchList blist;
  blist += {"AK8PFJet360_TrimMass30", "AK8PFJet380_TrimMass30", "AK8PFJet400_TrimMass30", "AK8PFJet420_TrimMass30", "AK8PFHT750_TrimMass50", "AK8PFHT800_TrimMass50", "AK8PFHT850_TrimMass50", "AK8PFHT900_TrimMass50", "CaloJet500_NoJetID", "CaloJet550_NoJetID", "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", "Trimuon5_3p5_2_Upsilon_Muon", "TrimuonOpen_5_3p5_2_Upsilon_Muon", "DoubleEle25_CaloIdL_MW", "DoubleEle27_CaloIdL_MW", "DoubleEle33_CaloIdL_MW", "DoubleEle24_eta2p1_WPTight_Gsf", "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", "Ele27_Ele37_CaloIdL_MW", "Mu27_Ele37_CaloIdL_MW", "Mu37_Ele27_CaloIdL_MW", "Mu37_TkMu27", "DoubleMu4_3_Bs", "DoubleMu4_3_Jpsi", "DoubleMu4_JpsiTrk_Displaced", "DoubleMu4_LowMassNonResonantTrk_Displaced", "DoubleMu3_Trk_Tau3mu", "DoubleMu3_TkMu_DsTau3Mu", "DoubleMu4_PsiPrimeTrk_Displaced", "DoubleMu4_Mass3p8_DZ_PFHT350", "Mu3_PFJet40", "Mu7p5_L2Mu2_Jpsi", "Mu7p5_L2Mu2_Upsilon", "Mu7p5_Track2_Jpsi", "Mu7p5_Track3p5_Jpsi", "Mu7p5_Track7_Jpsi", "Mu7p5_Track2_Upsilon", "Mu7p5_Track3p5_Upsilon", "Mu7p5_Track7_Upsilon", "Mu3_L1SingleMu5orSingleMu7", "DoublePhoton33_CaloIdL", "DoublePhoton70", "DoublePhoton85", "Ele20_WPTight_Gsf", "Ele15_WPLoose_Gsf", "Ele17_WPLoose_Gsf", "Ele20_WPLoose_Gsf", "Ele20_eta2p1_WPLoose_Gsf", "DiEle27_WPTightCaloOnly_L1DoubleEG", "Ele27_WPTight_Gsf", "Ele28_WPTight_Gsf", "Ele30_WPTight_Gsf", "Ele32_WPTight_Gsf", "Ele35_WPTight_Gsf", "Ele35_WPTight_Gsf_L1EGMT", "Ele38_WPTight_Gsf", "Ele40_WPTight_Gsf", "Ele32_WPTight_Gsf_L1DoubleEG", "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "HT450_Beamspot", "HT300_Beamspot", "ZeroBias_Beamspot", "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "IsoMu20", "IsoMu24", "IsoMu24_eta2p1", "IsoMu27", "IsoMu30", "UncorrectedJetE30_NoBPTX", "UncorrectedJetE30_NoBPTX3BX", "UncorrectedJetE60_NoBPTX3BX", "UncorrectedJetE70_NoBPTX3BX", "L1SingleMu18", "L1SingleMu25", "L2Mu10", "L2Mu10_NoVertex_NoBPTX3BX", "L2Mu10_NoVertex_NoBPTX", "L2Mu45_NoVertex_3Sta_NoBPTX3BX", "L2Mu40_NoVertex_3Sta_NoBPTX3BX", "L2Mu50", "L2Mu23NoVtx_2Cha", "L2Mu23NoVtx_2Cha_CosmicSeed", "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", "DoubleL2Mu30NoVtx_2Cha_Eta2p4", "DoubleL2Mu50", "DoubleL2Mu23NoVtx_2Cha_CosmicSeed", "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", "DoubleL2Mu25NoVtx_2Cha_CosmicSeed", "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", "DoubleL2Mu23NoVtx_2Cha", "DoubleL2Mu23NoVtx_2Cha_NoL2Matched", "DoubleL2Mu25NoVtx_2Cha", "DoubleL2Mu25NoVtx_2Cha_NoL2Matched", "DoubleL2Mu25NoVtx_2Cha_Eta2p4", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", "Mu25_TkMu0_Onia", "Mu30_TkMu0_Psi", "Mu30_TkMu0_Upsilon", "Mu20_TkMu0_Phi", "Mu25_TkMu0_Phi", "Mu12", "Mu15", "Mu20", "Mu27", "Mu50", "Mu55", "OldMu100", "TkMu100", "DiPFJetAve40", "DiPFJetAve60", "DiPFJetAve80", "DiPFJetAve140", "DiPFJetAve200", "DiPFJetAve260", "DiPFJetAve320", "DiPFJetAve400", "DiPFJetAve500", "DiPFJetAve60_HFJEC", "DiPFJetAve80_HFJEC", "DiPFJetAve100_HFJEC", "DiPFJetAve160_HFJEC", "DiPFJetAve220_HFJEC", "DiPFJetAve300_HFJEC", "AK8PFJet15", "AK8PFJet25", "AK8PFJet40", "AK8PFJet60", "AK8PFJet80", "AK8PFJet140", "AK8PFJet200", "AK8PFJet260", "AK8PFJet320", "AK8PFJet400", "AK8PFJet450", "AK8PFJet500", "AK8PFJet550", "PFJet15", "PFJet25", "PFJet40", "PFJet60", "PFJet80", "PFJet140", "PFJet200", "PFJet260", "PFJet320", "PFJet400", "PFJet450", "PFJet500", "PFJet550", "PFJetFwd15", "PFJetFwd25", "PFJetFwd40", "PFJetFwd60", "PFJetFwd80", "PFJetFwd140", "PFJetFwd200", "PFJetFwd260", "PFJetFwd320", "PFJetFwd400", "PFJetFwd450", "PFJetFwd500", "AK8PFJetFwd15", "AK8PFJetFwd25", "AK8PFJetFwd40", "AK8PFJetFwd60", "AK8PFJetFwd80", "AK8PFJetFwd140", "AK8PFJetFwd200", "AK8PFJetFwd260", "AK8PFJetFwd320", "AK8PFJetFwd400", "AK8PFJetFwd450", "AK8PFJetFwd500", "PFHT180", "PFHT250", "PFHT370", "PFHT430", "PFHT510", "PFHT590", "PFHT680", "PFHT780", "PFHT890", "PFHT1050", "PFHT500_PFMET100_PFMHT100_IDTight", "PFHT500_PFMET110_PFMHT110_IDTight", "PFHT700_PFMET85_PFMHT85_IDTight", "PFHT700_PFMET95_PFMHT95_IDTight", "PFHT800_PFMET75_PFMHT75_IDTight", "PFHT800_PFMET85_PFMHT85_IDTight", "PFMET110_PFMHT110_IDTight", "PFMET120_PFMHT120_IDTight", "PFMET130_PFMHT130_IDTight", "PFMET140_PFMHT140_IDTight", "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", "PFMET120_PFMHT120_IDTight_PFHT60", "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", "PFMETTypeOne120_PFMHT120_IDTight_PFHT60", "PFMETTypeOne110_PFMHT110_IDTight", "PFMETTypeOne120_PFMHT120_IDTight", "PFMETTypeOne130_PFMHT130_IDTight", "PFMETTypeOne140_PFMHT140_IDTight", "PFMETNoMu110_PFMHTNoMu110_IDTight", "PFMETNoMu120_PFMHTNoMu120_IDTight", "PFMETNoMu130_PFMHTNoMu130_IDTight", "PFMETNoMu140_PFMHTNoMu140_IDTight", "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", "L1ETMHadSeeds", "CaloMHT90", "CaloMET80_NotCleaned", "CaloMET90_NotCleaned", "CaloMET100_NotCleaned", "CaloMET110_NotCleaned", "CaloMET250_NotCleaned", "CaloMET70_HBHECleaned", "CaloMET80_HBHECleaned", "CaloMET90_HBHECleaned", "CaloMET100_HBHECleaned", "CaloMET250_HBHECleaned", "CaloMET300_HBHECleaned", "CaloMET350_HBHECleaned", "PFMET200_NotCleaned", "PFMET200_HBHECleaned", "PFMET250_HBHECleaned", "PFMET300_HBHECleaned", "PFMET200_HBHE_BeamHaloCleaned", "PFMETTypeOne200_HBHE_BeamHaloCleaned", "MET105_IsoTrk50", "MET120_IsoTrk50", "SingleJet30_Mu12_SinglePFJet40", "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "DoublePFJets40_CaloBTagDeepCSV_p71", "DoublePFJets100_CaloBTagDeepCSV_p71", "DoublePFJets200_CaloBTagDeepCSV_p71", "DoublePFJets350_CaloBTagDeepCSV_p71", "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "Photon300_NoHE", "Mu8_TrkIsoVVL", "Mu8_DiEle12_CaloIdL_TrackIdL_DZ", "Mu8_DiEle12_CaloIdL_TrackIdL", "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", "Mu17_TrkIsoVVL", "Mu19_TrkIsoVVL", "BTagMu_AK4DiJet20_Mu5", "BTagMu_AK4DiJet40_Mu5", "BTagMu_AK4DiJet70_Mu5", "BTagMu_AK4DiJet110_Mu5", "BTagMu_AK4DiJet170_Mu5", "BTagMu_AK4Jet300_Mu5", "BTagMu_AK8DiJet170_Mu5", "BTagMu_AK8Jet170_DoubleMu5", "BTagMu_AK8Jet300_Mu5", "BTagMu_AK4DiJet20_Mu5_noalgo", "BTagMu_AK4DiJet40_Mu5_noalgo", "BTagMu_AK4DiJet70_Mu5_noalgo", "BTagMu_AK4DiJet110_Mu5_noalgo", "BTagMu_AK4DiJet170_Mu5_noalgo", "BTagMu_AK4Jet300_Mu5_noalgo", "BTagMu_AK8DiJet170_Mu5_noalgo", "BTagMu_AK8Jet170_DoubleMu5_noalgo", "BTagMu_AK8Jet300_Mu5_noalgo", "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", "Mu12_DoublePhoton20", "TriplePhoton_20_20_20_CaloIdLV2", "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", "TriplePhoton_30_30_10_CaloIdLV2", "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", "Photon20", "Photon33", "Photon50", "Photon75", "Photon90", "Photon120", "Photon150", "Photon175", "Photon200", "Photon100EB_TightID_TightIso", "Photon110EB_TightID_TightIso", "Photon120EB_TightID_TightIso", "Photon100EBHE10", "Photon100EEHE10", "Photon100EE_TightID_TightIso", "Photon50_R9Id90_HE10_IsoM", "Photon75_R9Id90_HE10_IsoM", "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", "Photon90_R9Id90_HE10_IsoM", "Photon120_R9Id90_HE10_IsoM", "Photon165_R9Id90_HE10_IsoM", "Photon90_CaloIdL_PFHT700", "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", "Photon35_TwoProngs35", "IsoMu24_TwoProngs35", "Dimuon0_Jpsi_L1_NoOS", "Dimuon0_Jpsi_NoVertexing_NoOS", "Dimuon0_Jpsi", "Dimuon0_Jpsi_NoVertexing", "Dimuon0_Jpsi_L1_4R_0er1p5R", "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", "Dimuon0_Jpsi3p5_Muon2", "Dimuon0_Upsilon_L1_4p5", "Dimuon0_Upsilon_L1_5", "Dimuon0_Upsilon_L1_4p5NoOS", "Dimuon0_Upsilon_L1_4p5er2p0", "Dimuon0_Upsilon_L1_4p5er2p0M", "Dimuon0_Upsilon_NoVertexing", "Dimuon0_Upsilon_L1_5M", "Dimuon0_LowMass_L1_0er1p5R", "Dimuon0_LowMass_L1_0er1p5", "Dimuon0_LowMass", "Dimuon0_LowMass_L1_4", "Dimuon0_LowMass_L1_4R", "Dimuon0_LowMass_L1_TM530", "Dimuon0_Upsilon_Muon_L1_TM0", "Dimuon0_Upsilon_Muon_NoL1Mass", "TripleMu_5_3_3_Mass3p8_DZ", "TripleMu_10_5_5_DZ", "TripleMu_12_10_5", "Tau3Mu_Mu7_Mu1_TkMu1_Tau15", "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", "DoubleMu3_DZ_PFMET50_PFMHT60", "DoubleMu3_DZ_PFMET70_PFMHT70", "DoubleMu3_DZ_PFMET90_PFMHT90", "DoubleMu3_Trk_Tau3mu_NoL1Mass", "DoubleMu4_Jpsi_Displaced", "DoubleMu4_Jpsi_NoVertexing", "DoubleMu4_JpsiTrkTrk_Displaced", "DoubleMu43NoFiltersNoVtx", "DoubleMu48NoFiltersNoVtx", "Mu43NoFiltersNoVtx_Photon43_CaloIdL", "Mu48NoFiltersNoVtx_Photon48_CaloIdL", "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", "DoubleMu33NoFiltersNoVtxDisplaced", "DoubleMu40NoFiltersNoVtxDisplaced", "DoubleMu20_7_Mass0to30_L1_DM4", "DoubleMu20_7_Mass0to30_L1_DM4EG", "HT425", "HT430_DisplacedDijet40_DisplacedTrack", "HT500_DisplacedDijet40_DisplacedTrack", "HT430_DisplacedDijet60_DisplacedTrack", "HT400_DisplacedDijet40_DisplacedTrack", "HT650_DisplacedDijet60_Inclusive", "HT550_DisplacedDijet60_Inclusive", "DiJet110_35_Mjj650_PFMET110", "DiJet110_35_Mjj650_PFMET120", "DiJet110_35_Mjj650_PFMET130", "TripleJet110_35_35_Mjj650_PFMET110", "TripleJet110_35_35_Mjj650_PFMET120", "TripleJet110_35_35_Mjj650_PFMET130", "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", "Ele28_eta2p1_WPTight_Gsf_HT150", "Ele28_HighEta_SC20_Mass55", "DoubleMu20_7_Mass0to30_Photon23", "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", "Ele15_IsoVVVL_PFHT450_PFMET50", "Ele15_IsoVVVL_PFHT450", "Ele50_IsoVVVL_PFHT450", "Ele15_IsoVVVL_PFHT600", "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", "Mu15_IsoVVVL_PFHT450_PFMET50", "Mu15_IsoVVVL_PFHT450", "Mu50_IsoVVVL_PFHT450", "Mu15_IsoVVVL_PFHT600", "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", "Dimuon10_PsiPrime_Barrel_Seagulls", "Dimuon20_Jpsi_Barrel_Seagulls", "Dimuon12_Upsilon_y1p4", "Dimuon14_Phi_Barrel_Seagulls", "Dimuon18_PsiPrime", "Dimuon25_Jpsi", "Dimuon18_PsiPrime_noCorrL1", "Dimuon24_Upsilon_noCorrL1", "Dimuon24_Phi_noCorrL1", "Dimuon25_Jpsi_noCorrL1", "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", "DiMu9_Ele9_CaloIdL_TrackIdL_DZ", "DiMu9_Ele9_CaloIdL_TrackIdL", "DoubleIsoMu20_eta2p1", "TrkMu12_DoubleTrkMu5NoFiltersNoVtx", "TrkMu16_DoubleTrkMu6NoFiltersNoVtx", "TrkMu17_DoubleTrkMu8NoFiltersNoVtx", "Mu8", "Mu17", "Mu19", "Mu17_Photon30_IsoCaloId", "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", "Ele8_CaloIdM_TrackIdM_PFJet30", "Ele17_CaloIdM_TrackIdM_PFJet30", "Ele23_CaloIdM_TrackIdM_PFJet30", "Ele50_CaloIdVT_GsfTrkIdT_PFJet165", "Ele115_CaloIdVT_GsfTrkIdT", "Ele135_CaloIdVT_GsfTrkIdT", "Ele145_CaloIdVT_GsfTrkIdT", "Ele200_CaloIdVT_GsfTrkIdT", "Ele250_CaloIdVT_GsfTrkIdT", "Ele300_CaloIdVT_GsfTrkIdT", "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", "PFHT330PT30_QuadPFJet_75_60_45_40", "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", "PFHT400_SixPFJet32", "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", "PFHT450_SixPFJet36", "PFHT350", "PFHT350MinPFJet15", "Photon60_R9Id90_CaloIdL_IsoL", "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", "ECALHT800", "DiSC30_18_EIso_AND_HE_Mass70", "Physics", "Physics_part0", "Physics_part1", "Physics_part2", "Physics_part3", "Physics_part4", "Physics_part5", "Physics_part6", "Physics_part7", "Random", "ZeroBias", "ZeroBias_Alignment", "ZeroBias_part0", "ZeroBias_part1", "ZeroBias_part2", "ZeroBias_part3", "ZeroBias_part4", "ZeroBias_part5", "ZeroBias_part6", "ZeroBias_part7", "AK4CaloJet30", "AK4CaloJet40", "AK4CaloJet50", "AK4CaloJet80", "AK4CaloJet100", "AK4CaloJet120", "AK4PFJet30", "AK4PFJet50", "AK4PFJet80", "AK4PFJet100", "AK4PFJet120", "SinglePhoton10_Eta3p1ForPPRef", "SinglePhoton20_Eta3p1ForPPRef", "SinglePhoton30_Eta3p1ForPPRef", "Photon20_HoverELoose", "Photon30_HoverELoose", "EcalCalibration", "HcalCalibration", "L1UnpairedBunchBptxMinus", "L1UnpairedBunchBptxPlus", "L1NotBptxOR", "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", "CDC_L2cosmic_5_er1p0", "CDC_L2cosmic_5p5_er1p0", "HcalNZS", "HcalPhiSym", "HcalIsolatedbunch", "IsoTrackHB", "IsoTrackHE", "ZeroBias_FirstCollisionAfterAbortGap", "ZeroBias_IsolatedBunches", "ZeroBias_FirstCollisionInTrain", "ZeroBias_LastCollisionInTrain", "ZeroBias_FirstBXAfterTrain", "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", "Ele16_Ele12_Ele8_CaloIdL_TrackIdL", "Rsq0p35", "Rsq0p40", "RsqMR300_Rsq0p09_MR200", "RsqMR320_Rsq0p09_MR200", "RsqMR300_Rsq0p09_MR200_4jet", "RsqMR320_Rsq0p09_MR200_4jet", "IsoMu27_MET90", "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", "PFMET100_PFMHT100_IDTight_PFHT60", "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", "PFMETTypeOne100_PFMHT100_IDTight_PFHT60", "Mu18_Mu9_SameSign", "Mu18_Mu9_SameSign_DZ", "Mu18_Mu9", "Mu18_Mu9_DZ", "Mu20_Mu10_SameSign", "Mu20_Mu10_SameSign_DZ", "Mu20_Mu10", "Mu20_Mu10_DZ", "Mu23_Mu12_SameSign", "Mu23_Mu12_SameSign_DZ", "Mu23_Mu12", "Mu23_Mu12_DZ", "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", "DoubleMu2_Jpsi_DoubleTkMu0_Phi", "DoubleMu3_DCA_PFMET50_PFMHT60", "TripleMu_5_3_3_Mass3p8_DCA", "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", "QuadPFJet98_83_71_15", "QuadPFJet103_88_75_15", "QuadPFJet105_88_76_15", "QuadPFJet111_90_80_15", "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", "Mu12_IP6_part0", "Mu12_IP6_part1", "Mu12_IP6_part2", "Mu12_IP6_part3", "Mu12_IP6_part4", "Mu9_IP5_part0", "Mu9_IP5_part1", "Mu9_IP5_part2", "Mu9_IP5_part3", "Mu9_IP5_part4", "Mu7_IP4_part0", "Mu7_IP4_part1", "Mu7_IP4_part2", "Mu7_IP4_part3", "Mu7_IP4_part4", "Mu9_IP4_part0", "Mu9_IP4_part1", "Mu9_IP4_part2", "Mu9_IP4_part3", "Mu9_IP4_part4", "Mu8_IP5_part0", "Mu8_IP5_part1", "Mu8_IP5_part2", "Mu8_IP5_part3", "Mu8_IP5_part4", "Mu8_IP6_part0", "Mu8_IP6_part1", "Mu8_IP6_part2", "Mu8_IP6_part3", "Mu8_IP6_part4", "Mu9_IP6_part0", "Mu9_IP6_part1", "Mu9_IP6_part2", "Mu9_IP6_part3", "Mu9_IP6_part4", "Mu8_IP3_part0", "Mu8_IP3_part1", "Mu8_IP3_part2", "Mu8_IP3_part3", "Mu8_IP3_part4", "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "TrkMu6NoFiltersNoVtx", "TrkMu16NoFiltersNoVtx", "DoubleTrkMu_16_6_NoFiltersNoVtx"};
  return blist;
}

panda::Triggers::Triggers(char const* _name/* = ""*/) :
  Singlet(_name)
{
}

panda::Triggers::Triggers(Triggers const& _src) :
  Singlet(_src),
  AK8PFJet360_TrimMass30(_src.AK8PFJet360_TrimMass30),
  AK8PFJet380_TrimMass30(_src.AK8PFJet380_TrimMass30),
  AK8PFJet400_TrimMass30(_src.AK8PFJet400_TrimMass30),
  AK8PFJet420_TrimMass30(_src.AK8PFJet420_TrimMass30),
  AK8PFHT750_TrimMass50(_src.AK8PFHT750_TrimMass50),
  AK8PFHT800_TrimMass50(_src.AK8PFHT800_TrimMass50),
  AK8PFHT850_TrimMass50(_src.AK8PFHT850_TrimMass50),
  AK8PFHT900_TrimMass50(_src.AK8PFHT900_TrimMass50),
  CaloJet500_NoJetID(_src.CaloJet500_NoJetID),
  CaloJet550_NoJetID(_src.CaloJet550_NoJetID),
  DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL(_src.DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL),
  DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon(_src.DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon),
  Trimuon5_3p5_2_Upsilon_Muon(_src.Trimuon5_3p5_2_Upsilon_Muon),
  TrimuonOpen_5_3p5_2_Upsilon_Muon(_src.TrimuonOpen_5_3p5_2_Upsilon_Muon),
  DoubleEle25_CaloIdL_MW(_src.DoubleEle25_CaloIdL_MW),
  DoubleEle27_CaloIdL_MW(_src.DoubleEle27_CaloIdL_MW),
  DoubleEle33_CaloIdL_MW(_src.DoubleEle33_CaloIdL_MW),
  DoubleEle24_eta2p1_WPTight_Gsf(_src.DoubleEle24_eta2p1_WPTight_Gsf),
  DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350(_src.DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350),
  DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350(_src.DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350),
  Ele27_Ele37_CaloIdL_MW(_src.Ele27_Ele37_CaloIdL_MW),
  Mu27_Ele37_CaloIdL_MW(_src.Mu27_Ele37_CaloIdL_MW),
  Mu37_Ele27_CaloIdL_MW(_src.Mu37_Ele27_CaloIdL_MW),
  Mu37_TkMu27(_src.Mu37_TkMu27),
  DoubleMu4_3_Bs(_src.DoubleMu4_3_Bs),
  DoubleMu4_3_Jpsi(_src.DoubleMu4_3_Jpsi),
  DoubleMu4_JpsiTrk_Displaced(_src.DoubleMu4_JpsiTrk_Displaced),
  DoubleMu4_LowMassNonResonantTrk_Displaced(_src.DoubleMu4_LowMassNonResonantTrk_Displaced),
  DoubleMu3_Trk_Tau3mu(_src.DoubleMu3_Trk_Tau3mu),
  DoubleMu3_TkMu_DsTau3Mu(_src.DoubleMu3_TkMu_DsTau3Mu),
  DoubleMu4_PsiPrimeTrk_Displaced(_src.DoubleMu4_PsiPrimeTrk_Displaced),
  DoubleMu4_Mass3p8_DZ_PFHT350(_src.DoubleMu4_Mass3p8_DZ_PFHT350),
  Mu3_PFJet40(_src.Mu3_PFJet40),
  Mu7p5_L2Mu2_Jpsi(_src.Mu7p5_L2Mu2_Jpsi),
  Mu7p5_L2Mu2_Upsilon(_src.Mu7p5_L2Mu2_Upsilon),
  Mu7p5_Track2_Jpsi(_src.Mu7p5_Track2_Jpsi),
  Mu7p5_Track3p5_Jpsi(_src.Mu7p5_Track3p5_Jpsi),
  Mu7p5_Track7_Jpsi(_src.Mu7p5_Track7_Jpsi),
  Mu7p5_Track2_Upsilon(_src.Mu7p5_Track2_Upsilon),
  Mu7p5_Track3p5_Upsilon(_src.Mu7p5_Track3p5_Upsilon),
  Mu7p5_Track7_Upsilon(_src.Mu7p5_Track7_Upsilon),
  Mu3_L1SingleMu5orSingleMu7(_src.Mu3_L1SingleMu5orSingleMu7),
  DoublePhoton33_CaloIdL(_src.DoublePhoton33_CaloIdL),
  DoublePhoton70(_src.DoublePhoton70),
  DoublePhoton85(_src.DoublePhoton85),
  Ele20_WPTight_Gsf(_src.Ele20_WPTight_Gsf),
  Ele15_WPLoose_Gsf(_src.Ele15_WPLoose_Gsf),
  Ele17_WPLoose_Gsf(_src.Ele17_WPLoose_Gsf),
  Ele20_WPLoose_Gsf(_src.Ele20_WPLoose_Gsf),
  Ele20_eta2p1_WPLoose_Gsf(_src.Ele20_eta2p1_WPLoose_Gsf),
  DiEle27_WPTightCaloOnly_L1DoubleEG(_src.DiEle27_WPTightCaloOnly_L1DoubleEG),
  Ele27_WPTight_Gsf(_src.Ele27_WPTight_Gsf),
  Ele28_WPTight_Gsf(_src.Ele28_WPTight_Gsf),
  Ele30_WPTight_Gsf(_src.Ele30_WPTight_Gsf),
  Ele32_WPTight_Gsf(_src.Ele32_WPTight_Gsf),
  Ele35_WPTight_Gsf(_src.Ele35_WPTight_Gsf),
  Ele35_WPTight_Gsf_L1EGMT(_src.Ele35_WPTight_Gsf_L1EGMT),
  Ele38_WPTight_Gsf(_src.Ele38_WPTight_Gsf),
  Ele40_WPTight_Gsf(_src.Ele40_WPTight_Gsf),
  Ele32_WPTight_Gsf_L1DoubleEG(_src.Ele32_WPTight_Gsf_L1DoubleEG),
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1),
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1),
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1),
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1),
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1),
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1(_src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1),
  HT450_Beamspot(_src.HT450_Beamspot),
  HT300_Beamspot(_src.HT300_Beamspot),
  ZeroBias_Beamspot(_src.ZeroBias_Beamspot),
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1(_src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1),
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1(_src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1),
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1(_src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1),
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1(_src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1),
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1(_src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1),
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1(_src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1),
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1(_src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1),
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1(_src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1),
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1(_src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1),
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1(_src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1),
  IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1(_src.IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1),
  IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1(_src.IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1),
  IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1(_src.IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1),
  IsoMu20(_src.IsoMu20),
  IsoMu24(_src.IsoMu24),
  IsoMu24_eta2p1(_src.IsoMu24_eta2p1),
  IsoMu27(_src.IsoMu27),
  IsoMu30(_src.IsoMu30),
  UncorrectedJetE30_NoBPTX(_src.UncorrectedJetE30_NoBPTX),
  UncorrectedJetE30_NoBPTX3BX(_src.UncorrectedJetE30_NoBPTX3BX),
  UncorrectedJetE60_NoBPTX3BX(_src.UncorrectedJetE60_NoBPTX3BX),
  UncorrectedJetE70_NoBPTX3BX(_src.UncorrectedJetE70_NoBPTX3BX),
  L1SingleMu18(_src.L1SingleMu18),
  L1SingleMu25(_src.L1SingleMu25),
  L2Mu10(_src.L2Mu10),
  L2Mu10_NoVertex_NoBPTX3BX(_src.L2Mu10_NoVertex_NoBPTX3BX),
  L2Mu10_NoVertex_NoBPTX(_src.L2Mu10_NoVertex_NoBPTX),
  L2Mu45_NoVertex_3Sta_NoBPTX3BX(_src.L2Mu45_NoVertex_3Sta_NoBPTX3BX),
  L2Mu40_NoVertex_3Sta_NoBPTX3BX(_src.L2Mu40_NoVertex_3Sta_NoBPTX3BX),
  L2Mu50(_src.L2Mu50),
  L2Mu23NoVtx_2Cha(_src.L2Mu23NoVtx_2Cha),
  L2Mu23NoVtx_2Cha_CosmicSeed(_src.L2Mu23NoVtx_2Cha_CosmicSeed),
  DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4(_src.DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4),
  DoubleL2Mu30NoVtx_2Cha_Eta2p4(_src.DoubleL2Mu30NoVtx_2Cha_Eta2p4),
  DoubleL2Mu50(_src.DoubleL2Mu50),
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed(_src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed),
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched(_src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched),
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed(_src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed),
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched(_src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched),
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4(_src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4),
  DoubleL2Mu23NoVtx_2Cha(_src.DoubleL2Mu23NoVtx_2Cha),
  DoubleL2Mu23NoVtx_2Cha_NoL2Matched(_src.DoubleL2Mu23NoVtx_2Cha_NoL2Matched),
  DoubleL2Mu25NoVtx_2Cha(_src.DoubleL2Mu25NoVtx_2Cha),
  DoubleL2Mu25NoVtx_2Cha_NoL2Matched(_src.DoubleL2Mu25NoVtx_2Cha_NoL2Matched),
  DoubleL2Mu25NoVtx_2Cha_Eta2p4(_src.DoubleL2Mu25NoVtx_2Cha_Eta2p4),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL),
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL(_src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ),
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ(_src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8),
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8(_src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8),
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8(_src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8),
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8(_src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8),
  Mu25_TkMu0_Onia(_src.Mu25_TkMu0_Onia),
  Mu30_TkMu0_Psi(_src.Mu30_TkMu0_Psi),
  Mu30_TkMu0_Upsilon(_src.Mu30_TkMu0_Upsilon),
  Mu20_TkMu0_Phi(_src.Mu20_TkMu0_Phi),
  Mu25_TkMu0_Phi(_src.Mu25_TkMu0_Phi),
  Mu12(_src.Mu12),
  Mu15(_src.Mu15),
  Mu20(_src.Mu20),
  Mu27(_src.Mu27),
  Mu50(_src.Mu50),
  Mu55(_src.Mu55),
  OldMu100(_src.OldMu100),
  TkMu100(_src.TkMu100),
  DiPFJetAve40(_src.DiPFJetAve40),
  DiPFJetAve60(_src.DiPFJetAve60),
  DiPFJetAve80(_src.DiPFJetAve80),
  DiPFJetAve140(_src.DiPFJetAve140),
  DiPFJetAve200(_src.DiPFJetAve200),
  DiPFJetAve260(_src.DiPFJetAve260),
  DiPFJetAve320(_src.DiPFJetAve320),
  DiPFJetAve400(_src.DiPFJetAve400),
  DiPFJetAve500(_src.DiPFJetAve500),
  DiPFJetAve60_HFJEC(_src.DiPFJetAve60_HFJEC),
  DiPFJetAve80_HFJEC(_src.DiPFJetAve80_HFJEC),
  DiPFJetAve100_HFJEC(_src.DiPFJetAve100_HFJEC),
  DiPFJetAve160_HFJEC(_src.DiPFJetAve160_HFJEC),
  DiPFJetAve220_HFJEC(_src.DiPFJetAve220_HFJEC),
  DiPFJetAve300_HFJEC(_src.DiPFJetAve300_HFJEC),
  AK8PFJet15(_src.AK8PFJet15),
  AK8PFJet25(_src.AK8PFJet25),
  AK8PFJet40(_src.AK8PFJet40),
  AK8PFJet60(_src.AK8PFJet60),
  AK8PFJet80(_src.AK8PFJet80),
  AK8PFJet140(_src.AK8PFJet140),
  AK8PFJet200(_src.AK8PFJet200),
  AK8PFJet260(_src.AK8PFJet260),
  AK8PFJet320(_src.AK8PFJet320),
  AK8PFJet400(_src.AK8PFJet400),
  AK8PFJet450(_src.AK8PFJet450),
  AK8PFJet500(_src.AK8PFJet500),
  AK8PFJet550(_src.AK8PFJet550),
  PFJet15(_src.PFJet15),
  PFJet25(_src.PFJet25),
  PFJet40(_src.PFJet40),
  PFJet60(_src.PFJet60),
  PFJet80(_src.PFJet80),
  PFJet140(_src.PFJet140),
  PFJet200(_src.PFJet200),
  PFJet260(_src.PFJet260),
  PFJet320(_src.PFJet320),
  PFJet400(_src.PFJet400),
  PFJet450(_src.PFJet450),
  PFJet500(_src.PFJet500),
  PFJet550(_src.PFJet550),
  PFJetFwd15(_src.PFJetFwd15),
  PFJetFwd25(_src.PFJetFwd25),
  PFJetFwd40(_src.PFJetFwd40),
  PFJetFwd60(_src.PFJetFwd60),
  PFJetFwd80(_src.PFJetFwd80),
  PFJetFwd140(_src.PFJetFwd140),
  PFJetFwd200(_src.PFJetFwd200),
  PFJetFwd260(_src.PFJetFwd260),
  PFJetFwd320(_src.PFJetFwd320),
  PFJetFwd400(_src.PFJetFwd400),
  PFJetFwd450(_src.PFJetFwd450),
  PFJetFwd500(_src.PFJetFwd500),
  AK8PFJetFwd15(_src.AK8PFJetFwd15),
  AK8PFJetFwd25(_src.AK8PFJetFwd25),
  AK8PFJetFwd40(_src.AK8PFJetFwd40),
  AK8PFJetFwd60(_src.AK8PFJetFwd60),
  AK8PFJetFwd80(_src.AK8PFJetFwd80),
  AK8PFJetFwd140(_src.AK8PFJetFwd140),
  AK8PFJetFwd200(_src.AK8PFJetFwd200),
  AK8PFJetFwd260(_src.AK8PFJetFwd260),
  AK8PFJetFwd320(_src.AK8PFJetFwd320),
  AK8PFJetFwd400(_src.AK8PFJetFwd400),
  AK8PFJetFwd450(_src.AK8PFJetFwd450),
  AK8PFJetFwd500(_src.AK8PFJetFwd500),
  PFHT180(_src.PFHT180),
  PFHT250(_src.PFHT250),
  PFHT370(_src.PFHT370),
  PFHT430(_src.PFHT430),
  PFHT510(_src.PFHT510),
  PFHT590(_src.PFHT590),
  PFHT680(_src.PFHT680),
  PFHT780(_src.PFHT780),
  PFHT890(_src.PFHT890),
  PFHT1050(_src.PFHT1050),
  PFHT500_PFMET100_PFMHT100_IDTight(_src.PFHT500_PFMET100_PFMHT100_IDTight),
  PFHT500_PFMET110_PFMHT110_IDTight(_src.PFHT500_PFMET110_PFMHT110_IDTight),
  PFHT700_PFMET85_PFMHT85_IDTight(_src.PFHT700_PFMET85_PFMHT85_IDTight),
  PFHT700_PFMET95_PFMHT95_IDTight(_src.PFHT700_PFMET95_PFMHT95_IDTight),
  PFHT800_PFMET75_PFMHT75_IDTight(_src.PFHT800_PFMET75_PFMHT75_IDTight),
  PFHT800_PFMET85_PFMHT85_IDTight(_src.PFHT800_PFMET85_PFMHT85_IDTight),
  PFMET110_PFMHT110_IDTight(_src.PFMET110_PFMHT110_IDTight),
  PFMET120_PFMHT120_IDTight(_src.PFMET120_PFMHT120_IDTight),
  PFMET130_PFMHT130_IDTight(_src.PFMET130_PFMHT130_IDTight),
  PFMET140_PFMHT140_IDTight(_src.PFMET140_PFMHT140_IDTight),
  PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1(_src.PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1),
  PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1(_src.PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1),
  PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1(_src.PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1),
  PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1(_src.PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1),
  PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1(_src.PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1),
  PFMET120_PFMHT120_IDTight_PFHT60(_src.PFMET120_PFMHT120_IDTight_PFHT60),
  PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60(_src.PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60),
  PFMETTypeOne120_PFMHT120_IDTight_PFHT60(_src.PFMETTypeOne120_PFMHT120_IDTight_PFHT60),
  PFMETTypeOne110_PFMHT110_IDTight(_src.PFMETTypeOne110_PFMHT110_IDTight),
  PFMETTypeOne120_PFMHT120_IDTight(_src.PFMETTypeOne120_PFMHT120_IDTight),
  PFMETTypeOne130_PFMHT130_IDTight(_src.PFMETTypeOne130_PFMHT130_IDTight),
  PFMETTypeOne140_PFMHT140_IDTight(_src.PFMETTypeOne140_PFMHT140_IDTight),
  PFMETNoMu110_PFMHTNoMu110_IDTight(_src.PFMETNoMu110_PFMHTNoMu110_IDTight),
  PFMETNoMu120_PFMHTNoMu120_IDTight(_src.PFMETNoMu120_PFMHTNoMu120_IDTight),
  PFMETNoMu130_PFMHTNoMu130_IDTight(_src.PFMETNoMu130_PFMHTNoMu130_IDTight),
  PFMETNoMu140_PFMHTNoMu140_IDTight(_src.PFMETNoMu140_PFMHTNoMu140_IDTight),
  MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight(_src.MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight),
  MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight(_src.MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight),
  MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight(_src.MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight),
  MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight(_src.MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight),
  L1ETMHadSeeds(_src.L1ETMHadSeeds),
  CaloMHT90(_src.CaloMHT90),
  CaloMET80_NotCleaned(_src.CaloMET80_NotCleaned),
  CaloMET90_NotCleaned(_src.CaloMET90_NotCleaned),
  CaloMET100_NotCleaned(_src.CaloMET100_NotCleaned),
  CaloMET110_NotCleaned(_src.CaloMET110_NotCleaned),
  CaloMET250_NotCleaned(_src.CaloMET250_NotCleaned),
  CaloMET70_HBHECleaned(_src.CaloMET70_HBHECleaned),
  CaloMET80_HBHECleaned(_src.CaloMET80_HBHECleaned),
  CaloMET90_HBHECleaned(_src.CaloMET90_HBHECleaned),
  CaloMET100_HBHECleaned(_src.CaloMET100_HBHECleaned),
  CaloMET250_HBHECleaned(_src.CaloMET250_HBHECleaned),
  CaloMET300_HBHECleaned(_src.CaloMET300_HBHECleaned),
  CaloMET350_HBHECleaned(_src.CaloMET350_HBHECleaned),
  PFMET200_NotCleaned(_src.PFMET200_NotCleaned),
  PFMET200_HBHECleaned(_src.PFMET200_HBHECleaned),
  PFMET250_HBHECleaned(_src.PFMET250_HBHECleaned),
  PFMET300_HBHECleaned(_src.PFMET300_HBHECleaned),
  PFMET200_HBHE_BeamHaloCleaned(_src.PFMET200_HBHE_BeamHaloCleaned),
  PFMETTypeOne200_HBHE_BeamHaloCleaned(_src.PFMETTypeOne200_HBHE_BeamHaloCleaned),
  MET105_IsoTrk50(_src.MET105_IsoTrk50),
  MET120_IsoTrk50(_src.MET120_IsoTrk50),
  SingleJet30_Mu12_SinglePFJet40(_src.SingleJet30_Mu12_SinglePFJet40),
  Mu12_DoublePFJets40_CaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets40_CaloBTagDeepCSV_p71),
  Mu12_DoublePFJets100_CaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets100_CaloBTagDeepCSV_p71),
  Mu12_DoublePFJets200_CaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets200_CaloBTagDeepCSV_p71),
  Mu12_DoublePFJets350_CaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets350_CaloBTagDeepCSV_p71),
  Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71),
  Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71),
  Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71(_src.Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71),
  DoublePFJets40_CaloBTagDeepCSV_p71(_src.DoublePFJets40_CaloBTagDeepCSV_p71),
  DoublePFJets100_CaloBTagDeepCSV_p71(_src.DoublePFJets100_CaloBTagDeepCSV_p71),
  DoublePFJets200_CaloBTagDeepCSV_p71(_src.DoublePFJets200_CaloBTagDeepCSV_p71),
  DoublePFJets350_CaloBTagDeepCSV_p71(_src.DoublePFJets350_CaloBTagDeepCSV_p71),
  DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71(_src.DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71),
  DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71(_src.DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71),
  Photon300_NoHE(_src.Photon300_NoHE),
  Mu8_TrkIsoVVL(_src.Mu8_TrkIsoVVL),
  Mu8_DiEle12_CaloIdL_TrackIdL_DZ(_src.Mu8_DiEle12_CaloIdL_TrackIdL_DZ),
  Mu8_DiEle12_CaloIdL_TrackIdL(_src.Mu8_DiEle12_CaloIdL_TrackIdL),
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ(_src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ),
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350(_src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5),
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(_src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL),
  Mu17_TrkIsoVVL(_src.Mu17_TrkIsoVVL),
  Mu19_TrkIsoVVL(_src.Mu19_TrkIsoVVL),
  BTagMu_AK4DiJet20_Mu5(_src.BTagMu_AK4DiJet20_Mu5),
  BTagMu_AK4DiJet40_Mu5(_src.BTagMu_AK4DiJet40_Mu5),
  BTagMu_AK4DiJet70_Mu5(_src.BTagMu_AK4DiJet70_Mu5),
  BTagMu_AK4DiJet110_Mu5(_src.BTagMu_AK4DiJet110_Mu5),
  BTagMu_AK4DiJet170_Mu5(_src.BTagMu_AK4DiJet170_Mu5),
  BTagMu_AK4Jet300_Mu5(_src.BTagMu_AK4Jet300_Mu5),
  BTagMu_AK8DiJet170_Mu5(_src.BTagMu_AK8DiJet170_Mu5),
  BTagMu_AK8Jet170_DoubleMu5(_src.BTagMu_AK8Jet170_DoubleMu5),
  BTagMu_AK8Jet300_Mu5(_src.BTagMu_AK8Jet300_Mu5),
  BTagMu_AK4DiJet20_Mu5_noalgo(_src.BTagMu_AK4DiJet20_Mu5_noalgo),
  BTagMu_AK4DiJet40_Mu5_noalgo(_src.BTagMu_AK4DiJet40_Mu5_noalgo),
  BTagMu_AK4DiJet70_Mu5_noalgo(_src.BTagMu_AK4DiJet70_Mu5_noalgo),
  BTagMu_AK4DiJet110_Mu5_noalgo(_src.BTagMu_AK4DiJet110_Mu5_noalgo),
  BTagMu_AK4DiJet170_Mu5_noalgo(_src.BTagMu_AK4DiJet170_Mu5_noalgo),
  BTagMu_AK4Jet300_Mu5_noalgo(_src.BTagMu_AK4Jet300_Mu5_noalgo),
  BTagMu_AK8DiJet170_Mu5_noalgo(_src.BTagMu_AK8DiJet170_Mu5_noalgo),
  BTagMu_AK8Jet170_DoubleMu5_noalgo(_src.BTagMu_AK8Jet170_DoubleMu5_noalgo),
  BTagMu_AK8Jet300_Mu5_noalgo(_src.BTagMu_AK8Jet300_Mu5_noalgo),
  Ele15_Ele8_CaloIdL_TrackIdL_IsoVL(_src.Ele15_Ele8_CaloIdL_TrackIdL_IsoVL),
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(_src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ),
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL(_src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL),
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(_src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ),
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL(_src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL),
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(_src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL),
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(_src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ),
  Mu12_DoublePhoton20(_src.Mu12_DoublePhoton20),
  TriplePhoton_20_20_20_CaloIdLV2(_src.TriplePhoton_20_20_20_CaloIdLV2),
  TriplePhoton_20_20_20_CaloIdLV2_R9IdVL(_src.TriplePhoton_20_20_20_CaloIdLV2_R9IdVL),
  TriplePhoton_30_30_10_CaloIdLV2(_src.TriplePhoton_30_30_10_CaloIdLV2),
  TriplePhoton_30_30_10_CaloIdLV2_R9IdVL(_src.TriplePhoton_30_30_10_CaloIdLV2_R9IdVL),
  TriplePhoton_35_35_5_CaloIdLV2_R9IdVL(_src.TriplePhoton_35_35_5_CaloIdLV2_R9IdVL),
  Photon20(_src.Photon20),
  Photon33(_src.Photon33),
  Photon50(_src.Photon50),
  Photon75(_src.Photon75),
  Photon90(_src.Photon90),
  Photon120(_src.Photon120),
  Photon150(_src.Photon150),
  Photon175(_src.Photon175),
  Photon200(_src.Photon200),
  Photon100EB_TightID_TightIso(_src.Photon100EB_TightID_TightIso),
  Photon110EB_TightID_TightIso(_src.Photon110EB_TightID_TightIso),
  Photon120EB_TightID_TightIso(_src.Photon120EB_TightID_TightIso),
  Photon100EBHE10(_src.Photon100EBHE10),
  Photon100EEHE10(_src.Photon100EEHE10),
  Photon100EE_TightID_TightIso(_src.Photon100EE_TightID_TightIso),
  Photon50_R9Id90_HE10_IsoM(_src.Photon50_R9Id90_HE10_IsoM),
  Photon75_R9Id90_HE10_IsoM(_src.Photon75_R9Id90_HE10_IsoM),
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3(_src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3),
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3(_src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3),
  Photon90_R9Id90_HE10_IsoM(_src.Photon90_R9Id90_HE10_IsoM),
  Photon120_R9Id90_HE10_IsoM(_src.Photon120_R9Id90_HE10_IsoM),
  Photon165_R9Id90_HE10_IsoM(_src.Photon165_R9Id90_HE10_IsoM),
  Photon90_CaloIdL_PFHT700(_src.Photon90_CaloIdL_PFHT700),
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(_src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90),
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95(_src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95),
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(_src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55),
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(_src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55),
  Photon35_TwoProngs35(_src.Photon35_TwoProngs35),
  IsoMu24_TwoProngs35(_src.IsoMu24_TwoProngs35),
  Dimuon0_Jpsi_L1_NoOS(_src.Dimuon0_Jpsi_L1_NoOS),
  Dimuon0_Jpsi_NoVertexing_NoOS(_src.Dimuon0_Jpsi_NoVertexing_NoOS),
  Dimuon0_Jpsi(_src.Dimuon0_Jpsi),
  Dimuon0_Jpsi_NoVertexing(_src.Dimuon0_Jpsi_NoVertexing),
  Dimuon0_Jpsi_L1_4R_0er1p5R(_src.Dimuon0_Jpsi_L1_4R_0er1p5R),
  Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R(_src.Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R),
  Dimuon0_Jpsi3p5_Muon2(_src.Dimuon0_Jpsi3p5_Muon2),
  Dimuon0_Upsilon_L1_4p5(_src.Dimuon0_Upsilon_L1_4p5),
  Dimuon0_Upsilon_L1_5(_src.Dimuon0_Upsilon_L1_5),
  Dimuon0_Upsilon_L1_4p5NoOS(_src.Dimuon0_Upsilon_L1_4p5NoOS),
  Dimuon0_Upsilon_L1_4p5er2p0(_src.Dimuon0_Upsilon_L1_4p5er2p0),
  Dimuon0_Upsilon_L1_4p5er2p0M(_src.Dimuon0_Upsilon_L1_4p5er2p0M),
  Dimuon0_Upsilon_NoVertexing(_src.Dimuon0_Upsilon_NoVertexing),
  Dimuon0_Upsilon_L1_5M(_src.Dimuon0_Upsilon_L1_5M),
  Dimuon0_LowMass_L1_0er1p5R(_src.Dimuon0_LowMass_L1_0er1p5R),
  Dimuon0_LowMass_L1_0er1p5(_src.Dimuon0_LowMass_L1_0er1p5),
  Dimuon0_LowMass(_src.Dimuon0_LowMass),
  Dimuon0_LowMass_L1_4(_src.Dimuon0_LowMass_L1_4),
  Dimuon0_LowMass_L1_4R(_src.Dimuon0_LowMass_L1_4R),
  Dimuon0_LowMass_L1_TM530(_src.Dimuon0_LowMass_L1_TM530),
  Dimuon0_Upsilon_Muon_L1_TM0(_src.Dimuon0_Upsilon_Muon_L1_TM0),
  Dimuon0_Upsilon_Muon_NoL1Mass(_src.Dimuon0_Upsilon_Muon_NoL1Mass),
  TripleMu_5_3_3_Mass3p8_DZ(_src.TripleMu_5_3_3_Mass3p8_DZ),
  TripleMu_10_5_5_DZ(_src.TripleMu_10_5_5_DZ),
  TripleMu_12_10_5(_src.TripleMu_12_10_5),
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15(_src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15),
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1(_src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1),
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15(_src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15),
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1(_src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1),
  DoubleMu3_DZ_PFMET50_PFMHT60(_src.DoubleMu3_DZ_PFMET50_PFMHT60),
  DoubleMu3_DZ_PFMET70_PFMHT70(_src.DoubleMu3_DZ_PFMET70_PFMHT70),
  DoubleMu3_DZ_PFMET90_PFMHT90(_src.DoubleMu3_DZ_PFMET90_PFMHT90),
  DoubleMu3_Trk_Tau3mu_NoL1Mass(_src.DoubleMu3_Trk_Tau3mu_NoL1Mass),
  DoubleMu4_Jpsi_Displaced(_src.DoubleMu4_Jpsi_Displaced),
  DoubleMu4_Jpsi_NoVertexing(_src.DoubleMu4_Jpsi_NoVertexing),
  DoubleMu4_JpsiTrkTrk_Displaced(_src.DoubleMu4_JpsiTrkTrk_Displaced),
  DoubleMu43NoFiltersNoVtx(_src.DoubleMu43NoFiltersNoVtx),
  DoubleMu48NoFiltersNoVtx(_src.DoubleMu48NoFiltersNoVtx),
  Mu43NoFiltersNoVtx_Photon43_CaloIdL(_src.Mu43NoFiltersNoVtx_Photon43_CaloIdL),
  Mu48NoFiltersNoVtx_Photon48_CaloIdL(_src.Mu48NoFiltersNoVtx_Photon48_CaloIdL),
  Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL(_src.Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL),
  Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL(_src.Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL),
  DoubleMu33NoFiltersNoVtxDisplaced(_src.DoubleMu33NoFiltersNoVtxDisplaced),
  DoubleMu40NoFiltersNoVtxDisplaced(_src.DoubleMu40NoFiltersNoVtxDisplaced),
  DoubleMu20_7_Mass0to30_L1_DM4(_src.DoubleMu20_7_Mass0to30_L1_DM4),
  DoubleMu20_7_Mass0to30_L1_DM4EG(_src.DoubleMu20_7_Mass0to30_L1_DM4EG),
  HT425(_src.HT425),
  HT430_DisplacedDijet40_DisplacedTrack(_src.HT430_DisplacedDijet40_DisplacedTrack),
  HT500_DisplacedDijet40_DisplacedTrack(_src.HT500_DisplacedDijet40_DisplacedTrack),
  HT430_DisplacedDijet60_DisplacedTrack(_src.HT430_DisplacedDijet60_DisplacedTrack),
  HT400_DisplacedDijet40_DisplacedTrack(_src.HT400_DisplacedDijet40_DisplacedTrack),
  HT650_DisplacedDijet60_Inclusive(_src.HT650_DisplacedDijet60_Inclusive),
  HT550_DisplacedDijet60_Inclusive(_src.HT550_DisplacedDijet60_Inclusive),
  DiJet110_35_Mjj650_PFMET110(_src.DiJet110_35_Mjj650_PFMET110),
  DiJet110_35_Mjj650_PFMET120(_src.DiJet110_35_Mjj650_PFMET120),
  DiJet110_35_Mjj650_PFMET130(_src.DiJet110_35_Mjj650_PFMET130),
  TripleJet110_35_35_Mjj650_PFMET110(_src.TripleJet110_35_35_Mjj650_PFMET110),
  TripleJet110_35_35_Mjj650_PFMET120(_src.TripleJet110_35_35_Mjj650_PFMET120),
  TripleJet110_35_35_Mjj650_PFMET130(_src.TripleJet110_35_35_Mjj650_PFMET130),
  Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned(_src.Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned),
  Ele28_eta2p1_WPTight_Gsf_HT150(_src.Ele28_eta2p1_WPTight_Gsf_HT150),
  Ele28_HighEta_SC20_Mass55(_src.Ele28_HighEta_SC20_Mass55),
  DoubleMu20_7_Mass0to30_Photon23(_src.DoubleMu20_7_Mass0to30_Photon23),
  Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5(_src.Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5),
  Ele15_IsoVVVL_PFHT450_PFMET50(_src.Ele15_IsoVVVL_PFHT450_PFMET50),
  Ele15_IsoVVVL_PFHT450(_src.Ele15_IsoVVVL_PFHT450),
  Ele50_IsoVVVL_PFHT450(_src.Ele50_IsoVVVL_PFHT450),
  Ele15_IsoVVVL_PFHT600(_src.Ele15_IsoVVVL_PFHT600),
  Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60(_src.Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60),
  Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60(_src.Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60),
  Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60(_src.Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60),
  Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5(_src.Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5),
  Mu15_IsoVVVL_PFHT450_PFMET50(_src.Mu15_IsoVVVL_PFHT450_PFMET50),
  Mu15_IsoVVVL_PFHT450(_src.Mu15_IsoVVVL_PFHT450),
  Mu50_IsoVVVL_PFHT450(_src.Mu50_IsoVVVL_PFHT450),
  Mu15_IsoVVVL_PFHT600(_src.Mu15_IsoVVVL_PFHT600),
  Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight),
  Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight(_src.Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight),
  Dimuon10_PsiPrime_Barrel_Seagulls(_src.Dimuon10_PsiPrime_Barrel_Seagulls),
  Dimuon20_Jpsi_Barrel_Seagulls(_src.Dimuon20_Jpsi_Barrel_Seagulls),
  Dimuon12_Upsilon_y1p4(_src.Dimuon12_Upsilon_y1p4),
  Dimuon14_Phi_Barrel_Seagulls(_src.Dimuon14_Phi_Barrel_Seagulls),
  Dimuon18_PsiPrime(_src.Dimuon18_PsiPrime),
  Dimuon25_Jpsi(_src.Dimuon25_Jpsi),
  Dimuon18_PsiPrime_noCorrL1(_src.Dimuon18_PsiPrime_noCorrL1),
  Dimuon24_Upsilon_noCorrL1(_src.Dimuon24_Upsilon_noCorrL1),
  Dimuon24_Phi_noCorrL1(_src.Dimuon24_Phi_noCorrL1),
  Dimuon25_Jpsi_noCorrL1(_src.Dimuon25_Jpsi_noCorrL1),
  DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8(_src.DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8),
  DiMu9_Ele9_CaloIdL_TrackIdL_DZ(_src.DiMu9_Ele9_CaloIdL_TrackIdL_DZ),
  DiMu9_Ele9_CaloIdL_TrackIdL(_src.DiMu9_Ele9_CaloIdL_TrackIdL),
  DoubleIsoMu20_eta2p1(_src.DoubleIsoMu20_eta2p1),
  TrkMu12_DoubleTrkMu5NoFiltersNoVtx(_src.TrkMu12_DoubleTrkMu5NoFiltersNoVtx),
  TrkMu16_DoubleTrkMu6NoFiltersNoVtx(_src.TrkMu16_DoubleTrkMu6NoFiltersNoVtx),
  TrkMu17_DoubleTrkMu8NoFiltersNoVtx(_src.TrkMu17_DoubleTrkMu8NoFiltersNoVtx),
  Mu8(_src.Mu8),
  Mu17(_src.Mu17),
  Mu19(_src.Mu19),
  Mu17_Photon30_IsoCaloId(_src.Mu17_Photon30_IsoCaloId),
  Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30(_src.Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30),
  Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30(_src.Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30),
  Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30(_src.Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30),
  Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30(_src.Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30),
  Ele8_CaloIdM_TrackIdM_PFJet30(_src.Ele8_CaloIdM_TrackIdM_PFJet30),
  Ele17_CaloIdM_TrackIdM_PFJet30(_src.Ele17_CaloIdM_TrackIdM_PFJet30),
  Ele23_CaloIdM_TrackIdM_PFJet30(_src.Ele23_CaloIdM_TrackIdM_PFJet30),
  Ele50_CaloIdVT_GsfTrkIdT_PFJet165(_src.Ele50_CaloIdVT_GsfTrkIdT_PFJet165),
  Ele115_CaloIdVT_GsfTrkIdT(_src.Ele115_CaloIdVT_GsfTrkIdT),
  Ele135_CaloIdVT_GsfTrkIdT(_src.Ele135_CaloIdVT_GsfTrkIdT),
  Ele145_CaloIdVT_GsfTrkIdT(_src.Ele145_CaloIdVT_GsfTrkIdT),
  Ele200_CaloIdVT_GsfTrkIdT(_src.Ele200_CaloIdVT_GsfTrkIdT),
  Ele250_CaloIdVT_GsfTrkIdT(_src.Ele250_CaloIdVT_GsfTrkIdT),
  Ele300_CaloIdVT_GsfTrkIdT(_src.Ele300_CaloIdVT_GsfTrkIdT),
  PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5(_src.PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5),
  PFHT330PT30_QuadPFJet_75_60_45_40(_src.PFHT330PT30_QuadPFJet_75_60_45_40),
  PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94(_src.PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94),
  PFHT400_SixPFJet32(_src.PFHT400_SixPFJet32),
  PFHT450_SixPFJet36_PFBTagDeepCSV_1p59(_src.PFHT450_SixPFJet36_PFBTagDeepCSV_1p59),
  PFHT450_SixPFJet36(_src.PFHT450_SixPFJet36),
  PFHT350(_src.PFHT350),
  PFHT350MinPFJet15(_src.PFHT350MinPFJet15),
  Photon60_R9Id90_CaloIdL_IsoL(_src.Photon60_R9Id90_CaloIdL_IsoL),
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL(_src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL),
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15(_src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15),
  ECALHT800(_src.ECALHT800),
  DiSC30_18_EIso_AND_HE_Mass70(_src.DiSC30_18_EIso_AND_HE_Mass70),
  Physics(_src.Physics),
  Physics_part0(_src.Physics_part0),
  Physics_part1(_src.Physics_part1),
  Physics_part2(_src.Physics_part2),
  Physics_part3(_src.Physics_part3),
  Physics_part4(_src.Physics_part4),
  Physics_part5(_src.Physics_part5),
  Physics_part6(_src.Physics_part6),
  Physics_part7(_src.Physics_part7),
  Random(_src.Random),
  ZeroBias(_src.ZeroBias),
  ZeroBias_Alignment(_src.ZeroBias_Alignment),
  ZeroBias_part0(_src.ZeroBias_part0),
  ZeroBias_part1(_src.ZeroBias_part1),
  ZeroBias_part2(_src.ZeroBias_part2),
  ZeroBias_part3(_src.ZeroBias_part3),
  ZeroBias_part4(_src.ZeroBias_part4),
  ZeroBias_part5(_src.ZeroBias_part5),
  ZeroBias_part6(_src.ZeroBias_part6),
  ZeroBias_part7(_src.ZeroBias_part7),
  AK4CaloJet30(_src.AK4CaloJet30),
  AK4CaloJet40(_src.AK4CaloJet40),
  AK4CaloJet50(_src.AK4CaloJet50),
  AK4CaloJet80(_src.AK4CaloJet80),
  AK4CaloJet100(_src.AK4CaloJet100),
  AK4CaloJet120(_src.AK4CaloJet120),
  AK4PFJet30(_src.AK4PFJet30),
  AK4PFJet50(_src.AK4PFJet50),
  AK4PFJet80(_src.AK4PFJet80),
  AK4PFJet100(_src.AK4PFJet100),
  AK4PFJet120(_src.AK4PFJet120),
  SinglePhoton10_Eta3p1ForPPRef(_src.SinglePhoton10_Eta3p1ForPPRef),
  SinglePhoton20_Eta3p1ForPPRef(_src.SinglePhoton20_Eta3p1ForPPRef),
  SinglePhoton30_Eta3p1ForPPRef(_src.SinglePhoton30_Eta3p1ForPPRef),
  Photon20_HoverELoose(_src.Photon20_HoverELoose),
  Photon30_HoverELoose(_src.Photon30_HoverELoose),
  EcalCalibration(_src.EcalCalibration),
  HcalCalibration(_src.HcalCalibration),
  L1UnpairedBunchBptxMinus(_src.L1UnpairedBunchBptxMinus),
  L1UnpairedBunchBptxPlus(_src.L1UnpairedBunchBptxPlus),
  L1NotBptxOR(_src.L1NotBptxOR),
  L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142(_src.L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142),
  CDC_L2cosmic_5_er1p0(_src.CDC_L2cosmic_5_er1p0),
  CDC_L2cosmic_5p5_er1p0(_src.CDC_L2cosmic_5p5_er1p0),
  HcalNZS(_src.HcalNZS),
  HcalPhiSym(_src.HcalPhiSym),
  HcalIsolatedbunch(_src.HcalIsolatedbunch),
  IsoTrackHB(_src.IsoTrackHB),
  IsoTrackHE(_src.IsoTrackHE),
  ZeroBias_FirstCollisionAfterAbortGap(_src.ZeroBias_FirstCollisionAfterAbortGap),
  ZeroBias_IsolatedBunches(_src.ZeroBias_IsolatedBunches),
  ZeroBias_FirstCollisionInTrain(_src.ZeroBias_FirstCollisionInTrain),
  ZeroBias_LastCollisionInTrain(_src.ZeroBias_LastCollisionInTrain),
  ZeroBias_FirstBXAfterTrain(_src.ZeroBias_FirstBXAfterTrain),
  IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(_src.IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140),
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(_src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr),
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr(_src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr),
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1(_src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1),
  MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1(_src.MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1),
  MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1(_src.MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1),
  Ele16_Ele12_Ele8_CaloIdL_TrackIdL(_src.Ele16_Ele12_Ele8_CaloIdL_TrackIdL),
  Rsq0p35(_src.Rsq0p35),
  Rsq0p40(_src.Rsq0p40),
  RsqMR300_Rsq0p09_MR200(_src.RsqMR300_Rsq0p09_MR200),
  RsqMR320_Rsq0p09_MR200(_src.RsqMR320_Rsq0p09_MR200),
  RsqMR300_Rsq0p09_MR200_4jet(_src.RsqMR300_Rsq0p09_MR200_4jet),
  RsqMR320_Rsq0p09_MR200_4jet(_src.RsqMR320_Rsq0p09_MR200_4jet),
  IsoMu27_MET90(_src.IsoMu27_MET90),
  DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg(_src.DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg),
  DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg(_src.DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg),
  DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg(_src.DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg),
  DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg(_src.DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg),
  DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg(_src.DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg),
  DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg(_src.DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg),
  DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg(_src.DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg),
  DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg(_src.DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg),
  VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1(_src.VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1),
  VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1(_src.VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1),
  VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1(_src.VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1),
  Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50(_src.Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50),
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3(_src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3),
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3(_src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3),
  PFMET100_PFMHT100_IDTight_PFHT60(_src.PFMET100_PFMHT100_IDTight_PFHT60),
  PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60(_src.PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60),
  PFMETTypeOne100_PFMHT100_IDTight_PFHT60(_src.PFMETTypeOne100_PFMHT100_IDTight_PFHT60),
  Mu18_Mu9_SameSign(_src.Mu18_Mu9_SameSign),
  Mu18_Mu9_SameSign_DZ(_src.Mu18_Mu9_SameSign_DZ),
  Mu18_Mu9(_src.Mu18_Mu9),
  Mu18_Mu9_DZ(_src.Mu18_Mu9_DZ),
  Mu20_Mu10_SameSign(_src.Mu20_Mu10_SameSign),
  Mu20_Mu10_SameSign_DZ(_src.Mu20_Mu10_SameSign_DZ),
  Mu20_Mu10(_src.Mu20_Mu10),
  Mu20_Mu10_DZ(_src.Mu20_Mu10_DZ),
  Mu23_Mu12_SameSign(_src.Mu23_Mu12_SameSign),
  Mu23_Mu12_SameSign_DZ(_src.Mu23_Mu12_SameSign_DZ),
  Mu23_Mu12(_src.Mu23_Mu12),
  Mu23_Mu12_DZ(_src.Mu23_Mu12_DZ),
  DoubleMu2_Jpsi_DoubleTrk1_Phi1p05(_src.DoubleMu2_Jpsi_DoubleTrk1_Phi1p05),
  DoubleMu2_Jpsi_DoubleTkMu0_Phi(_src.DoubleMu2_Jpsi_DoubleTkMu0_Phi),
  DoubleMu3_DCA_PFMET50_PFMHT60(_src.DoubleMu3_DCA_PFMET50_PFMHT60),
  TripleMu_5_3_3_Mass3p8_DCA(_src.TripleMu_5_3_3_Mass3p8_DCA),
  QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1(_src.QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1),
  QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1(_src.QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1),
  QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1(_src.QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1),
  QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2(_src.QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2),
  QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2(_src.QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2),
  QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2(_src.QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2),
  QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2(_src.QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2),
  QuadPFJet98_83_71_15(_src.QuadPFJet98_83_71_15),
  QuadPFJet103_88_75_15(_src.QuadPFJet103_88_75_15),
  QuadPFJet105_88_76_15(_src.QuadPFJet105_88_76_15),
  QuadPFJet111_90_80_15(_src.QuadPFJet111_90_80_15),
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17(_src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17),
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1(_src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1),
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02(_src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02),
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2(_src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2),
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4(_src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4),
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55(_src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55),
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto(_src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto),
  Mu12_IP6_part0(_src.Mu12_IP6_part0),
  Mu12_IP6_part1(_src.Mu12_IP6_part1),
  Mu12_IP6_part2(_src.Mu12_IP6_part2),
  Mu12_IP6_part3(_src.Mu12_IP6_part3),
  Mu12_IP6_part4(_src.Mu12_IP6_part4),
  Mu9_IP5_part0(_src.Mu9_IP5_part0),
  Mu9_IP5_part1(_src.Mu9_IP5_part1),
  Mu9_IP5_part2(_src.Mu9_IP5_part2),
  Mu9_IP5_part3(_src.Mu9_IP5_part3),
  Mu9_IP5_part4(_src.Mu9_IP5_part4),
  Mu7_IP4_part0(_src.Mu7_IP4_part0),
  Mu7_IP4_part1(_src.Mu7_IP4_part1),
  Mu7_IP4_part2(_src.Mu7_IP4_part2),
  Mu7_IP4_part3(_src.Mu7_IP4_part3),
  Mu7_IP4_part4(_src.Mu7_IP4_part4),
  Mu9_IP4_part0(_src.Mu9_IP4_part0),
  Mu9_IP4_part1(_src.Mu9_IP4_part1),
  Mu9_IP4_part2(_src.Mu9_IP4_part2),
  Mu9_IP4_part3(_src.Mu9_IP4_part3),
  Mu9_IP4_part4(_src.Mu9_IP4_part4),
  Mu8_IP5_part0(_src.Mu8_IP5_part0),
  Mu8_IP5_part1(_src.Mu8_IP5_part1),
  Mu8_IP5_part2(_src.Mu8_IP5_part2),
  Mu8_IP5_part3(_src.Mu8_IP5_part3),
  Mu8_IP5_part4(_src.Mu8_IP5_part4),
  Mu8_IP6_part0(_src.Mu8_IP6_part0),
  Mu8_IP6_part1(_src.Mu8_IP6_part1),
  Mu8_IP6_part2(_src.Mu8_IP6_part2),
  Mu8_IP6_part3(_src.Mu8_IP6_part3),
  Mu8_IP6_part4(_src.Mu8_IP6_part4),
  Mu9_IP6_part0(_src.Mu9_IP6_part0),
  Mu9_IP6_part1(_src.Mu9_IP6_part1),
  Mu9_IP6_part2(_src.Mu9_IP6_part2),
  Mu9_IP6_part3(_src.Mu9_IP6_part3),
  Mu9_IP6_part4(_src.Mu9_IP6_part4),
  Mu8_IP3_part0(_src.Mu8_IP3_part0),
  Mu8_IP3_part1(_src.Mu8_IP3_part1),
  Mu8_IP3_part2(_src.Mu8_IP3_part2),
  Mu8_IP3_part3(_src.Mu8_IP3_part3),
  Mu8_IP3_part4(_src.Mu8_IP3_part4),
  QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1(_src.QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1),
  TrkMu6NoFiltersNoVtx(_src.TrkMu6NoFiltersNoVtx),
  TrkMu16NoFiltersNoVtx(_src.TrkMu16NoFiltersNoVtx),
  DoubleTrkMu_16_6_NoFiltersNoVtx(_src.DoubleTrkMu_16_6_NoFiltersNoVtx)
{
  AK8PFJet360_TrimMass30 = _src.AK8PFJet360_TrimMass30;
  AK8PFJet380_TrimMass30 = _src.AK8PFJet380_TrimMass30;
  AK8PFJet400_TrimMass30 = _src.AK8PFJet400_TrimMass30;
  AK8PFJet420_TrimMass30 = _src.AK8PFJet420_TrimMass30;
  AK8PFHT750_TrimMass50 = _src.AK8PFHT750_TrimMass50;
  AK8PFHT800_TrimMass50 = _src.AK8PFHT800_TrimMass50;
  AK8PFHT850_TrimMass50 = _src.AK8PFHT850_TrimMass50;
  AK8PFHT900_TrimMass50 = _src.AK8PFHT900_TrimMass50;
  CaloJet500_NoJetID = _src.CaloJet500_NoJetID;
  CaloJet550_NoJetID = _src.CaloJet550_NoJetID;
  DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL = _src.DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;
  DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon = _src.DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;
  Trimuon5_3p5_2_Upsilon_Muon = _src.Trimuon5_3p5_2_Upsilon_Muon;
  TrimuonOpen_5_3p5_2_Upsilon_Muon = _src.TrimuonOpen_5_3p5_2_Upsilon_Muon;
  DoubleEle25_CaloIdL_MW = _src.DoubleEle25_CaloIdL_MW;
  DoubleEle27_CaloIdL_MW = _src.DoubleEle27_CaloIdL_MW;
  DoubleEle33_CaloIdL_MW = _src.DoubleEle33_CaloIdL_MW;
  DoubleEle24_eta2p1_WPTight_Gsf = _src.DoubleEle24_eta2p1_WPTight_Gsf;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 = _src.DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 = _src.DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
  Ele27_Ele37_CaloIdL_MW = _src.Ele27_Ele37_CaloIdL_MW;
  Mu27_Ele37_CaloIdL_MW = _src.Mu27_Ele37_CaloIdL_MW;
  Mu37_Ele27_CaloIdL_MW = _src.Mu37_Ele27_CaloIdL_MW;
  Mu37_TkMu27 = _src.Mu37_TkMu27;
  DoubleMu4_3_Bs = _src.DoubleMu4_3_Bs;
  DoubleMu4_3_Jpsi = _src.DoubleMu4_3_Jpsi;
  DoubleMu4_JpsiTrk_Displaced = _src.DoubleMu4_JpsiTrk_Displaced;
  DoubleMu4_LowMassNonResonantTrk_Displaced = _src.DoubleMu4_LowMassNonResonantTrk_Displaced;
  DoubleMu3_Trk_Tau3mu = _src.DoubleMu3_Trk_Tau3mu;
  DoubleMu3_TkMu_DsTau3Mu = _src.DoubleMu3_TkMu_DsTau3Mu;
  DoubleMu4_PsiPrimeTrk_Displaced = _src.DoubleMu4_PsiPrimeTrk_Displaced;
  DoubleMu4_Mass3p8_DZ_PFHT350 = _src.DoubleMu4_Mass3p8_DZ_PFHT350;
  Mu3_PFJet40 = _src.Mu3_PFJet40;
  Mu7p5_L2Mu2_Jpsi = _src.Mu7p5_L2Mu2_Jpsi;
  Mu7p5_L2Mu2_Upsilon = _src.Mu7p5_L2Mu2_Upsilon;
  Mu7p5_Track2_Jpsi = _src.Mu7p5_Track2_Jpsi;
  Mu7p5_Track3p5_Jpsi = _src.Mu7p5_Track3p5_Jpsi;
  Mu7p5_Track7_Jpsi = _src.Mu7p5_Track7_Jpsi;
  Mu7p5_Track2_Upsilon = _src.Mu7p5_Track2_Upsilon;
  Mu7p5_Track3p5_Upsilon = _src.Mu7p5_Track3p5_Upsilon;
  Mu7p5_Track7_Upsilon = _src.Mu7p5_Track7_Upsilon;
  Mu3_L1SingleMu5orSingleMu7 = _src.Mu3_L1SingleMu5orSingleMu7;
  DoublePhoton33_CaloIdL = _src.DoublePhoton33_CaloIdL;
  DoublePhoton70 = _src.DoublePhoton70;
  DoublePhoton85 = _src.DoublePhoton85;
  Ele20_WPTight_Gsf = _src.Ele20_WPTight_Gsf;
  Ele15_WPLoose_Gsf = _src.Ele15_WPLoose_Gsf;
  Ele17_WPLoose_Gsf = _src.Ele17_WPLoose_Gsf;
  Ele20_WPLoose_Gsf = _src.Ele20_WPLoose_Gsf;
  Ele20_eta2p1_WPLoose_Gsf = _src.Ele20_eta2p1_WPLoose_Gsf;
  DiEle27_WPTightCaloOnly_L1DoubleEG = _src.DiEle27_WPTightCaloOnly_L1DoubleEG;
  Ele27_WPTight_Gsf = _src.Ele27_WPTight_Gsf;
  Ele28_WPTight_Gsf = _src.Ele28_WPTight_Gsf;
  Ele30_WPTight_Gsf = _src.Ele30_WPTight_Gsf;
  Ele32_WPTight_Gsf = _src.Ele32_WPTight_Gsf;
  Ele35_WPTight_Gsf = _src.Ele35_WPTight_Gsf;
  Ele35_WPTight_Gsf_L1EGMT = _src.Ele35_WPTight_Gsf_L1EGMT;
  Ele38_WPTight_Gsf = _src.Ele38_WPTight_Gsf;
  Ele40_WPTight_Gsf = _src.Ele40_WPTight_Gsf;
  Ele32_WPTight_Gsf_L1DoubleEG = _src.Ele32_WPTight_Gsf_L1DoubleEG;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  HT450_Beamspot = _src.HT450_Beamspot;
  HT300_Beamspot = _src.HT300_Beamspot;
  ZeroBias_Beamspot = _src.ZeroBias_Beamspot;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
  IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu20 = _src.IsoMu20;
  IsoMu24 = _src.IsoMu24;
  IsoMu24_eta2p1 = _src.IsoMu24_eta2p1;
  IsoMu27 = _src.IsoMu27;
  IsoMu30 = _src.IsoMu30;
  UncorrectedJetE30_NoBPTX = _src.UncorrectedJetE30_NoBPTX;
  UncorrectedJetE30_NoBPTX3BX = _src.UncorrectedJetE30_NoBPTX3BX;
  UncorrectedJetE60_NoBPTX3BX = _src.UncorrectedJetE60_NoBPTX3BX;
  UncorrectedJetE70_NoBPTX3BX = _src.UncorrectedJetE70_NoBPTX3BX;
  L1SingleMu18 = _src.L1SingleMu18;
  L1SingleMu25 = _src.L1SingleMu25;
  L2Mu10 = _src.L2Mu10;
  L2Mu10_NoVertex_NoBPTX3BX = _src.L2Mu10_NoVertex_NoBPTX3BX;
  L2Mu10_NoVertex_NoBPTX = _src.L2Mu10_NoVertex_NoBPTX;
  L2Mu45_NoVertex_3Sta_NoBPTX3BX = _src.L2Mu45_NoVertex_3Sta_NoBPTX3BX;
  L2Mu40_NoVertex_3Sta_NoBPTX3BX = _src.L2Mu40_NoVertex_3Sta_NoBPTX3BX;
  L2Mu50 = _src.L2Mu50;
  L2Mu23NoVtx_2Cha = _src.L2Mu23NoVtx_2Cha;
  L2Mu23NoVtx_2Cha_CosmicSeed = _src.L2Mu23NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4 = _src.DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;
  DoubleL2Mu30NoVtx_2Cha_Eta2p4 = _src.DoubleL2Mu30NoVtx_2Cha_Eta2p4;
  DoubleL2Mu50 = _src.DoubleL2Mu50;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed = _src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched = _src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4 = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;
  DoubleL2Mu23NoVtx_2Cha = _src.DoubleL2Mu23NoVtx_2Cha;
  DoubleL2Mu23NoVtx_2Cha_NoL2Matched = _src.DoubleL2Mu23NoVtx_2Cha_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha = _src.DoubleL2Mu25NoVtx_2Cha;
  DoubleL2Mu25NoVtx_2Cha_NoL2Matched = _src.DoubleL2Mu25NoVtx_2Cha_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_Eta2p4 = _src.DoubleL2Mu25NoVtx_2Cha_Eta2p4;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
  Mu25_TkMu0_Onia = _src.Mu25_TkMu0_Onia;
  Mu30_TkMu0_Psi = _src.Mu30_TkMu0_Psi;
  Mu30_TkMu0_Upsilon = _src.Mu30_TkMu0_Upsilon;
  Mu20_TkMu0_Phi = _src.Mu20_TkMu0_Phi;
  Mu25_TkMu0_Phi = _src.Mu25_TkMu0_Phi;
  Mu12 = _src.Mu12;
  Mu15 = _src.Mu15;
  Mu20 = _src.Mu20;
  Mu27 = _src.Mu27;
  Mu50 = _src.Mu50;
  Mu55 = _src.Mu55;
  OldMu100 = _src.OldMu100;
  TkMu100 = _src.TkMu100;
  DiPFJetAve40 = _src.DiPFJetAve40;
  DiPFJetAve60 = _src.DiPFJetAve60;
  DiPFJetAve80 = _src.DiPFJetAve80;
  DiPFJetAve140 = _src.DiPFJetAve140;
  DiPFJetAve200 = _src.DiPFJetAve200;
  DiPFJetAve260 = _src.DiPFJetAve260;
  DiPFJetAve320 = _src.DiPFJetAve320;
  DiPFJetAve400 = _src.DiPFJetAve400;
  DiPFJetAve500 = _src.DiPFJetAve500;
  DiPFJetAve60_HFJEC = _src.DiPFJetAve60_HFJEC;
  DiPFJetAve80_HFJEC = _src.DiPFJetAve80_HFJEC;
  DiPFJetAve100_HFJEC = _src.DiPFJetAve100_HFJEC;
  DiPFJetAve160_HFJEC = _src.DiPFJetAve160_HFJEC;
  DiPFJetAve220_HFJEC = _src.DiPFJetAve220_HFJEC;
  DiPFJetAve300_HFJEC = _src.DiPFJetAve300_HFJEC;
  AK8PFJet15 = _src.AK8PFJet15;
  AK8PFJet25 = _src.AK8PFJet25;
  AK8PFJet40 = _src.AK8PFJet40;
  AK8PFJet60 = _src.AK8PFJet60;
  AK8PFJet80 = _src.AK8PFJet80;
  AK8PFJet140 = _src.AK8PFJet140;
  AK8PFJet200 = _src.AK8PFJet200;
  AK8PFJet260 = _src.AK8PFJet260;
  AK8PFJet320 = _src.AK8PFJet320;
  AK8PFJet400 = _src.AK8PFJet400;
  AK8PFJet450 = _src.AK8PFJet450;
  AK8PFJet500 = _src.AK8PFJet500;
  AK8PFJet550 = _src.AK8PFJet550;
  PFJet15 = _src.PFJet15;
  PFJet25 = _src.PFJet25;
  PFJet40 = _src.PFJet40;
  PFJet60 = _src.PFJet60;
  PFJet80 = _src.PFJet80;
  PFJet140 = _src.PFJet140;
  PFJet200 = _src.PFJet200;
  PFJet260 = _src.PFJet260;
  PFJet320 = _src.PFJet320;
  PFJet400 = _src.PFJet400;
  PFJet450 = _src.PFJet450;
  PFJet500 = _src.PFJet500;
  PFJet550 = _src.PFJet550;
  PFJetFwd15 = _src.PFJetFwd15;
  PFJetFwd25 = _src.PFJetFwd25;
  PFJetFwd40 = _src.PFJetFwd40;
  PFJetFwd60 = _src.PFJetFwd60;
  PFJetFwd80 = _src.PFJetFwd80;
  PFJetFwd140 = _src.PFJetFwd140;
  PFJetFwd200 = _src.PFJetFwd200;
  PFJetFwd260 = _src.PFJetFwd260;
  PFJetFwd320 = _src.PFJetFwd320;
  PFJetFwd400 = _src.PFJetFwd400;
  PFJetFwd450 = _src.PFJetFwd450;
  PFJetFwd500 = _src.PFJetFwd500;
  AK8PFJetFwd15 = _src.AK8PFJetFwd15;
  AK8PFJetFwd25 = _src.AK8PFJetFwd25;
  AK8PFJetFwd40 = _src.AK8PFJetFwd40;
  AK8PFJetFwd60 = _src.AK8PFJetFwd60;
  AK8PFJetFwd80 = _src.AK8PFJetFwd80;
  AK8PFJetFwd140 = _src.AK8PFJetFwd140;
  AK8PFJetFwd200 = _src.AK8PFJetFwd200;
  AK8PFJetFwd260 = _src.AK8PFJetFwd260;
  AK8PFJetFwd320 = _src.AK8PFJetFwd320;
  AK8PFJetFwd400 = _src.AK8PFJetFwd400;
  AK8PFJetFwd450 = _src.AK8PFJetFwd450;
  AK8PFJetFwd500 = _src.AK8PFJetFwd500;
  PFHT180 = _src.PFHT180;
  PFHT250 = _src.PFHT250;
  PFHT370 = _src.PFHT370;
  PFHT430 = _src.PFHT430;
  PFHT510 = _src.PFHT510;
  PFHT590 = _src.PFHT590;
  PFHT680 = _src.PFHT680;
  PFHT780 = _src.PFHT780;
  PFHT890 = _src.PFHT890;
  PFHT1050 = _src.PFHT1050;
  PFHT500_PFMET100_PFMHT100_IDTight = _src.PFHT500_PFMET100_PFMHT100_IDTight;
  PFHT500_PFMET110_PFMHT110_IDTight = _src.PFHT500_PFMET110_PFMHT110_IDTight;
  PFHT700_PFMET85_PFMHT85_IDTight = _src.PFHT700_PFMET85_PFMHT85_IDTight;
  PFHT700_PFMET95_PFMHT95_IDTight = _src.PFHT700_PFMET95_PFMHT95_IDTight;
  PFHT800_PFMET75_PFMHT75_IDTight = _src.PFHT800_PFMET75_PFMHT75_IDTight;
  PFHT800_PFMET85_PFMHT85_IDTight = _src.PFHT800_PFMET85_PFMHT85_IDTight;
  PFMET110_PFMHT110_IDTight = _src.PFMET110_PFMHT110_IDTight;
  PFMET120_PFMHT120_IDTight = _src.PFMET120_PFMHT120_IDTight;
  PFMET130_PFMHT130_IDTight = _src.PFMET130_PFMHT130_IDTight;
  PFMET140_PFMHT140_IDTight = _src.PFMET140_PFMHT140_IDTight;
  PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;
  PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;
  PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;
  PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;
  PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;
  PFMET120_PFMHT120_IDTight_PFHT60 = _src.PFMET120_PFMHT120_IDTight_PFHT60;
  PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 = _src.PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
  PFMETTypeOne120_PFMHT120_IDTight_PFHT60 = _src.PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
  PFMETTypeOne110_PFMHT110_IDTight = _src.PFMETTypeOne110_PFMHT110_IDTight;
  PFMETTypeOne120_PFMHT120_IDTight = _src.PFMETTypeOne120_PFMHT120_IDTight;
  PFMETTypeOne130_PFMHT130_IDTight = _src.PFMETTypeOne130_PFMHT130_IDTight;
  PFMETTypeOne140_PFMHT140_IDTight = _src.PFMETTypeOne140_PFMHT140_IDTight;
  PFMETNoMu110_PFMHTNoMu110_IDTight = _src.PFMETNoMu110_PFMHTNoMu110_IDTight;
  PFMETNoMu120_PFMHTNoMu120_IDTight = _src.PFMETNoMu120_PFMHTNoMu120_IDTight;
  PFMETNoMu130_PFMHTNoMu130_IDTight = _src.PFMETNoMu130_PFMHTNoMu130_IDTight;
  PFMETNoMu140_PFMHTNoMu140_IDTight = _src.PFMETNoMu140_PFMHTNoMu140_IDTight;
  MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight = _src.MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
  MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight = _src.MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
  MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight = _src.MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
  MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight = _src.MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
  L1ETMHadSeeds = _src.L1ETMHadSeeds;
  CaloMHT90 = _src.CaloMHT90;
  CaloMET80_NotCleaned = _src.CaloMET80_NotCleaned;
  CaloMET90_NotCleaned = _src.CaloMET90_NotCleaned;
  CaloMET100_NotCleaned = _src.CaloMET100_NotCleaned;
  CaloMET110_NotCleaned = _src.CaloMET110_NotCleaned;
  CaloMET250_NotCleaned = _src.CaloMET250_NotCleaned;
  CaloMET70_HBHECleaned = _src.CaloMET70_HBHECleaned;
  CaloMET80_HBHECleaned = _src.CaloMET80_HBHECleaned;
  CaloMET90_HBHECleaned = _src.CaloMET90_HBHECleaned;
  CaloMET100_HBHECleaned = _src.CaloMET100_HBHECleaned;
  CaloMET250_HBHECleaned = _src.CaloMET250_HBHECleaned;
  CaloMET300_HBHECleaned = _src.CaloMET300_HBHECleaned;
  CaloMET350_HBHECleaned = _src.CaloMET350_HBHECleaned;
  PFMET200_NotCleaned = _src.PFMET200_NotCleaned;
  PFMET200_HBHECleaned = _src.PFMET200_HBHECleaned;
  PFMET250_HBHECleaned = _src.PFMET250_HBHECleaned;
  PFMET300_HBHECleaned = _src.PFMET300_HBHECleaned;
  PFMET200_HBHE_BeamHaloCleaned = _src.PFMET200_HBHE_BeamHaloCleaned;
  PFMETTypeOne200_HBHE_BeamHaloCleaned = _src.PFMETTypeOne200_HBHE_BeamHaloCleaned;
  MET105_IsoTrk50 = _src.MET105_IsoTrk50;
  MET120_IsoTrk50 = _src.MET120_IsoTrk50;
  SingleJet30_Mu12_SinglePFJet40 = _src.SingleJet30_Mu12_SinglePFJet40;
  Mu12_DoublePFJets40_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets100_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets200_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets350_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  DoublePFJets40_CaloBTagDeepCSV_p71 = _src.DoublePFJets40_CaloBTagDeepCSV_p71;
  DoublePFJets100_CaloBTagDeepCSV_p71 = _src.DoublePFJets100_CaloBTagDeepCSV_p71;
  DoublePFJets200_CaloBTagDeepCSV_p71 = _src.DoublePFJets200_CaloBTagDeepCSV_p71;
  DoublePFJets350_CaloBTagDeepCSV_p71 = _src.DoublePFJets350_CaloBTagDeepCSV_p71;
  DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Photon300_NoHE = _src.Photon300_NoHE;
  Mu8_TrkIsoVVL = _src.Mu8_TrkIsoVVL;
  Mu8_DiEle12_CaloIdL_TrackIdL_DZ = _src.Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
  Mu8_DiEle12_CaloIdL_TrackIdL = _src.Mu8_DiEle12_CaloIdL_TrackIdL;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ = _src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 = _src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
  Mu17_TrkIsoVVL = _src.Mu17_TrkIsoVVL;
  Mu19_TrkIsoVVL = _src.Mu19_TrkIsoVVL;
  BTagMu_AK4DiJet20_Mu5 = _src.BTagMu_AK4DiJet20_Mu5;
  BTagMu_AK4DiJet40_Mu5 = _src.BTagMu_AK4DiJet40_Mu5;
  BTagMu_AK4DiJet70_Mu5 = _src.BTagMu_AK4DiJet70_Mu5;
  BTagMu_AK4DiJet110_Mu5 = _src.BTagMu_AK4DiJet110_Mu5;
  BTagMu_AK4DiJet170_Mu5 = _src.BTagMu_AK4DiJet170_Mu5;
  BTagMu_AK4Jet300_Mu5 = _src.BTagMu_AK4Jet300_Mu5;
  BTagMu_AK8DiJet170_Mu5 = _src.BTagMu_AK8DiJet170_Mu5;
  BTagMu_AK8Jet170_DoubleMu5 = _src.BTagMu_AK8Jet170_DoubleMu5;
  BTagMu_AK8Jet300_Mu5 = _src.BTagMu_AK8Jet300_Mu5;
  BTagMu_AK4DiJet20_Mu5_noalgo = _src.BTagMu_AK4DiJet20_Mu5_noalgo;
  BTagMu_AK4DiJet40_Mu5_noalgo = _src.BTagMu_AK4DiJet40_Mu5_noalgo;
  BTagMu_AK4DiJet70_Mu5_noalgo = _src.BTagMu_AK4DiJet70_Mu5_noalgo;
  BTagMu_AK4DiJet110_Mu5_noalgo = _src.BTagMu_AK4DiJet110_Mu5_noalgo;
  BTagMu_AK4DiJet170_Mu5_noalgo = _src.BTagMu_AK4DiJet170_Mu5_noalgo;
  BTagMu_AK4Jet300_Mu5_noalgo = _src.BTagMu_AK4Jet300_Mu5_noalgo;
  BTagMu_AK8DiJet170_Mu5_noalgo = _src.BTagMu_AK8DiJet170_Mu5_noalgo;
  BTagMu_AK8Jet170_DoubleMu5_noalgo = _src.BTagMu_AK8Jet170_DoubleMu5_noalgo;
  BTagMu_AK8Jet300_Mu5_noalgo = _src.BTagMu_AK8Jet300_Mu5_noalgo;
  Ele15_Ele8_CaloIdL_TrackIdL_IsoVL = _src.Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = _src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL = _src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL = _src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = _src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu12_DoublePhoton20 = _src.Mu12_DoublePhoton20;
  TriplePhoton_20_20_20_CaloIdLV2 = _src.TriplePhoton_20_20_20_CaloIdLV2;
  TriplePhoton_20_20_20_CaloIdLV2_R9IdVL = _src.TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
  TriplePhoton_30_30_10_CaloIdLV2 = _src.TriplePhoton_30_30_10_CaloIdLV2;
  TriplePhoton_30_30_10_CaloIdLV2_R9IdVL = _src.TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
  TriplePhoton_35_35_5_CaloIdLV2_R9IdVL = _src.TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
  Photon20 = _src.Photon20;
  Photon33 = _src.Photon33;
  Photon50 = _src.Photon50;
  Photon75 = _src.Photon75;
  Photon90 = _src.Photon90;
  Photon120 = _src.Photon120;
  Photon150 = _src.Photon150;
  Photon175 = _src.Photon175;
  Photon200 = _src.Photon200;
  Photon100EB_TightID_TightIso = _src.Photon100EB_TightID_TightIso;
  Photon110EB_TightID_TightIso = _src.Photon110EB_TightID_TightIso;
  Photon120EB_TightID_TightIso = _src.Photon120EB_TightID_TightIso;
  Photon100EBHE10 = _src.Photon100EBHE10;
  Photon100EEHE10 = _src.Photon100EEHE10;
  Photon100EE_TightID_TightIso = _src.Photon100EE_TightID_TightIso;
  Photon50_R9Id90_HE10_IsoM = _src.Photon50_R9Id90_HE10_IsoM;
  Photon75_R9Id90_HE10_IsoM = _src.Photon75_R9Id90_HE10_IsoM;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;
  Photon90_R9Id90_HE10_IsoM = _src.Photon90_R9Id90_HE10_IsoM;
  Photon120_R9Id90_HE10_IsoM = _src.Photon120_R9Id90_HE10_IsoM;
  Photon165_R9Id90_HE10_IsoM = _src.Photon165_R9Id90_HE10_IsoM;
  Photon90_CaloIdL_PFHT700 = _src.Photon90_CaloIdL_PFHT700;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 = _src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 = _src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 = _src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 = _src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
  Photon35_TwoProngs35 = _src.Photon35_TwoProngs35;
  IsoMu24_TwoProngs35 = _src.IsoMu24_TwoProngs35;
  Dimuon0_Jpsi_L1_NoOS = _src.Dimuon0_Jpsi_L1_NoOS;
  Dimuon0_Jpsi_NoVertexing_NoOS = _src.Dimuon0_Jpsi_NoVertexing_NoOS;
  Dimuon0_Jpsi = _src.Dimuon0_Jpsi;
  Dimuon0_Jpsi_NoVertexing = _src.Dimuon0_Jpsi_NoVertexing;
  Dimuon0_Jpsi_L1_4R_0er1p5R = _src.Dimuon0_Jpsi_L1_4R_0er1p5R;
  Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R = _src.Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
  Dimuon0_Jpsi3p5_Muon2 = _src.Dimuon0_Jpsi3p5_Muon2;
  Dimuon0_Upsilon_L1_4p5 = _src.Dimuon0_Upsilon_L1_4p5;
  Dimuon0_Upsilon_L1_5 = _src.Dimuon0_Upsilon_L1_5;
  Dimuon0_Upsilon_L1_4p5NoOS = _src.Dimuon0_Upsilon_L1_4p5NoOS;
  Dimuon0_Upsilon_L1_4p5er2p0 = _src.Dimuon0_Upsilon_L1_4p5er2p0;
  Dimuon0_Upsilon_L1_4p5er2p0M = _src.Dimuon0_Upsilon_L1_4p5er2p0M;
  Dimuon0_Upsilon_NoVertexing = _src.Dimuon0_Upsilon_NoVertexing;
  Dimuon0_Upsilon_L1_5M = _src.Dimuon0_Upsilon_L1_5M;
  Dimuon0_LowMass_L1_0er1p5R = _src.Dimuon0_LowMass_L1_0er1p5R;
  Dimuon0_LowMass_L1_0er1p5 = _src.Dimuon0_LowMass_L1_0er1p5;
  Dimuon0_LowMass = _src.Dimuon0_LowMass;
  Dimuon0_LowMass_L1_4 = _src.Dimuon0_LowMass_L1_4;
  Dimuon0_LowMass_L1_4R = _src.Dimuon0_LowMass_L1_4R;
  Dimuon0_LowMass_L1_TM530 = _src.Dimuon0_LowMass_L1_TM530;
  Dimuon0_Upsilon_Muon_L1_TM0 = _src.Dimuon0_Upsilon_Muon_L1_TM0;
  Dimuon0_Upsilon_Muon_NoL1Mass = _src.Dimuon0_Upsilon_Muon_NoL1Mass;
  TripleMu_5_3_3_Mass3p8_DZ = _src.TripleMu_5_3_3_Mass3p8_DZ;
  TripleMu_10_5_5_DZ = _src.TripleMu_10_5_5_DZ;
  TripleMu_12_10_5 = _src.TripleMu_12_10_5;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15 = _src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 = _src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 = _src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 = _src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
  DoubleMu3_DZ_PFMET50_PFMHT60 = _src.DoubleMu3_DZ_PFMET50_PFMHT60;
  DoubleMu3_DZ_PFMET70_PFMHT70 = _src.DoubleMu3_DZ_PFMET70_PFMHT70;
  DoubleMu3_DZ_PFMET90_PFMHT90 = _src.DoubleMu3_DZ_PFMET90_PFMHT90;
  DoubleMu3_Trk_Tau3mu_NoL1Mass = _src.DoubleMu3_Trk_Tau3mu_NoL1Mass;
  DoubleMu4_Jpsi_Displaced = _src.DoubleMu4_Jpsi_Displaced;
  DoubleMu4_Jpsi_NoVertexing = _src.DoubleMu4_Jpsi_NoVertexing;
  DoubleMu4_JpsiTrkTrk_Displaced = _src.DoubleMu4_JpsiTrkTrk_Displaced;
  DoubleMu43NoFiltersNoVtx = _src.DoubleMu43NoFiltersNoVtx;
  DoubleMu48NoFiltersNoVtx = _src.DoubleMu48NoFiltersNoVtx;
  Mu43NoFiltersNoVtx_Photon43_CaloIdL = _src.Mu43NoFiltersNoVtx_Photon43_CaloIdL;
  Mu48NoFiltersNoVtx_Photon48_CaloIdL = _src.Mu48NoFiltersNoVtx_Photon48_CaloIdL;
  Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL = _src.Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;
  Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL = _src.Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;
  DoubleMu33NoFiltersNoVtxDisplaced = _src.DoubleMu33NoFiltersNoVtxDisplaced;
  DoubleMu40NoFiltersNoVtxDisplaced = _src.DoubleMu40NoFiltersNoVtxDisplaced;
  DoubleMu20_7_Mass0to30_L1_DM4 = _src.DoubleMu20_7_Mass0to30_L1_DM4;
  DoubleMu20_7_Mass0to30_L1_DM4EG = _src.DoubleMu20_7_Mass0to30_L1_DM4EG;
  HT425 = _src.HT425;
  HT430_DisplacedDijet40_DisplacedTrack = _src.HT430_DisplacedDijet40_DisplacedTrack;
  HT500_DisplacedDijet40_DisplacedTrack = _src.HT500_DisplacedDijet40_DisplacedTrack;
  HT430_DisplacedDijet60_DisplacedTrack = _src.HT430_DisplacedDijet60_DisplacedTrack;
  HT400_DisplacedDijet40_DisplacedTrack = _src.HT400_DisplacedDijet40_DisplacedTrack;
  HT650_DisplacedDijet60_Inclusive = _src.HT650_DisplacedDijet60_Inclusive;
  HT550_DisplacedDijet60_Inclusive = _src.HT550_DisplacedDijet60_Inclusive;
  DiJet110_35_Mjj650_PFMET110 = _src.DiJet110_35_Mjj650_PFMET110;
  DiJet110_35_Mjj650_PFMET120 = _src.DiJet110_35_Mjj650_PFMET120;
  DiJet110_35_Mjj650_PFMET130 = _src.DiJet110_35_Mjj650_PFMET130;
  TripleJet110_35_35_Mjj650_PFMET110 = _src.TripleJet110_35_35_Mjj650_PFMET110;
  TripleJet110_35_35_Mjj650_PFMET120 = _src.TripleJet110_35_35_Mjj650_PFMET120;
  TripleJet110_35_35_Mjj650_PFMET130 = _src.TripleJet110_35_35_Mjj650_PFMET130;
  Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned = _src.Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
  Ele28_eta2p1_WPTight_Gsf_HT150 = _src.Ele28_eta2p1_WPTight_Gsf_HT150;
  Ele28_HighEta_SC20_Mass55 = _src.Ele28_HighEta_SC20_Mass55;
  DoubleMu20_7_Mass0to30_Photon23 = _src.DoubleMu20_7_Mass0to30_Photon23;
  Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = _src.Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
  Ele15_IsoVVVL_PFHT450_PFMET50 = _src.Ele15_IsoVVVL_PFHT450_PFMET50;
  Ele15_IsoVVVL_PFHT450 = _src.Ele15_IsoVVVL_PFHT450;
  Ele50_IsoVVVL_PFHT450 = _src.Ele50_IsoVVVL_PFHT450;
  Ele15_IsoVVVL_PFHT600 = _src.Ele15_IsoVVVL_PFHT600;
  Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = _src.Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
  Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = _src.Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
  Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 = _src.Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
  Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = _src.Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
  Mu15_IsoVVVL_PFHT450_PFMET50 = _src.Mu15_IsoVVVL_PFHT450_PFMET50;
  Mu15_IsoVVVL_PFHT450 = _src.Mu15_IsoVVVL_PFHT450;
  Mu50_IsoVVVL_PFHT450 = _src.Mu50_IsoVVVL_PFHT450;
  Mu15_IsoVVVL_PFHT600 = _src.Mu15_IsoVVVL_PFHT600;
  Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;
  Dimuon10_PsiPrime_Barrel_Seagulls = _src.Dimuon10_PsiPrime_Barrel_Seagulls;
  Dimuon20_Jpsi_Barrel_Seagulls = _src.Dimuon20_Jpsi_Barrel_Seagulls;
  Dimuon12_Upsilon_y1p4 = _src.Dimuon12_Upsilon_y1p4;
  Dimuon14_Phi_Barrel_Seagulls = _src.Dimuon14_Phi_Barrel_Seagulls;
  Dimuon18_PsiPrime = _src.Dimuon18_PsiPrime;
  Dimuon25_Jpsi = _src.Dimuon25_Jpsi;
  Dimuon18_PsiPrime_noCorrL1 = _src.Dimuon18_PsiPrime_noCorrL1;
  Dimuon24_Upsilon_noCorrL1 = _src.Dimuon24_Upsilon_noCorrL1;
  Dimuon24_Phi_noCorrL1 = _src.Dimuon24_Phi_noCorrL1;
  Dimuon25_Jpsi_noCorrL1 = _src.Dimuon25_Jpsi_noCorrL1;
  DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8 = _src.DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;
  DiMu9_Ele9_CaloIdL_TrackIdL_DZ = _src.DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
  DiMu9_Ele9_CaloIdL_TrackIdL = _src.DiMu9_Ele9_CaloIdL_TrackIdL;
  DoubleIsoMu20_eta2p1 = _src.DoubleIsoMu20_eta2p1;
  TrkMu12_DoubleTrkMu5NoFiltersNoVtx = _src.TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
  TrkMu16_DoubleTrkMu6NoFiltersNoVtx = _src.TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
  TrkMu17_DoubleTrkMu8NoFiltersNoVtx = _src.TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
  Mu8 = _src.Mu8;
  Mu17 = _src.Mu17;
  Mu19 = _src.Mu19;
  Mu17_Photon30_IsoCaloId = _src.Mu17_Photon30_IsoCaloId;
  Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele8_CaloIdM_TrackIdM_PFJet30 = _src.Ele8_CaloIdM_TrackIdM_PFJet30;
  Ele17_CaloIdM_TrackIdM_PFJet30 = _src.Ele17_CaloIdM_TrackIdM_PFJet30;
  Ele23_CaloIdM_TrackIdM_PFJet30 = _src.Ele23_CaloIdM_TrackIdM_PFJet30;
  Ele50_CaloIdVT_GsfTrkIdT_PFJet165 = _src.Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
  Ele115_CaloIdVT_GsfTrkIdT = _src.Ele115_CaloIdVT_GsfTrkIdT;
  Ele135_CaloIdVT_GsfTrkIdT = _src.Ele135_CaloIdVT_GsfTrkIdT;
  Ele145_CaloIdVT_GsfTrkIdT = _src.Ele145_CaloIdVT_GsfTrkIdT;
  Ele200_CaloIdVT_GsfTrkIdT = _src.Ele200_CaloIdVT_GsfTrkIdT;
  Ele250_CaloIdVT_GsfTrkIdT = _src.Ele250_CaloIdVT_GsfTrkIdT;
  Ele300_CaloIdVT_GsfTrkIdT = _src.Ele300_CaloIdVT_GsfTrkIdT;
  PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5 = _src.PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;
  PFHT330PT30_QuadPFJet_75_60_45_40 = _src.PFHT330PT30_QuadPFJet_75_60_45_40;
  PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94 = _src.PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;
  PFHT400_SixPFJet32 = _src.PFHT400_SixPFJet32;
  PFHT450_SixPFJet36_PFBTagDeepCSV_1p59 = _src.PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;
  PFHT450_SixPFJet36 = _src.PFHT450_SixPFJet36;
  PFHT350 = _src.PFHT350;
  PFHT350MinPFJet15 = _src.PFHT350MinPFJet15;
  Photon60_R9Id90_CaloIdL_IsoL = _src.Photon60_R9Id90_CaloIdL_IsoL;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL = _src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 = _src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
  ECALHT800 = _src.ECALHT800;
  DiSC30_18_EIso_AND_HE_Mass70 = _src.DiSC30_18_EIso_AND_HE_Mass70;
  Physics = _src.Physics;
  Physics_part0 = _src.Physics_part0;
  Physics_part1 = _src.Physics_part1;
  Physics_part2 = _src.Physics_part2;
  Physics_part3 = _src.Physics_part3;
  Physics_part4 = _src.Physics_part4;
  Physics_part5 = _src.Physics_part5;
  Physics_part6 = _src.Physics_part6;
  Physics_part7 = _src.Physics_part7;
  Random = _src.Random;
  ZeroBias = _src.ZeroBias;
  ZeroBias_Alignment = _src.ZeroBias_Alignment;
  ZeroBias_part0 = _src.ZeroBias_part0;
  ZeroBias_part1 = _src.ZeroBias_part1;
  ZeroBias_part2 = _src.ZeroBias_part2;
  ZeroBias_part3 = _src.ZeroBias_part3;
  ZeroBias_part4 = _src.ZeroBias_part4;
  ZeroBias_part5 = _src.ZeroBias_part5;
  ZeroBias_part6 = _src.ZeroBias_part6;
  ZeroBias_part7 = _src.ZeroBias_part7;
  AK4CaloJet30 = _src.AK4CaloJet30;
  AK4CaloJet40 = _src.AK4CaloJet40;
  AK4CaloJet50 = _src.AK4CaloJet50;
  AK4CaloJet80 = _src.AK4CaloJet80;
  AK4CaloJet100 = _src.AK4CaloJet100;
  AK4CaloJet120 = _src.AK4CaloJet120;
  AK4PFJet30 = _src.AK4PFJet30;
  AK4PFJet50 = _src.AK4PFJet50;
  AK4PFJet80 = _src.AK4PFJet80;
  AK4PFJet100 = _src.AK4PFJet100;
  AK4PFJet120 = _src.AK4PFJet120;
  SinglePhoton10_Eta3p1ForPPRef = _src.SinglePhoton10_Eta3p1ForPPRef;
  SinglePhoton20_Eta3p1ForPPRef = _src.SinglePhoton20_Eta3p1ForPPRef;
  SinglePhoton30_Eta3p1ForPPRef = _src.SinglePhoton30_Eta3p1ForPPRef;
  Photon20_HoverELoose = _src.Photon20_HoverELoose;
  Photon30_HoverELoose = _src.Photon30_HoverELoose;
  EcalCalibration = _src.EcalCalibration;
  HcalCalibration = _src.HcalCalibration;
  L1UnpairedBunchBptxMinus = _src.L1UnpairedBunchBptxMinus;
  L1UnpairedBunchBptxPlus = _src.L1UnpairedBunchBptxPlus;
  L1NotBptxOR = _src.L1NotBptxOR;
  L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 = _src.L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
  CDC_L2cosmic_5_er1p0 = _src.CDC_L2cosmic_5_er1p0;
  CDC_L2cosmic_5p5_er1p0 = _src.CDC_L2cosmic_5p5_er1p0;
  HcalNZS = _src.HcalNZS;
  HcalPhiSym = _src.HcalPhiSym;
  HcalIsolatedbunch = _src.HcalIsolatedbunch;
  IsoTrackHB = _src.IsoTrackHB;
  IsoTrackHE = _src.IsoTrackHE;
  ZeroBias_FirstCollisionAfterAbortGap = _src.ZeroBias_FirstCollisionAfterAbortGap;
  ZeroBias_IsolatedBunches = _src.ZeroBias_IsolatedBunches;
  ZeroBias_FirstCollisionInTrain = _src.ZeroBias_FirstCollisionInTrain;
  ZeroBias_LastCollisionInTrain = _src.ZeroBias_LastCollisionInTrain;
  ZeroBias_FirstBXAfterTrain = _src.ZeroBias_FirstBXAfterTrain;
  IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = _src.IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr = _src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
  MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
  MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
  Ele16_Ele12_Ele8_CaloIdL_TrackIdL = _src.Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
  Rsq0p35 = _src.Rsq0p35;
  Rsq0p40 = _src.Rsq0p40;
  RsqMR300_Rsq0p09_MR200 = _src.RsqMR300_Rsq0p09_MR200;
  RsqMR320_Rsq0p09_MR200 = _src.RsqMR320_Rsq0p09_MR200;
  RsqMR300_Rsq0p09_MR200_4jet = _src.RsqMR300_Rsq0p09_MR200_4jet;
  RsqMR320_Rsq0p09_MR200_4jet = _src.RsqMR320_Rsq0p09_MR200_4jet;
  IsoMu27_MET90 = _src.IsoMu27_MET90;
  DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
  VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
  VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
  VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
  Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 = _src.Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
  PFMET100_PFMHT100_IDTight_PFHT60 = _src.PFMET100_PFMHT100_IDTight_PFHT60;
  PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 = _src.PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
  PFMETTypeOne100_PFMHT100_IDTight_PFHT60 = _src.PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
  Mu18_Mu9_SameSign = _src.Mu18_Mu9_SameSign;
  Mu18_Mu9_SameSign_DZ = _src.Mu18_Mu9_SameSign_DZ;
  Mu18_Mu9 = _src.Mu18_Mu9;
  Mu18_Mu9_DZ = _src.Mu18_Mu9_DZ;
  Mu20_Mu10_SameSign = _src.Mu20_Mu10_SameSign;
  Mu20_Mu10_SameSign_DZ = _src.Mu20_Mu10_SameSign_DZ;
  Mu20_Mu10 = _src.Mu20_Mu10;
  Mu20_Mu10_DZ = _src.Mu20_Mu10_DZ;
  Mu23_Mu12_SameSign = _src.Mu23_Mu12_SameSign;
  Mu23_Mu12_SameSign_DZ = _src.Mu23_Mu12_SameSign_DZ;
  Mu23_Mu12 = _src.Mu23_Mu12;
  Mu23_Mu12_DZ = _src.Mu23_Mu12_DZ;
  DoubleMu2_Jpsi_DoubleTrk1_Phi1p05 = _src.DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;
  DoubleMu2_Jpsi_DoubleTkMu0_Phi = _src.DoubleMu2_Jpsi_DoubleTkMu0_Phi;
  DoubleMu3_DCA_PFMET50_PFMHT60 = _src.DoubleMu3_DCA_PFMET50_PFMHT60;
  TripleMu_5_3_3_Mass3p8_DCA = _src.TripleMu_5_3_3_Mass3p8_DCA;
  QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet98_83_71_15 = _src.QuadPFJet98_83_71_15;
  QuadPFJet103_88_75_15 = _src.QuadPFJet103_88_75_15;
  QuadPFJet105_88_76_15 = _src.QuadPFJet105_88_76_15;
  QuadPFJet111_90_80_15 = _src.QuadPFJet111_90_80_15;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17 = _src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1 = _src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 = _src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto = _src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;
  Mu12_IP6_part0 = _src.Mu12_IP6_part0;
  Mu12_IP6_part1 = _src.Mu12_IP6_part1;
  Mu12_IP6_part2 = _src.Mu12_IP6_part2;
  Mu12_IP6_part3 = _src.Mu12_IP6_part3;
  Mu12_IP6_part4 = _src.Mu12_IP6_part4;
  Mu9_IP5_part0 = _src.Mu9_IP5_part0;
  Mu9_IP5_part1 = _src.Mu9_IP5_part1;
  Mu9_IP5_part2 = _src.Mu9_IP5_part2;
  Mu9_IP5_part3 = _src.Mu9_IP5_part3;
  Mu9_IP5_part4 = _src.Mu9_IP5_part4;
  Mu7_IP4_part0 = _src.Mu7_IP4_part0;
  Mu7_IP4_part1 = _src.Mu7_IP4_part1;
  Mu7_IP4_part2 = _src.Mu7_IP4_part2;
  Mu7_IP4_part3 = _src.Mu7_IP4_part3;
  Mu7_IP4_part4 = _src.Mu7_IP4_part4;
  Mu9_IP4_part0 = _src.Mu9_IP4_part0;
  Mu9_IP4_part1 = _src.Mu9_IP4_part1;
  Mu9_IP4_part2 = _src.Mu9_IP4_part2;
  Mu9_IP4_part3 = _src.Mu9_IP4_part3;
  Mu9_IP4_part4 = _src.Mu9_IP4_part4;
  Mu8_IP5_part0 = _src.Mu8_IP5_part0;
  Mu8_IP5_part1 = _src.Mu8_IP5_part1;
  Mu8_IP5_part2 = _src.Mu8_IP5_part2;
  Mu8_IP5_part3 = _src.Mu8_IP5_part3;
  Mu8_IP5_part4 = _src.Mu8_IP5_part4;
  Mu8_IP6_part0 = _src.Mu8_IP6_part0;
  Mu8_IP6_part1 = _src.Mu8_IP6_part1;
  Mu8_IP6_part2 = _src.Mu8_IP6_part2;
  Mu8_IP6_part3 = _src.Mu8_IP6_part3;
  Mu8_IP6_part4 = _src.Mu8_IP6_part4;
  Mu9_IP6_part0 = _src.Mu9_IP6_part0;
  Mu9_IP6_part1 = _src.Mu9_IP6_part1;
  Mu9_IP6_part2 = _src.Mu9_IP6_part2;
  Mu9_IP6_part3 = _src.Mu9_IP6_part3;
  Mu9_IP6_part4 = _src.Mu9_IP6_part4;
  Mu8_IP3_part0 = _src.Mu8_IP3_part0;
  Mu8_IP3_part1 = _src.Mu8_IP3_part1;
  Mu8_IP3_part2 = _src.Mu8_IP3_part2;
  Mu8_IP3_part3 = _src.Mu8_IP3_part3;
  Mu8_IP3_part4 = _src.Mu8_IP3_part4;
  QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  TrkMu6NoFiltersNoVtx = _src.TrkMu6NoFiltersNoVtx;
  TrkMu16NoFiltersNoVtx = _src.TrkMu16NoFiltersNoVtx;
  DoubleTrkMu_16_6_NoFiltersNoVtx = _src.DoubleTrkMu_16_6_NoFiltersNoVtx;
}

panda::Triggers::~Triggers()
{
}

panda::Triggers&
panda::Triggers::operator=(Triggers const& _src)
{
  AK8PFJet360_TrimMass30 = _src.AK8PFJet360_TrimMass30;
  AK8PFJet380_TrimMass30 = _src.AK8PFJet380_TrimMass30;
  AK8PFJet400_TrimMass30 = _src.AK8PFJet400_TrimMass30;
  AK8PFJet420_TrimMass30 = _src.AK8PFJet420_TrimMass30;
  AK8PFHT750_TrimMass50 = _src.AK8PFHT750_TrimMass50;
  AK8PFHT800_TrimMass50 = _src.AK8PFHT800_TrimMass50;
  AK8PFHT850_TrimMass50 = _src.AK8PFHT850_TrimMass50;
  AK8PFHT900_TrimMass50 = _src.AK8PFHT900_TrimMass50;
  CaloJet500_NoJetID = _src.CaloJet500_NoJetID;
  CaloJet550_NoJetID = _src.CaloJet550_NoJetID;
  DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL = _src.DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;
  DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon = _src.DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;
  Trimuon5_3p5_2_Upsilon_Muon = _src.Trimuon5_3p5_2_Upsilon_Muon;
  TrimuonOpen_5_3p5_2_Upsilon_Muon = _src.TrimuonOpen_5_3p5_2_Upsilon_Muon;
  DoubleEle25_CaloIdL_MW = _src.DoubleEle25_CaloIdL_MW;
  DoubleEle27_CaloIdL_MW = _src.DoubleEle27_CaloIdL_MW;
  DoubleEle33_CaloIdL_MW = _src.DoubleEle33_CaloIdL_MW;
  DoubleEle24_eta2p1_WPTight_Gsf = _src.DoubleEle24_eta2p1_WPTight_Gsf;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 = _src.DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 = _src.DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
  Ele27_Ele37_CaloIdL_MW = _src.Ele27_Ele37_CaloIdL_MW;
  Mu27_Ele37_CaloIdL_MW = _src.Mu27_Ele37_CaloIdL_MW;
  Mu37_Ele27_CaloIdL_MW = _src.Mu37_Ele27_CaloIdL_MW;
  Mu37_TkMu27 = _src.Mu37_TkMu27;
  DoubleMu4_3_Bs = _src.DoubleMu4_3_Bs;
  DoubleMu4_3_Jpsi = _src.DoubleMu4_3_Jpsi;
  DoubleMu4_JpsiTrk_Displaced = _src.DoubleMu4_JpsiTrk_Displaced;
  DoubleMu4_LowMassNonResonantTrk_Displaced = _src.DoubleMu4_LowMassNonResonantTrk_Displaced;
  DoubleMu3_Trk_Tau3mu = _src.DoubleMu3_Trk_Tau3mu;
  DoubleMu3_TkMu_DsTau3Mu = _src.DoubleMu3_TkMu_DsTau3Mu;
  DoubleMu4_PsiPrimeTrk_Displaced = _src.DoubleMu4_PsiPrimeTrk_Displaced;
  DoubleMu4_Mass3p8_DZ_PFHT350 = _src.DoubleMu4_Mass3p8_DZ_PFHT350;
  Mu3_PFJet40 = _src.Mu3_PFJet40;
  Mu7p5_L2Mu2_Jpsi = _src.Mu7p5_L2Mu2_Jpsi;
  Mu7p5_L2Mu2_Upsilon = _src.Mu7p5_L2Mu2_Upsilon;
  Mu7p5_Track2_Jpsi = _src.Mu7p5_Track2_Jpsi;
  Mu7p5_Track3p5_Jpsi = _src.Mu7p5_Track3p5_Jpsi;
  Mu7p5_Track7_Jpsi = _src.Mu7p5_Track7_Jpsi;
  Mu7p5_Track2_Upsilon = _src.Mu7p5_Track2_Upsilon;
  Mu7p5_Track3p5_Upsilon = _src.Mu7p5_Track3p5_Upsilon;
  Mu7p5_Track7_Upsilon = _src.Mu7p5_Track7_Upsilon;
  Mu3_L1SingleMu5orSingleMu7 = _src.Mu3_L1SingleMu5orSingleMu7;
  DoublePhoton33_CaloIdL = _src.DoublePhoton33_CaloIdL;
  DoublePhoton70 = _src.DoublePhoton70;
  DoublePhoton85 = _src.DoublePhoton85;
  Ele20_WPTight_Gsf = _src.Ele20_WPTight_Gsf;
  Ele15_WPLoose_Gsf = _src.Ele15_WPLoose_Gsf;
  Ele17_WPLoose_Gsf = _src.Ele17_WPLoose_Gsf;
  Ele20_WPLoose_Gsf = _src.Ele20_WPLoose_Gsf;
  Ele20_eta2p1_WPLoose_Gsf = _src.Ele20_eta2p1_WPLoose_Gsf;
  DiEle27_WPTightCaloOnly_L1DoubleEG = _src.DiEle27_WPTightCaloOnly_L1DoubleEG;
  Ele27_WPTight_Gsf = _src.Ele27_WPTight_Gsf;
  Ele28_WPTight_Gsf = _src.Ele28_WPTight_Gsf;
  Ele30_WPTight_Gsf = _src.Ele30_WPTight_Gsf;
  Ele32_WPTight_Gsf = _src.Ele32_WPTight_Gsf;
  Ele35_WPTight_Gsf = _src.Ele35_WPTight_Gsf;
  Ele35_WPTight_Gsf_L1EGMT = _src.Ele35_WPTight_Gsf_L1EGMT;
  Ele38_WPTight_Gsf = _src.Ele38_WPTight_Gsf;
  Ele40_WPTight_Gsf = _src.Ele40_WPTight_Gsf;
  Ele32_WPTight_Gsf_L1DoubleEG = _src.Ele32_WPTight_Gsf_L1DoubleEG;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = _src.Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
  HT450_Beamspot = _src.HT450_Beamspot;
  HT300_Beamspot = _src.HT300_Beamspot;
  ZeroBias_Beamspot = _src.ZeroBias_Beamspot;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1 = _src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = _src.IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = _src.IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
  IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = _src.IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
  IsoMu20 = _src.IsoMu20;
  IsoMu24 = _src.IsoMu24;
  IsoMu24_eta2p1 = _src.IsoMu24_eta2p1;
  IsoMu27 = _src.IsoMu27;
  IsoMu30 = _src.IsoMu30;
  UncorrectedJetE30_NoBPTX = _src.UncorrectedJetE30_NoBPTX;
  UncorrectedJetE30_NoBPTX3BX = _src.UncorrectedJetE30_NoBPTX3BX;
  UncorrectedJetE60_NoBPTX3BX = _src.UncorrectedJetE60_NoBPTX3BX;
  UncorrectedJetE70_NoBPTX3BX = _src.UncorrectedJetE70_NoBPTX3BX;
  L1SingleMu18 = _src.L1SingleMu18;
  L1SingleMu25 = _src.L1SingleMu25;
  L2Mu10 = _src.L2Mu10;
  L2Mu10_NoVertex_NoBPTX3BX = _src.L2Mu10_NoVertex_NoBPTX3BX;
  L2Mu10_NoVertex_NoBPTX = _src.L2Mu10_NoVertex_NoBPTX;
  L2Mu45_NoVertex_3Sta_NoBPTX3BX = _src.L2Mu45_NoVertex_3Sta_NoBPTX3BX;
  L2Mu40_NoVertex_3Sta_NoBPTX3BX = _src.L2Mu40_NoVertex_3Sta_NoBPTX3BX;
  L2Mu50 = _src.L2Mu50;
  L2Mu23NoVtx_2Cha = _src.L2Mu23NoVtx_2Cha;
  L2Mu23NoVtx_2Cha_CosmicSeed = _src.L2Mu23NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4 = _src.DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;
  DoubleL2Mu30NoVtx_2Cha_Eta2p4 = _src.DoubleL2Mu30NoVtx_2Cha_Eta2p4;
  DoubleL2Mu50 = _src.DoubleL2Mu50;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed = _src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched = _src.DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4 = _src.DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;
  DoubleL2Mu23NoVtx_2Cha = _src.DoubleL2Mu23NoVtx_2Cha;
  DoubleL2Mu23NoVtx_2Cha_NoL2Matched = _src.DoubleL2Mu23NoVtx_2Cha_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha = _src.DoubleL2Mu25NoVtx_2Cha;
  DoubleL2Mu25NoVtx_2Cha_NoL2Matched = _src.DoubleL2Mu25NoVtx_2Cha_NoL2Matched;
  DoubleL2Mu25NoVtx_2Cha_Eta2p4 = _src.DoubleL2Mu25NoVtx_2Cha_Eta2p4;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 = _src.Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 = _src.Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
  Mu25_TkMu0_Onia = _src.Mu25_TkMu0_Onia;
  Mu30_TkMu0_Psi = _src.Mu30_TkMu0_Psi;
  Mu30_TkMu0_Upsilon = _src.Mu30_TkMu0_Upsilon;
  Mu20_TkMu0_Phi = _src.Mu20_TkMu0_Phi;
  Mu25_TkMu0_Phi = _src.Mu25_TkMu0_Phi;
  Mu12 = _src.Mu12;
  Mu15 = _src.Mu15;
  Mu20 = _src.Mu20;
  Mu27 = _src.Mu27;
  Mu50 = _src.Mu50;
  Mu55 = _src.Mu55;
  OldMu100 = _src.OldMu100;
  TkMu100 = _src.TkMu100;
  DiPFJetAve40 = _src.DiPFJetAve40;
  DiPFJetAve60 = _src.DiPFJetAve60;
  DiPFJetAve80 = _src.DiPFJetAve80;
  DiPFJetAve140 = _src.DiPFJetAve140;
  DiPFJetAve200 = _src.DiPFJetAve200;
  DiPFJetAve260 = _src.DiPFJetAve260;
  DiPFJetAve320 = _src.DiPFJetAve320;
  DiPFJetAve400 = _src.DiPFJetAve400;
  DiPFJetAve500 = _src.DiPFJetAve500;
  DiPFJetAve60_HFJEC = _src.DiPFJetAve60_HFJEC;
  DiPFJetAve80_HFJEC = _src.DiPFJetAve80_HFJEC;
  DiPFJetAve100_HFJEC = _src.DiPFJetAve100_HFJEC;
  DiPFJetAve160_HFJEC = _src.DiPFJetAve160_HFJEC;
  DiPFJetAve220_HFJEC = _src.DiPFJetAve220_HFJEC;
  DiPFJetAve300_HFJEC = _src.DiPFJetAve300_HFJEC;
  AK8PFJet15 = _src.AK8PFJet15;
  AK8PFJet25 = _src.AK8PFJet25;
  AK8PFJet40 = _src.AK8PFJet40;
  AK8PFJet60 = _src.AK8PFJet60;
  AK8PFJet80 = _src.AK8PFJet80;
  AK8PFJet140 = _src.AK8PFJet140;
  AK8PFJet200 = _src.AK8PFJet200;
  AK8PFJet260 = _src.AK8PFJet260;
  AK8PFJet320 = _src.AK8PFJet320;
  AK8PFJet400 = _src.AK8PFJet400;
  AK8PFJet450 = _src.AK8PFJet450;
  AK8PFJet500 = _src.AK8PFJet500;
  AK8PFJet550 = _src.AK8PFJet550;
  PFJet15 = _src.PFJet15;
  PFJet25 = _src.PFJet25;
  PFJet40 = _src.PFJet40;
  PFJet60 = _src.PFJet60;
  PFJet80 = _src.PFJet80;
  PFJet140 = _src.PFJet140;
  PFJet200 = _src.PFJet200;
  PFJet260 = _src.PFJet260;
  PFJet320 = _src.PFJet320;
  PFJet400 = _src.PFJet400;
  PFJet450 = _src.PFJet450;
  PFJet500 = _src.PFJet500;
  PFJet550 = _src.PFJet550;
  PFJetFwd15 = _src.PFJetFwd15;
  PFJetFwd25 = _src.PFJetFwd25;
  PFJetFwd40 = _src.PFJetFwd40;
  PFJetFwd60 = _src.PFJetFwd60;
  PFJetFwd80 = _src.PFJetFwd80;
  PFJetFwd140 = _src.PFJetFwd140;
  PFJetFwd200 = _src.PFJetFwd200;
  PFJetFwd260 = _src.PFJetFwd260;
  PFJetFwd320 = _src.PFJetFwd320;
  PFJetFwd400 = _src.PFJetFwd400;
  PFJetFwd450 = _src.PFJetFwd450;
  PFJetFwd500 = _src.PFJetFwd500;
  AK8PFJetFwd15 = _src.AK8PFJetFwd15;
  AK8PFJetFwd25 = _src.AK8PFJetFwd25;
  AK8PFJetFwd40 = _src.AK8PFJetFwd40;
  AK8PFJetFwd60 = _src.AK8PFJetFwd60;
  AK8PFJetFwd80 = _src.AK8PFJetFwd80;
  AK8PFJetFwd140 = _src.AK8PFJetFwd140;
  AK8PFJetFwd200 = _src.AK8PFJetFwd200;
  AK8PFJetFwd260 = _src.AK8PFJetFwd260;
  AK8PFJetFwd320 = _src.AK8PFJetFwd320;
  AK8PFJetFwd400 = _src.AK8PFJetFwd400;
  AK8PFJetFwd450 = _src.AK8PFJetFwd450;
  AK8PFJetFwd500 = _src.AK8PFJetFwd500;
  PFHT180 = _src.PFHT180;
  PFHT250 = _src.PFHT250;
  PFHT370 = _src.PFHT370;
  PFHT430 = _src.PFHT430;
  PFHT510 = _src.PFHT510;
  PFHT590 = _src.PFHT590;
  PFHT680 = _src.PFHT680;
  PFHT780 = _src.PFHT780;
  PFHT890 = _src.PFHT890;
  PFHT1050 = _src.PFHT1050;
  PFHT500_PFMET100_PFMHT100_IDTight = _src.PFHT500_PFMET100_PFMHT100_IDTight;
  PFHT500_PFMET110_PFMHT110_IDTight = _src.PFHT500_PFMET110_PFMHT110_IDTight;
  PFHT700_PFMET85_PFMHT85_IDTight = _src.PFHT700_PFMET85_PFMHT85_IDTight;
  PFHT700_PFMET95_PFMHT95_IDTight = _src.PFHT700_PFMET95_PFMHT95_IDTight;
  PFHT800_PFMET75_PFMHT75_IDTight = _src.PFHT800_PFMET75_PFMHT75_IDTight;
  PFHT800_PFMET85_PFMHT85_IDTight = _src.PFHT800_PFMET85_PFMHT85_IDTight;
  PFMET110_PFMHT110_IDTight = _src.PFMET110_PFMHT110_IDTight;
  PFMET120_PFMHT120_IDTight = _src.PFMET120_PFMHT120_IDTight;
  PFMET130_PFMHT130_IDTight = _src.PFMET130_PFMHT130_IDTight;
  PFMET140_PFMHT140_IDTight = _src.PFMET140_PFMHT140_IDTight;
  PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;
  PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;
  PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;
  PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;
  PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1 = _src.PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;
  PFMET120_PFMHT120_IDTight_PFHT60 = _src.PFMET120_PFMHT120_IDTight_PFHT60;
  PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 = _src.PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
  PFMETTypeOne120_PFMHT120_IDTight_PFHT60 = _src.PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
  PFMETTypeOne110_PFMHT110_IDTight = _src.PFMETTypeOne110_PFMHT110_IDTight;
  PFMETTypeOne120_PFMHT120_IDTight = _src.PFMETTypeOne120_PFMHT120_IDTight;
  PFMETTypeOne130_PFMHT130_IDTight = _src.PFMETTypeOne130_PFMHT130_IDTight;
  PFMETTypeOne140_PFMHT140_IDTight = _src.PFMETTypeOne140_PFMHT140_IDTight;
  PFMETNoMu110_PFMHTNoMu110_IDTight = _src.PFMETNoMu110_PFMHTNoMu110_IDTight;
  PFMETNoMu120_PFMHTNoMu120_IDTight = _src.PFMETNoMu120_PFMHTNoMu120_IDTight;
  PFMETNoMu130_PFMHTNoMu130_IDTight = _src.PFMETNoMu130_PFMHTNoMu130_IDTight;
  PFMETNoMu140_PFMHTNoMu140_IDTight = _src.PFMETNoMu140_PFMHTNoMu140_IDTight;
  MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight = _src.MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
  MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight = _src.MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
  MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight = _src.MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
  MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight = _src.MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
  L1ETMHadSeeds = _src.L1ETMHadSeeds;
  CaloMHT90 = _src.CaloMHT90;
  CaloMET80_NotCleaned = _src.CaloMET80_NotCleaned;
  CaloMET90_NotCleaned = _src.CaloMET90_NotCleaned;
  CaloMET100_NotCleaned = _src.CaloMET100_NotCleaned;
  CaloMET110_NotCleaned = _src.CaloMET110_NotCleaned;
  CaloMET250_NotCleaned = _src.CaloMET250_NotCleaned;
  CaloMET70_HBHECleaned = _src.CaloMET70_HBHECleaned;
  CaloMET80_HBHECleaned = _src.CaloMET80_HBHECleaned;
  CaloMET90_HBHECleaned = _src.CaloMET90_HBHECleaned;
  CaloMET100_HBHECleaned = _src.CaloMET100_HBHECleaned;
  CaloMET250_HBHECleaned = _src.CaloMET250_HBHECleaned;
  CaloMET300_HBHECleaned = _src.CaloMET300_HBHECleaned;
  CaloMET350_HBHECleaned = _src.CaloMET350_HBHECleaned;
  PFMET200_NotCleaned = _src.PFMET200_NotCleaned;
  PFMET200_HBHECleaned = _src.PFMET200_HBHECleaned;
  PFMET250_HBHECleaned = _src.PFMET250_HBHECleaned;
  PFMET300_HBHECleaned = _src.PFMET300_HBHECleaned;
  PFMET200_HBHE_BeamHaloCleaned = _src.PFMET200_HBHE_BeamHaloCleaned;
  PFMETTypeOne200_HBHE_BeamHaloCleaned = _src.PFMETTypeOne200_HBHE_BeamHaloCleaned;
  MET105_IsoTrk50 = _src.MET105_IsoTrk50;
  MET120_IsoTrk50 = _src.MET120_IsoTrk50;
  SingleJet30_Mu12_SinglePFJet40 = _src.SingleJet30_Mu12_SinglePFJet40;
  Mu12_DoublePFJets40_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets100_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets200_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets350_CaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;
  Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  DoublePFJets40_CaloBTagDeepCSV_p71 = _src.DoublePFJets40_CaloBTagDeepCSV_p71;
  DoublePFJets100_CaloBTagDeepCSV_p71 = _src.DoublePFJets100_CaloBTagDeepCSV_p71;
  DoublePFJets200_CaloBTagDeepCSV_p71 = _src.DoublePFJets200_CaloBTagDeepCSV_p71;
  DoublePFJets350_CaloBTagDeepCSV_p71 = _src.DoublePFJets350_CaloBTagDeepCSV_p71;
  DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = _src.DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
  Photon300_NoHE = _src.Photon300_NoHE;
  Mu8_TrkIsoVVL = _src.Mu8_TrkIsoVVL;
  Mu8_DiEle12_CaloIdL_TrackIdL_DZ = _src.Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
  Mu8_DiEle12_CaloIdL_TrackIdL = _src.Mu8_DiEle12_CaloIdL_TrackIdL;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ = _src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 = _src.Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5 = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = _src.Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
  Mu17_TrkIsoVVL = _src.Mu17_TrkIsoVVL;
  Mu19_TrkIsoVVL = _src.Mu19_TrkIsoVVL;
  BTagMu_AK4DiJet20_Mu5 = _src.BTagMu_AK4DiJet20_Mu5;
  BTagMu_AK4DiJet40_Mu5 = _src.BTagMu_AK4DiJet40_Mu5;
  BTagMu_AK4DiJet70_Mu5 = _src.BTagMu_AK4DiJet70_Mu5;
  BTagMu_AK4DiJet110_Mu5 = _src.BTagMu_AK4DiJet110_Mu5;
  BTagMu_AK4DiJet170_Mu5 = _src.BTagMu_AK4DiJet170_Mu5;
  BTagMu_AK4Jet300_Mu5 = _src.BTagMu_AK4Jet300_Mu5;
  BTagMu_AK8DiJet170_Mu5 = _src.BTagMu_AK8DiJet170_Mu5;
  BTagMu_AK8Jet170_DoubleMu5 = _src.BTagMu_AK8Jet170_DoubleMu5;
  BTagMu_AK8Jet300_Mu5 = _src.BTagMu_AK8Jet300_Mu5;
  BTagMu_AK4DiJet20_Mu5_noalgo = _src.BTagMu_AK4DiJet20_Mu5_noalgo;
  BTagMu_AK4DiJet40_Mu5_noalgo = _src.BTagMu_AK4DiJet40_Mu5_noalgo;
  BTagMu_AK4DiJet70_Mu5_noalgo = _src.BTagMu_AK4DiJet70_Mu5_noalgo;
  BTagMu_AK4DiJet110_Mu5_noalgo = _src.BTagMu_AK4DiJet110_Mu5_noalgo;
  BTagMu_AK4DiJet170_Mu5_noalgo = _src.BTagMu_AK4DiJet170_Mu5_noalgo;
  BTagMu_AK4Jet300_Mu5_noalgo = _src.BTagMu_AK4Jet300_Mu5_noalgo;
  BTagMu_AK8DiJet170_Mu5_noalgo = _src.BTagMu_AK8DiJet170_Mu5_noalgo;
  BTagMu_AK8Jet170_DoubleMu5_noalgo = _src.BTagMu_AK8Jet170_DoubleMu5_noalgo;
  BTagMu_AK8Jet300_Mu5_noalgo = _src.BTagMu_AK8Jet300_Mu5_noalgo;
  Ele15_Ele8_CaloIdL_TrackIdL_IsoVL = _src.Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = _src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL = _src.Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL = _src.Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = _src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = _src.Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
  Mu12_DoublePhoton20 = _src.Mu12_DoublePhoton20;
  TriplePhoton_20_20_20_CaloIdLV2 = _src.TriplePhoton_20_20_20_CaloIdLV2;
  TriplePhoton_20_20_20_CaloIdLV2_R9IdVL = _src.TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
  TriplePhoton_30_30_10_CaloIdLV2 = _src.TriplePhoton_30_30_10_CaloIdLV2;
  TriplePhoton_30_30_10_CaloIdLV2_R9IdVL = _src.TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
  TriplePhoton_35_35_5_CaloIdLV2_R9IdVL = _src.TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
  Photon20 = _src.Photon20;
  Photon33 = _src.Photon33;
  Photon50 = _src.Photon50;
  Photon75 = _src.Photon75;
  Photon90 = _src.Photon90;
  Photon120 = _src.Photon120;
  Photon150 = _src.Photon150;
  Photon175 = _src.Photon175;
  Photon200 = _src.Photon200;
  Photon100EB_TightID_TightIso = _src.Photon100EB_TightID_TightIso;
  Photon110EB_TightID_TightIso = _src.Photon110EB_TightID_TightIso;
  Photon120EB_TightID_TightIso = _src.Photon120EB_TightID_TightIso;
  Photon100EBHE10 = _src.Photon100EBHE10;
  Photon100EEHE10 = _src.Photon100EEHE10;
  Photon100EE_TightID_TightIso = _src.Photon100EE_TightID_TightIso;
  Photon50_R9Id90_HE10_IsoM = _src.Photon50_R9Id90_HE10_IsoM;
  Photon75_R9Id90_HE10_IsoM = _src.Photon75_R9Id90_HE10_IsoM;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;
  Photon90_R9Id90_HE10_IsoM = _src.Photon90_R9Id90_HE10_IsoM;
  Photon120_R9Id90_HE10_IsoM = _src.Photon120_R9Id90_HE10_IsoM;
  Photon165_R9Id90_HE10_IsoM = _src.Photon165_R9Id90_HE10_IsoM;
  Photon90_CaloIdL_PFHT700 = _src.Photon90_CaloIdL_PFHT700;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 = _src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 = _src.Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 = _src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 = _src.Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
  Photon35_TwoProngs35 = _src.Photon35_TwoProngs35;
  IsoMu24_TwoProngs35 = _src.IsoMu24_TwoProngs35;
  Dimuon0_Jpsi_L1_NoOS = _src.Dimuon0_Jpsi_L1_NoOS;
  Dimuon0_Jpsi_NoVertexing_NoOS = _src.Dimuon0_Jpsi_NoVertexing_NoOS;
  Dimuon0_Jpsi = _src.Dimuon0_Jpsi;
  Dimuon0_Jpsi_NoVertexing = _src.Dimuon0_Jpsi_NoVertexing;
  Dimuon0_Jpsi_L1_4R_0er1p5R = _src.Dimuon0_Jpsi_L1_4R_0er1p5R;
  Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R = _src.Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
  Dimuon0_Jpsi3p5_Muon2 = _src.Dimuon0_Jpsi3p5_Muon2;
  Dimuon0_Upsilon_L1_4p5 = _src.Dimuon0_Upsilon_L1_4p5;
  Dimuon0_Upsilon_L1_5 = _src.Dimuon0_Upsilon_L1_5;
  Dimuon0_Upsilon_L1_4p5NoOS = _src.Dimuon0_Upsilon_L1_4p5NoOS;
  Dimuon0_Upsilon_L1_4p5er2p0 = _src.Dimuon0_Upsilon_L1_4p5er2p0;
  Dimuon0_Upsilon_L1_4p5er2p0M = _src.Dimuon0_Upsilon_L1_4p5er2p0M;
  Dimuon0_Upsilon_NoVertexing = _src.Dimuon0_Upsilon_NoVertexing;
  Dimuon0_Upsilon_L1_5M = _src.Dimuon0_Upsilon_L1_5M;
  Dimuon0_LowMass_L1_0er1p5R = _src.Dimuon0_LowMass_L1_0er1p5R;
  Dimuon0_LowMass_L1_0er1p5 = _src.Dimuon0_LowMass_L1_0er1p5;
  Dimuon0_LowMass = _src.Dimuon0_LowMass;
  Dimuon0_LowMass_L1_4 = _src.Dimuon0_LowMass_L1_4;
  Dimuon0_LowMass_L1_4R = _src.Dimuon0_LowMass_L1_4R;
  Dimuon0_LowMass_L1_TM530 = _src.Dimuon0_LowMass_L1_TM530;
  Dimuon0_Upsilon_Muon_L1_TM0 = _src.Dimuon0_Upsilon_Muon_L1_TM0;
  Dimuon0_Upsilon_Muon_NoL1Mass = _src.Dimuon0_Upsilon_Muon_NoL1Mass;
  TripleMu_5_3_3_Mass3p8_DZ = _src.TripleMu_5_3_3_Mass3p8_DZ;
  TripleMu_10_5_5_DZ = _src.TripleMu_10_5_5_DZ;
  TripleMu_12_10_5 = _src.TripleMu_12_10_5;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15 = _src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 = _src.Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 = _src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 = _src.Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
  DoubleMu3_DZ_PFMET50_PFMHT60 = _src.DoubleMu3_DZ_PFMET50_PFMHT60;
  DoubleMu3_DZ_PFMET70_PFMHT70 = _src.DoubleMu3_DZ_PFMET70_PFMHT70;
  DoubleMu3_DZ_PFMET90_PFMHT90 = _src.DoubleMu3_DZ_PFMET90_PFMHT90;
  DoubleMu3_Trk_Tau3mu_NoL1Mass = _src.DoubleMu3_Trk_Tau3mu_NoL1Mass;
  DoubleMu4_Jpsi_Displaced = _src.DoubleMu4_Jpsi_Displaced;
  DoubleMu4_Jpsi_NoVertexing = _src.DoubleMu4_Jpsi_NoVertexing;
  DoubleMu4_JpsiTrkTrk_Displaced = _src.DoubleMu4_JpsiTrkTrk_Displaced;
  DoubleMu43NoFiltersNoVtx = _src.DoubleMu43NoFiltersNoVtx;
  DoubleMu48NoFiltersNoVtx = _src.DoubleMu48NoFiltersNoVtx;
  Mu43NoFiltersNoVtx_Photon43_CaloIdL = _src.Mu43NoFiltersNoVtx_Photon43_CaloIdL;
  Mu48NoFiltersNoVtx_Photon48_CaloIdL = _src.Mu48NoFiltersNoVtx_Photon48_CaloIdL;
  Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL = _src.Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;
  Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL = _src.Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;
  DoubleMu33NoFiltersNoVtxDisplaced = _src.DoubleMu33NoFiltersNoVtxDisplaced;
  DoubleMu40NoFiltersNoVtxDisplaced = _src.DoubleMu40NoFiltersNoVtxDisplaced;
  DoubleMu20_7_Mass0to30_L1_DM4 = _src.DoubleMu20_7_Mass0to30_L1_DM4;
  DoubleMu20_7_Mass0to30_L1_DM4EG = _src.DoubleMu20_7_Mass0to30_L1_DM4EG;
  HT425 = _src.HT425;
  HT430_DisplacedDijet40_DisplacedTrack = _src.HT430_DisplacedDijet40_DisplacedTrack;
  HT500_DisplacedDijet40_DisplacedTrack = _src.HT500_DisplacedDijet40_DisplacedTrack;
  HT430_DisplacedDijet60_DisplacedTrack = _src.HT430_DisplacedDijet60_DisplacedTrack;
  HT400_DisplacedDijet40_DisplacedTrack = _src.HT400_DisplacedDijet40_DisplacedTrack;
  HT650_DisplacedDijet60_Inclusive = _src.HT650_DisplacedDijet60_Inclusive;
  HT550_DisplacedDijet60_Inclusive = _src.HT550_DisplacedDijet60_Inclusive;
  DiJet110_35_Mjj650_PFMET110 = _src.DiJet110_35_Mjj650_PFMET110;
  DiJet110_35_Mjj650_PFMET120 = _src.DiJet110_35_Mjj650_PFMET120;
  DiJet110_35_Mjj650_PFMET130 = _src.DiJet110_35_Mjj650_PFMET130;
  TripleJet110_35_35_Mjj650_PFMET110 = _src.TripleJet110_35_35_Mjj650_PFMET110;
  TripleJet110_35_35_Mjj650_PFMET120 = _src.TripleJet110_35_35_Mjj650_PFMET120;
  TripleJet110_35_35_Mjj650_PFMET130 = _src.TripleJet110_35_35_Mjj650_PFMET130;
  Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned = _src.Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
  Ele28_eta2p1_WPTight_Gsf_HT150 = _src.Ele28_eta2p1_WPTight_Gsf_HT150;
  Ele28_HighEta_SC20_Mass55 = _src.Ele28_HighEta_SC20_Mass55;
  DoubleMu20_7_Mass0to30_Photon23 = _src.DoubleMu20_7_Mass0to30_Photon23;
  Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = _src.Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
  Ele15_IsoVVVL_PFHT450_PFMET50 = _src.Ele15_IsoVVVL_PFHT450_PFMET50;
  Ele15_IsoVVVL_PFHT450 = _src.Ele15_IsoVVVL_PFHT450;
  Ele50_IsoVVVL_PFHT450 = _src.Ele50_IsoVVVL_PFHT450;
  Ele15_IsoVVVL_PFHT600 = _src.Ele15_IsoVVVL_PFHT600;
  Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = _src.Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
  Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = _src.Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
  Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 = _src.Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
  Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = _src.Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
  Mu15_IsoVVVL_PFHT450_PFMET50 = _src.Mu15_IsoVVVL_PFHT450_PFMET50;
  Mu15_IsoVVVL_PFHT450 = _src.Mu15_IsoVVVL_PFHT450;
  Mu50_IsoVVVL_PFHT450 = _src.Mu50_IsoVVVL_PFHT450;
  Mu15_IsoVVVL_PFHT600 = _src.Mu15_IsoVVVL_PFHT600;
  Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight = _src.Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;
  Dimuon10_PsiPrime_Barrel_Seagulls = _src.Dimuon10_PsiPrime_Barrel_Seagulls;
  Dimuon20_Jpsi_Barrel_Seagulls = _src.Dimuon20_Jpsi_Barrel_Seagulls;
  Dimuon12_Upsilon_y1p4 = _src.Dimuon12_Upsilon_y1p4;
  Dimuon14_Phi_Barrel_Seagulls = _src.Dimuon14_Phi_Barrel_Seagulls;
  Dimuon18_PsiPrime = _src.Dimuon18_PsiPrime;
  Dimuon25_Jpsi = _src.Dimuon25_Jpsi;
  Dimuon18_PsiPrime_noCorrL1 = _src.Dimuon18_PsiPrime_noCorrL1;
  Dimuon24_Upsilon_noCorrL1 = _src.Dimuon24_Upsilon_noCorrL1;
  Dimuon24_Phi_noCorrL1 = _src.Dimuon24_Phi_noCorrL1;
  Dimuon25_Jpsi_noCorrL1 = _src.Dimuon25_Jpsi_noCorrL1;
  DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8 = _src.DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;
  DiMu9_Ele9_CaloIdL_TrackIdL_DZ = _src.DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
  DiMu9_Ele9_CaloIdL_TrackIdL = _src.DiMu9_Ele9_CaloIdL_TrackIdL;
  DoubleIsoMu20_eta2p1 = _src.DoubleIsoMu20_eta2p1;
  TrkMu12_DoubleTrkMu5NoFiltersNoVtx = _src.TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
  TrkMu16_DoubleTrkMu6NoFiltersNoVtx = _src.TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
  TrkMu17_DoubleTrkMu8NoFiltersNoVtx = _src.TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
  Mu8 = _src.Mu8;
  Mu17 = _src.Mu17;
  Mu19 = _src.Mu19;
  Mu17_Photon30_IsoCaloId = _src.Mu17_Photon30_IsoCaloId;
  Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 = _src.Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
  Ele8_CaloIdM_TrackIdM_PFJet30 = _src.Ele8_CaloIdM_TrackIdM_PFJet30;
  Ele17_CaloIdM_TrackIdM_PFJet30 = _src.Ele17_CaloIdM_TrackIdM_PFJet30;
  Ele23_CaloIdM_TrackIdM_PFJet30 = _src.Ele23_CaloIdM_TrackIdM_PFJet30;
  Ele50_CaloIdVT_GsfTrkIdT_PFJet165 = _src.Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
  Ele115_CaloIdVT_GsfTrkIdT = _src.Ele115_CaloIdVT_GsfTrkIdT;
  Ele135_CaloIdVT_GsfTrkIdT = _src.Ele135_CaloIdVT_GsfTrkIdT;
  Ele145_CaloIdVT_GsfTrkIdT = _src.Ele145_CaloIdVT_GsfTrkIdT;
  Ele200_CaloIdVT_GsfTrkIdT = _src.Ele200_CaloIdVT_GsfTrkIdT;
  Ele250_CaloIdVT_GsfTrkIdT = _src.Ele250_CaloIdVT_GsfTrkIdT;
  Ele300_CaloIdVT_GsfTrkIdT = _src.Ele300_CaloIdVT_GsfTrkIdT;
  PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5 = _src.PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;
  PFHT330PT30_QuadPFJet_75_60_45_40 = _src.PFHT330PT30_QuadPFJet_75_60_45_40;
  PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94 = _src.PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;
  PFHT400_SixPFJet32 = _src.PFHT400_SixPFJet32;
  PFHT450_SixPFJet36_PFBTagDeepCSV_1p59 = _src.PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;
  PFHT450_SixPFJet36 = _src.PFHT450_SixPFJet36;
  PFHT350 = _src.PFHT350;
  PFHT350MinPFJet15 = _src.PFHT350MinPFJet15;
  Photon60_R9Id90_CaloIdL_IsoL = _src.Photon60_R9Id90_CaloIdL_IsoL;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL = _src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 = _src.Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
  ECALHT800 = _src.ECALHT800;
  DiSC30_18_EIso_AND_HE_Mass70 = _src.DiSC30_18_EIso_AND_HE_Mass70;
  Physics = _src.Physics;
  Physics_part0 = _src.Physics_part0;
  Physics_part1 = _src.Physics_part1;
  Physics_part2 = _src.Physics_part2;
  Physics_part3 = _src.Physics_part3;
  Physics_part4 = _src.Physics_part4;
  Physics_part5 = _src.Physics_part5;
  Physics_part6 = _src.Physics_part6;
  Physics_part7 = _src.Physics_part7;
  Random = _src.Random;
  ZeroBias = _src.ZeroBias;
  ZeroBias_Alignment = _src.ZeroBias_Alignment;
  ZeroBias_part0 = _src.ZeroBias_part0;
  ZeroBias_part1 = _src.ZeroBias_part1;
  ZeroBias_part2 = _src.ZeroBias_part2;
  ZeroBias_part3 = _src.ZeroBias_part3;
  ZeroBias_part4 = _src.ZeroBias_part4;
  ZeroBias_part5 = _src.ZeroBias_part5;
  ZeroBias_part6 = _src.ZeroBias_part6;
  ZeroBias_part7 = _src.ZeroBias_part7;
  AK4CaloJet30 = _src.AK4CaloJet30;
  AK4CaloJet40 = _src.AK4CaloJet40;
  AK4CaloJet50 = _src.AK4CaloJet50;
  AK4CaloJet80 = _src.AK4CaloJet80;
  AK4CaloJet100 = _src.AK4CaloJet100;
  AK4CaloJet120 = _src.AK4CaloJet120;
  AK4PFJet30 = _src.AK4PFJet30;
  AK4PFJet50 = _src.AK4PFJet50;
  AK4PFJet80 = _src.AK4PFJet80;
  AK4PFJet100 = _src.AK4PFJet100;
  AK4PFJet120 = _src.AK4PFJet120;
  SinglePhoton10_Eta3p1ForPPRef = _src.SinglePhoton10_Eta3p1ForPPRef;
  SinglePhoton20_Eta3p1ForPPRef = _src.SinglePhoton20_Eta3p1ForPPRef;
  SinglePhoton30_Eta3p1ForPPRef = _src.SinglePhoton30_Eta3p1ForPPRef;
  Photon20_HoverELoose = _src.Photon20_HoverELoose;
  Photon30_HoverELoose = _src.Photon30_HoverELoose;
  EcalCalibration = _src.EcalCalibration;
  HcalCalibration = _src.HcalCalibration;
  L1UnpairedBunchBptxMinus = _src.L1UnpairedBunchBptxMinus;
  L1UnpairedBunchBptxPlus = _src.L1UnpairedBunchBptxPlus;
  L1NotBptxOR = _src.L1NotBptxOR;
  L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 = _src.L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
  CDC_L2cosmic_5_er1p0 = _src.CDC_L2cosmic_5_er1p0;
  CDC_L2cosmic_5p5_er1p0 = _src.CDC_L2cosmic_5p5_er1p0;
  HcalNZS = _src.HcalNZS;
  HcalPhiSym = _src.HcalPhiSym;
  HcalIsolatedbunch = _src.HcalIsolatedbunch;
  IsoTrackHB = _src.IsoTrackHB;
  IsoTrackHE = _src.IsoTrackHE;
  ZeroBias_FirstCollisionAfterAbortGap = _src.ZeroBias_FirstCollisionAfterAbortGap;
  ZeroBias_IsolatedBunches = _src.ZeroBias_IsolatedBunches;
  ZeroBias_FirstCollisionInTrain = _src.ZeroBias_FirstCollisionInTrain;
  ZeroBias_LastCollisionInTrain = _src.ZeroBias_LastCollisionInTrain;
  ZeroBias_FirstBXAfterTrain = _src.ZeroBias_FirstBXAfterTrain;
  IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = _src.IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140 = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = _src.MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr = _src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
  MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
  MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1 = _src.MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
  Ele16_Ele12_Ele8_CaloIdL_TrackIdL = _src.Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
  Rsq0p35 = _src.Rsq0p35;
  Rsq0p40 = _src.Rsq0p40;
  RsqMR300_Rsq0p09_MR200 = _src.RsqMR300_Rsq0p09_MR200;
  RsqMR320_Rsq0p09_MR200 = _src.RsqMR320_Rsq0p09_MR200;
  RsqMR300_Rsq0p09_MR200_4jet = _src.RsqMR300_Rsq0p09_MR200_4jet;
  RsqMR320_Rsq0p09_MR200_4jet = _src.RsqMR320_Rsq0p09_MR200_4jet;
  IsoMu27_MET90 = _src.IsoMu27_MET90;
  DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = _src.DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
  DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = _src.DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
  VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
  VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
  VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1 = _src.VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
  Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 = _src.Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 = _src.Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
  PFMET100_PFMHT100_IDTight_PFHT60 = _src.PFMET100_PFMHT100_IDTight_PFHT60;
  PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 = _src.PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
  PFMETTypeOne100_PFMHT100_IDTight_PFHT60 = _src.PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
  Mu18_Mu9_SameSign = _src.Mu18_Mu9_SameSign;
  Mu18_Mu9_SameSign_DZ = _src.Mu18_Mu9_SameSign_DZ;
  Mu18_Mu9 = _src.Mu18_Mu9;
  Mu18_Mu9_DZ = _src.Mu18_Mu9_DZ;
  Mu20_Mu10_SameSign = _src.Mu20_Mu10_SameSign;
  Mu20_Mu10_SameSign_DZ = _src.Mu20_Mu10_SameSign_DZ;
  Mu20_Mu10 = _src.Mu20_Mu10;
  Mu20_Mu10_DZ = _src.Mu20_Mu10_DZ;
  Mu23_Mu12_SameSign = _src.Mu23_Mu12_SameSign;
  Mu23_Mu12_SameSign_DZ = _src.Mu23_Mu12_SameSign_DZ;
  Mu23_Mu12 = _src.Mu23_Mu12;
  Mu23_Mu12_DZ = _src.Mu23_Mu12_DZ;
  DoubleMu2_Jpsi_DoubleTrk1_Phi1p05 = _src.DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;
  DoubleMu2_Jpsi_DoubleTkMu0_Phi = _src.DoubleMu2_Jpsi_DoubleTkMu0_Phi;
  DoubleMu3_DCA_PFMET50_PFMHT60 = _src.DoubleMu3_DCA_PFMET50_PFMHT60;
  TripleMu_5_3_3_Mass3p8_DCA = _src.TripleMu_5_3_3_Mass3p8_DCA;
  QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2 = _src.QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;
  QuadPFJet98_83_71_15 = _src.QuadPFJet98_83_71_15;
  QuadPFJet103_88_75_15 = _src.QuadPFJet103_88_75_15;
  QuadPFJet105_88_76_15 = _src.QuadPFJet105_88_76_15;
  QuadPFJet111_90_80_15 = _src.QuadPFJet111_90_80_15;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17 = _src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1 = _src.AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 = _src.AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 = _src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto = _src.Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;
  Mu12_IP6_part0 = _src.Mu12_IP6_part0;
  Mu12_IP6_part1 = _src.Mu12_IP6_part1;
  Mu12_IP6_part2 = _src.Mu12_IP6_part2;
  Mu12_IP6_part3 = _src.Mu12_IP6_part3;
  Mu12_IP6_part4 = _src.Mu12_IP6_part4;
  Mu9_IP5_part0 = _src.Mu9_IP5_part0;
  Mu9_IP5_part1 = _src.Mu9_IP5_part1;
  Mu9_IP5_part2 = _src.Mu9_IP5_part2;
  Mu9_IP5_part3 = _src.Mu9_IP5_part3;
  Mu9_IP5_part4 = _src.Mu9_IP5_part4;
  Mu7_IP4_part0 = _src.Mu7_IP4_part0;
  Mu7_IP4_part1 = _src.Mu7_IP4_part1;
  Mu7_IP4_part2 = _src.Mu7_IP4_part2;
  Mu7_IP4_part3 = _src.Mu7_IP4_part3;
  Mu7_IP4_part4 = _src.Mu7_IP4_part4;
  Mu9_IP4_part0 = _src.Mu9_IP4_part0;
  Mu9_IP4_part1 = _src.Mu9_IP4_part1;
  Mu9_IP4_part2 = _src.Mu9_IP4_part2;
  Mu9_IP4_part3 = _src.Mu9_IP4_part3;
  Mu9_IP4_part4 = _src.Mu9_IP4_part4;
  Mu8_IP5_part0 = _src.Mu8_IP5_part0;
  Mu8_IP5_part1 = _src.Mu8_IP5_part1;
  Mu8_IP5_part2 = _src.Mu8_IP5_part2;
  Mu8_IP5_part3 = _src.Mu8_IP5_part3;
  Mu8_IP5_part4 = _src.Mu8_IP5_part4;
  Mu8_IP6_part0 = _src.Mu8_IP6_part0;
  Mu8_IP6_part1 = _src.Mu8_IP6_part1;
  Mu8_IP6_part2 = _src.Mu8_IP6_part2;
  Mu8_IP6_part3 = _src.Mu8_IP6_part3;
  Mu8_IP6_part4 = _src.Mu8_IP6_part4;
  Mu9_IP6_part0 = _src.Mu9_IP6_part0;
  Mu9_IP6_part1 = _src.Mu9_IP6_part1;
  Mu9_IP6_part2 = _src.Mu9_IP6_part2;
  Mu9_IP6_part3 = _src.Mu9_IP6_part3;
  Mu9_IP6_part4 = _src.Mu9_IP6_part4;
  Mu8_IP3_part0 = _src.Mu8_IP3_part0;
  Mu8_IP3_part1 = _src.Mu8_IP3_part1;
  Mu8_IP3_part2 = _src.Mu8_IP3_part2;
  Mu8_IP3_part3 = _src.Mu8_IP3_part3;
  Mu8_IP3_part4 = _src.Mu8_IP3_part4;
  QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = _src.QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
  TrkMu6NoFiltersNoVtx = _src.TrkMu6NoFiltersNoVtx;
  TrkMu16NoFiltersNoVtx = _src.TrkMu16NoFiltersNoVtx;
  DoubleTrkMu_16_6_NoFiltersNoVtx = _src.DoubleTrkMu_16_6_NoFiltersNoVtx;

  /* BEGIN CUSTOM Triggers.cc.operator= */
  /* END CUSTOM */

  return *this;
}

void
panda::Triggers::doSetStatus_(TTree& _tree, utils::BranchList const& _branches)
{
  utils::setStatus(_tree, name_, "AK8PFJet360_TrimMass30", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet380_TrimMass30", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet400_TrimMass30", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet420_TrimMass30", _branches);
  utils::setStatus(_tree, name_, "AK8PFHT750_TrimMass50", _branches);
  utils::setStatus(_tree, name_, "AK8PFHT800_TrimMass50", _branches);
  utils::setStatus(_tree, name_, "AK8PFHT850_TrimMass50", _branches);
  utils::setStatus(_tree, name_, "AK8PFHT900_TrimMass50", _branches);
  utils::setStatus(_tree, name_, "CaloJet500_NoJetID", _branches);
  utils::setStatus(_tree, name_, "CaloJet550_NoJetID", _branches);
  utils::setStatus(_tree, name_, "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Trimuon5_3p5_2_Upsilon_Muon", _branches);
  utils::setStatus(_tree, name_, "TrimuonOpen_5_3p5_2_Upsilon_Muon", _branches);
  utils::setStatus(_tree, name_, "DoubleEle25_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "DoubleEle27_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "DoubleEle33_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "DoubleEle24_eta2p1_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", _branches);
  utils::setStatus(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", _branches);
  utils::setStatus(_tree, name_, "Ele27_Ele37_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "Mu27_Ele37_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "Mu37_Ele27_CaloIdL_MW", _branches);
  utils::setStatus(_tree, name_, "Mu37_TkMu27", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_3_Bs", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_3_Jpsi", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_JpsiTrk_Displaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_LowMassNonResonantTrk_Displaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_Trk_Tau3mu", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_TkMu_DsTau3Mu", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_PsiPrimeTrk_Displaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_Mass3p8_DZ_PFHT350", _branches);
  utils::setStatus(_tree, name_, "Mu3_PFJet40", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_L2Mu2_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_L2Mu2_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track2_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track3p5_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track7_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track2_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track3p5_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Mu7p5_Track7_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Mu3_L1SingleMu5orSingleMu7", _branches);
  utils::setStatus(_tree, name_, "DoublePhoton33_CaloIdL", _branches);
  utils::setStatus(_tree, name_, "DoublePhoton70", _branches);
  utils::setStatus(_tree, name_, "DoublePhoton85", _branches);
  utils::setStatus(_tree, name_, "Ele20_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele15_WPLoose_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele17_WPLoose_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele20_WPLoose_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele20_eta2p1_WPLoose_Gsf", _branches);
  utils::setStatus(_tree, name_, "DiEle27_WPTightCaloOnly_L1DoubleEG", _branches);
  utils::setStatus(_tree, name_, "Ele27_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele28_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele30_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele32_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele35_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele35_WPTight_Gsf_L1EGMT", _branches);
  utils::setStatus(_tree, name_, "Ele38_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele40_WPTight_Gsf", _branches);
  utils::setStatus(_tree, name_, "Ele32_WPTight_Gsf_L1DoubleEG", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "HT450_Beamspot", _branches);
  utils::setStatus(_tree, name_, "HT300_Beamspot", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_Beamspot", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", _branches);
  utils::setStatus(_tree, name_, "IsoMu20", _branches);
  utils::setStatus(_tree, name_, "IsoMu24", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1", _branches);
  utils::setStatus(_tree, name_, "IsoMu27", _branches);
  utils::setStatus(_tree, name_, "IsoMu30", _branches);
  utils::setStatus(_tree, name_, "UncorrectedJetE30_NoBPTX", _branches);
  utils::setStatus(_tree, name_, "UncorrectedJetE30_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "UncorrectedJetE60_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "UncorrectedJetE70_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "L1SingleMu18", _branches);
  utils::setStatus(_tree, name_, "L1SingleMu25", _branches);
  utils::setStatus(_tree, name_, "L2Mu10", _branches);
  utils::setStatus(_tree, name_, "L2Mu10_NoVertex_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "L2Mu10_NoVertex_NoBPTX", _branches);
  utils::setStatus(_tree, name_, "L2Mu45_NoVertex_3Sta_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "L2Mu40_NoVertex_3Sta_NoBPTX3BX", _branches);
  utils::setStatus(_tree, name_, "L2Mu50", _branches);
  utils::setStatus(_tree, name_, "L2Mu23NoVtx_2Cha", _branches);
  utils::setStatus(_tree, name_, "L2Mu23NoVtx_2Cha_CosmicSeed", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_Eta2p4", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu50", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_NoL2Matched", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_NoL2Matched", _branches);
  utils::setStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_Eta2p4", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", _branches);
  utils::setStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", _branches);
  utils::setStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", _branches);
  utils::setStatus(_tree, name_, "Mu25_TkMu0_Onia", _branches);
  utils::setStatus(_tree, name_, "Mu30_TkMu0_Psi", _branches);
  utils::setStatus(_tree, name_, "Mu30_TkMu0_Upsilon", _branches);
  utils::setStatus(_tree, name_, "Mu20_TkMu0_Phi", _branches);
  utils::setStatus(_tree, name_, "Mu25_TkMu0_Phi", _branches);
  utils::setStatus(_tree, name_, "Mu12", _branches);
  utils::setStatus(_tree, name_, "Mu15", _branches);
  utils::setStatus(_tree, name_, "Mu20", _branches);
  utils::setStatus(_tree, name_, "Mu27", _branches);
  utils::setStatus(_tree, name_, "Mu50", _branches);
  utils::setStatus(_tree, name_, "Mu55", _branches);
  utils::setStatus(_tree, name_, "OldMu100", _branches);
  utils::setStatus(_tree, name_, "TkMu100", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve40", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve60", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve80", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve140", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve200", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve260", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve320", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve400", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve500", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve60_HFJEC", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve80_HFJEC", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve100_HFJEC", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve160_HFJEC", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve220_HFJEC", _branches);
  utils::setStatus(_tree, name_, "DiPFJetAve300_HFJEC", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet15", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet25", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet40", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet60", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet80", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet140", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet200", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet260", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet320", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet400", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet450", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet500", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet550", _branches);
  utils::setStatus(_tree, name_, "PFJet15", _branches);
  utils::setStatus(_tree, name_, "PFJet25", _branches);
  utils::setStatus(_tree, name_, "PFJet40", _branches);
  utils::setStatus(_tree, name_, "PFJet60", _branches);
  utils::setStatus(_tree, name_, "PFJet80", _branches);
  utils::setStatus(_tree, name_, "PFJet140", _branches);
  utils::setStatus(_tree, name_, "PFJet200", _branches);
  utils::setStatus(_tree, name_, "PFJet260", _branches);
  utils::setStatus(_tree, name_, "PFJet320", _branches);
  utils::setStatus(_tree, name_, "PFJet400", _branches);
  utils::setStatus(_tree, name_, "PFJet450", _branches);
  utils::setStatus(_tree, name_, "PFJet500", _branches);
  utils::setStatus(_tree, name_, "PFJet550", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd15", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd25", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd40", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd60", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd80", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd140", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd200", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd260", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd320", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd400", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd450", _branches);
  utils::setStatus(_tree, name_, "PFJetFwd500", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd15", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd25", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd40", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd60", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd80", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd140", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd200", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd260", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd320", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd400", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd450", _branches);
  utils::setStatus(_tree, name_, "AK8PFJetFwd500", _branches);
  utils::setStatus(_tree, name_, "PFHT180", _branches);
  utils::setStatus(_tree, name_, "PFHT250", _branches);
  utils::setStatus(_tree, name_, "PFHT370", _branches);
  utils::setStatus(_tree, name_, "PFHT430", _branches);
  utils::setStatus(_tree, name_, "PFHT510", _branches);
  utils::setStatus(_tree, name_, "PFHT590", _branches);
  utils::setStatus(_tree, name_, "PFHT680", _branches);
  utils::setStatus(_tree, name_, "PFHT780", _branches);
  utils::setStatus(_tree, name_, "PFHT890", _branches);
  utils::setStatus(_tree, name_, "PFHT1050", _branches);
  utils::setStatus(_tree, name_, "PFHT500_PFMET100_PFMHT100_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFHT500_PFMET110_PFMHT110_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFHT700_PFMET85_PFMHT85_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFHT700_PFMET95_PFMHT95_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFHT800_PFMET75_PFMHT75_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFHT800_PFMET85_PFMHT85_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMET110_PFMHT110_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMET120_PFMHT120_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMET130_PFMHT130_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMET140_PFMHT140_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", _branches);
  utils::setStatus(_tree, name_, "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", _branches);
  utils::setStatus(_tree, name_, "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", _branches);
  utils::setStatus(_tree, name_, "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", _branches);
  utils::setStatus(_tree, name_, "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", _branches);
  utils::setStatus(_tree, name_, "PFMET120_PFMHT120_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne110_PFMHT110_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne130_PFMHT130_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne140_PFMHT140_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu130_PFMHTNoMu130_IDTight", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu140_PFMHTNoMu140_IDTight", _branches);
  utils::setStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", _branches);
  utils::setStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", _branches);
  utils::setStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", _branches);
  utils::setStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", _branches);
  utils::setStatus(_tree, name_, "L1ETMHadSeeds", _branches);
  utils::setStatus(_tree, name_, "CaloMHT90", _branches);
  utils::setStatus(_tree, name_, "CaloMET80_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET90_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET100_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET110_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET250_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET70_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET80_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET90_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET100_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET250_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET300_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "CaloMET350_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET200_NotCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET200_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET250_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET300_HBHECleaned", _branches);
  utils::setStatus(_tree, name_, "PFMET200_HBHE_BeamHaloCleaned", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne200_HBHE_BeamHaloCleaned", _branches);
  utils::setStatus(_tree, name_, "MET105_IsoTrk50", _branches);
  utils::setStatus(_tree, name_, "MET120_IsoTrk50", _branches);
  utils::setStatus(_tree, name_, "SingleJet30_Mu12_SinglePFJet40", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets40_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets100_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets200_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets350_CaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", _branches);
  utils::setStatus(_tree, name_, "Photon300_NoHE", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL", _branches);
  utils::setStatus(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", _branches);
  utils::setStatus(_tree, name_, "Mu17_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "Mu19_TrkIsoVVL", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet20_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet40_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet70_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet110_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet170_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4Jet300_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8DiJet170_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8Jet300_Mu5", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet20_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet40_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet70_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet110_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4DiJet170_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK4Jet300_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8DiJet170_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "BTagMu_AK8Jet300_Mu5_noalgo", _branches);
  utils::setStatus(_tree, name_, "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", _branches);
  utils::setStatus(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", _branches);
  utils::setStatus(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", _branches);
  utils::setStatus(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", _branches);
  utils::setStatus(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu12_DoublePhoton20", _branches);
  utils::setStatus(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2", _branches);
  utils::setStatus(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", _branches);
  utils::setStatus(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2", _branches);
  utils::setStatus(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", _branches);
  utils::setStatus(_tree, name_, "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", _branches);
  utils::setStatus(_tree, name_, "Photon20", _branches);
  utils::setStatus(_tree, name_, "Photon33", _branches);
  utils::setStatus(_tree, name_, "Photon50", _branches);
  utils::setStatus(_tree, name_, "Photon75", _branches);
  utils::setStatus(_tree, name_, "Photon90", _branches);
  utils::setStatus(_tree, name_, "Photon120", _branches);
  utils::setStatus(_tree, name_, "Photon150", _branches);
  utils::setStatus(_tree, name_, "Photon175", _branches);
  utils::setStatus(_tree, name_, "Photon200", _branches);
  utils::setStatus(_tree, name_, "Photon100EB_TightID_TightIso", _branches);
  utils::setStatus(_tree, name_, "Photon110EB_TightID_TightIso", _branches);
  utils::setStatus(_tree, name_, "Photon120EB_TightID_TightIso", _branches);
  utils::setStatus(_tree, name_, "Photon100EBHE10", _branches);
  utils::setStatus(_tree, name_, "Photon100EEHE10", _branches);
  utils::setStatus(_tree, name_, "Photon100EE_TightID_TightIso", _branches);
  utils::setStatus(_tree, name_, "Photon50_R9Id90_HE10_IsoM", _branches);
  utils::setStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM", _branches);
  utils::setStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", _branches);
  utils::setStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", _branches);
  utils::setStatus(_tree, name_, "Photon90_R9Id90_HE10_IsoM", _branches);
  utils::setStatus(_tree, name_, "Photon120_R9Id90_HE10_IsoM", _branches);
  utils::setStatus(_tree, name_, "Photon165_R9Id90_HE10_IsoM", _branches);
  utils::setStatus(_tree, name_, "Photon90_CaloIdL_PFHT700", _branches);
  utils::setStatus(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", _branches);
  utils::setStatus(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", _branches);
  utils::setStatus(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", _branches);
  utils::setStatus(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", _branches);
  utils::setStatus(_tree, name_, "Photon35_TwoProngs35", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_TwoProngs35", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi_L1_NoOS", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing_NoOS", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi_L1_4R_0er1p5R", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Jpsi3p5_Muon2", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_5", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5NoOS", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0M", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_NoVertexing", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_L1_5M", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass_L1_0er1p5R", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass_L1_0er1p5", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass_L1_4", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass_L1_4R", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_LowMass_L1_TM530", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_Muon_L1_TM0", _branches);
  utils::setStatus(_tree, name_, "Dimuon0_Upsilon_Muon_NoL1Mass", _branches);
  utils::setStatus(_tree, name_, "TripleMu_5_3_3_Mass3p8_DZ", _branches);
  utils::setStatus(_tree, name_, "TripleMu_10_5_5_DZ", _branches);
  utils::setStatus(_tree, name_, "TripleMu_12_10_5", _branches);
  utils::setStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15", _branches);
  utils::setStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", _branches);
  utils::setStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", _branches);
  utils::setStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_DZ_PFMET50_PFMHT60", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_DZ_PFMET70_PFMHT70", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_DZ_PFMET90_PFMHT90", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_Trk_Tau3mu_NoL1Mass", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_Jpsi_Displaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_Jpsi_NoVertexing", _branches);
  utils::setStatus(_tree, name_, "DoubleMu4_JpsiTrkTrk_Displaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu43NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "DoubleMu48NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "Mu43NoFiltersNoVtx_Photon43_CaloIdL", _branches);
  utils::setStatus(_tree, name_, "Mu48NoFiltersNoVtx_Photon48_CaloIdL", _branches);
  utils::setStatus(_tree, name_, "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", _branches);
  utils::setStatus(_tree, name_, "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", _branches);
  utils::setStatus(_tree, name_, "DoubleMu33NoFiltersNoVtxDisplaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu40NoFiltersNoVtxDisplaced", _branches);
  utils::setStatus(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4", _branches);
  utils::setStatus(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4EG", _branches);
  utils::setStatus(_tree, name_, "HT425", _branches);
  utils::setStatus(_tree, name_, "HT430_DisplacedDijet40_DisplacedTrack", _branches);
  utils::setStatus(_tree, name_, "HT500_DisplacedDijet40_DisplacedTrack", _branches);
  utils::setStatus(_tree, name_, "HT430_DisplacedDijet60_DisplacedTrack", _branches);
  utils::setStatus(_tree, name_, "HT400_DisplacedDijet40_DisplacedTrack", _branches);
  utils::setStatus(_tree, name_, "HT650_DisplacedDijet60_Inclusive", _branches);
  utils::setStatus(_tree, name_, "HT550_DisplacedDijet60_Inclusive", _branches);
  utils::setStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET110", _branches);
  utils::setStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET120", _branches);
  utils::setStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET130", _branches);
  utils::setStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET110", _branches);
  utils::setStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET120", _branches);
  utils::setStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET130", _branches);
  utils::setStatus(_tree, name_, "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", _branches);
  utils::setStatus(_tree, name_, "Ele28_eta2p1_WPTight_Gsf_HT150", _branches);
  utils::setStatus(_tree, name_, "Ele28_HighEta_SC20_Mass55", _branches);
  utils::setStatus(_tree, name_, "DoubleMu20_7_Mass0to30_Photon23", _branches);
  utils::setStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", _branches);
  utils::setStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450_PFMET50", _branches);
  utils::setStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450", _branches);
  utils::setStatus(_tree, name_, "Ele50_IsoVVVL_PFHT450", _branches);
  utils::setStatus(_tree, name_, "Ele15_IsoVVVL_PFHT600", _branches);
  utils::setStatus(_tree, name_, "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", _branches);
  utils::setStatus(_tree, name_, "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", _branches);
  utils::setStatus(_tree, name_, "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", _branches);
  utils::setStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", _branches);
  utils::setStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450_PFMET50", _branches);
  utils::setStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450", _branches);
  utils::setStatus(_tree, name_, "Mu50_IsoVVVL_PFHT450", _branches);
  utils::setStatus(_tree, name_, "Mu15_IsoVVVL_PFHT600", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", _branches);
  utils::setStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", _branches);
  utils::setStatus(_tree, name_, "Dimuon10_PsiPrime_Barrel_Seagulls", _branches);
  utils::setStatus(_tree, name_, "Dimuon20_Jpsi_Barrel_Seagulls", _branches);
  utils::setStatus(_tree, name_, "Dimuon12_Upsilon_y1p4", _branches);
  utils::setStatus(_tree, name_, "Dimuon14_Phi_Barrel_Seagulls", _branches);
  utils::setStatus(_tree, name_, "Dimuon18_PsiPrime", _branches);
  utils::setStatus(_tree, name_, "Dimuon25_Jpsi", _branches);
  utils::setStatus(_tree, name_, "Dimuon18_PsiPrime_noCorrL1", _branches);
  utils::setStatus(_tree, name_, "Dimuon24_Upsilon_noCorrL1", _branches);
  utils::setStatus(_tree, name_, "Dimuon24_Phi_noCorrL1", _branches);
  utils::setStatus(_tree, name_, "Dimuon25_Jpsi_noCorrL1", _branches);
  utils::setStatus(_tree, name_, "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", _branches);
  utils::setStatus(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL_DZ", _branches);
  utils::setStatus(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL", _branches);
  utils::setStatus(_tree, name_, "DoubleIsoMu20_eta2p1", _branches);
  utils::setStatus(_tree, name_, "TrkMu12_DoubleTrkMu5NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "TrkMu16_DoubleTrkMu6NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "TrkMu17_DoubleTrkMu8NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "Mu8", _branches);
  utils::setStatus(_tree, name_, "Mu17", _branches);
  utils::setStatus(_tree, name_, "Mu19", _branches);
  utils::setStatus(_tree, name_, "Mu17_Photon30_IsoCaloId", _branches);
  utils::setStatus(_tree, name_, "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele8_CaloIdM_TrackIdM_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele17_CaloIdM_TrackIdM_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele23_CaloIdM_TrackIdM_PFJet30", _branches);
  utils::setStatus(_tree, name_, "Ele50_CaloIdVT_GsfTrkIdT_PFJet165", _branches);
  utils::setStatus(_tree, name_, "Ele115_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "Ele135_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "Ele145_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "Ele200_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "Ele250_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "Ele300_CaloIdVT_GsfTrkIdT", _branches);
  utils::setStatus(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", _branches);
  utils::setStatus(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40", _branches);
  utils::setStatus(_tree, name_, "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", _branches);
  utils::setStatus(_tree, name_, "PFHT400_SixPFJet32", _branches);
  utils::setStatus(_tree, name_, "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", _branches);
  utils::setStatus(_tree, name_, "PFHT450_SixPFJet36", _branches);
  utils::setStatus(_tree, name_, "PFHT350", _branches);
  utils::setStatus(_tree, name_, "PFHT350MinPFJet15", _branches);
  utils::setStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL", _branches);
  utils::setStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", _branches);
  utils::setStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", _branches);
  utils::setStatus(_tree, name_, "ECALHT800", _branches);
  utils::setStatus(_tree, name_, "DiSC30_18_EIso_AND_HE_Mass70", _branches);
  utils::setStatus(_tree, name_, "Physics", _branches);
  utils::setStatus(_tree, name_, "Physics_part0", _branches);
  utils::setStatus(_tree, name_, "Physics_part1", _branches);
  utils::setStatus(_tree, name_, "Physics_part2", _branches);
  utils::setStatus(_tree, name_, "Physics_part3", _branches);
  utils::setStatus(_tree, name_, "Physics_part4", _branches);
  utils::setStatus(_tree, name_, "Physics_part5", _branches);
  utils::setStatus(_tree, name_, "Physics_part6", _branches);
  utils::setStatus(_tree, name_, "Physics_part7", _branches);
  utils::setStatus(_tree, name_, "Random", _branches);
  utils::setStatus(_tree, name_, "ZeroBias", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_Alignment", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part0", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part1", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part2", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part3", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part4", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part5", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part6", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_part7", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet30", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet40", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet50", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet80", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet100", _branches);
  utils::setStatus(_tree, name_, "AK4CaloJet120", _branches);
  utils::setStatus(_tree, name_, "AK4PFJet30", _branches);
  utils::setStatus(_tree, name_, "AK4PFJet50", _branches);
  utils::setStatus(_tree, name_, "AK4PFJet80", _branches);
  utils::setStatus(_tree, name_, "AK4PFJet100", _branches);
  utils::setStatus(_tree, name_, "AK4PFJet120", _branches);
  utils::setStatus(_tree, name_, "SinglePhoton10_Eta3p1ForPPRef", _branches);
  utils::setStatus(_tree, name_, "SinglePhoton20_Eta3p1ForPPRef", _branches);
  utils::setStatus(_tree, name_, "SinglePhoton30_Eta3p1ForPPRef", _branches);
  utils::setStatus(_tree, name_, "Photon20_HoverELoose", _branches);
  utils::setStatus(_tree, name_, "Photon30_HoverELoose", _branches);
  utils::setStatus(_tree, name_, "EcalCalibration", _branches);
  utils::setStatus(_tree, name_, "HcalCalibration", _branches);
  utils::setStatus(_tree, name_, "L1UnpairedBunchBptxMinus", _branches);
  utils::setStatus(_tree, name_, "L1UnpairedBunchBptxPlus", _branches);
  utils::setStatus(_tree, name_, "L1NotBptxOR", _branches);
  utils::setStatus(_tree, name_, "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", _branches);
  utils::setStatus(_tree, name_, "CDC_L2cosmic_5_er1p0", _branches);
  utils::setStatus(_tree, name_, "CDC_L2cosmic_5p5_er1p0", _branches);
  utils::setStatus(_tree, name_, "HcalNZS", _branches);
  utils::setStatus(_tree, name_, "HcalPhiSym", _branches);
  utils::setStatus(_tree, name_, "HcalIsolatedbunch", _branches);
  utils::setStatus(_tree, name_, "IsoTrackHB", _branches);
  utils::setStatus(_tree, name_, "IsoTrackHE", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_FirstCollisionAfterAbortGap", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_IsolatedBunches", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_FirstCollisionInTrain", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_LastCollisionInTrain", _branches);
  utils::setStatus(_tree, name_, "ZeroBias_FirstBXAfterTrain", _branches);
  utils::setStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", _branches);
  utils::setStatus(_tree, name_, "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", _branches);
  utils::setStatus(_tree, name_, "Ele16_Ele12_Ele8_CaloIdL_TrackIdL", _branches);
  utils::setStatus(_tree, name_, "Rsq0p35", _branches);
  utils::setStatus(_tree, name_, "Rsq0p40", _branches);
  utils::setStatus(_tree, name_, "RsqMR300_Rsq0p09_MR200", _branches);
  utils::setStatus(_tree, name_, "RsqMR320_Rsq0p09_MR200", _branches);
  utils::setStatus(_tree, name_, "RsqMR300_Rsq0p09_MR200_4jet", _branches);
  utils::setStatus(_tree, name_, "RsqMR320_Rsq0p09_MR200_4jet", _branches);
  utils::setStatus(_tree, name_, "IsoMu27_MET90", _branches);
  utils::setStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", _branches);
  utils::setStatus(_tree, name_, "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", _branches);
  utils::setStatus(_tree, name_, "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", _branches);
  utils::setStatus(_tree, name_, "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", _branches);
  utils::setStatus(_tree, name_, "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", _branches);
  utils::setStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", _branches);
  utils::setStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", _branches);
  utils::setStatus(_tree, name_, "PFMET100_PFMHT100_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "PFMETTypeOne100_PFMHT100_IDTight_PFHT60", _branches);
  utils::setStatus(_tree, name_, "Mu18_Mu9_SameSign", _branches);
  utils::setStatus(_tree, name_, "Mu18_Mu9_SameSign_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu18_Mu9", _branches);
  utils::setStatus(_tree, name_, "Mu18_Mu9_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_SameSign", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_SameSign_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10", _branches);
  utils::setStatus(_tree, name_, "Mu20_Mu10_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu23_Mu12_SameSign", _branches);
  utils::setStatus(_tree, name_, "Mu23_Mu12_SameSign_DZ", _branches);
  utils::setStatus(_tree, name_, "Mu23_Mu12", _branches);
  utils::setStatus(_tree, name_, "Mu23_Mu12_DZ", _branches);
  utils::setStatus(_tree, name_, "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", _branches);
  utils::setStatus(_tree, name_, "DoubleMu2_Jpsi_DoubleTkMu0_Phi", _branches);
  utils::setStatus(_tree, name_, "DoubleMu3_DCA_PFMET50_PFMHT60", _branches);
  utils::setStatus(_tree, name_, "TripleMu_5_3_3_Mass3p8_DCA", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet98_83_71_15", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet103_88_75_15", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet105_88_76_15", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet111_90_80_15", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", _branches);
  utils::setStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", _branches);
  utils::setStatus(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", _branches);
  utils::setStatus(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", _branches);
  utils::setStatus(_tree, name_, "Mu12_IP6_part0", _branches);
  utils::setStatus(_tree, name_, "Mu12_IP6_part1", _branches);
  utils::setStatus(_tree, name_, "Mu12_IP6_part2", _branches);
  utils::setStatus(_tree, name_, "Mu12_IP6_part3", _branches);
  utils::setStatus(_tree, name_, "Mu12_IP6_part4", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP5_part0", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP5_part1", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP5_part2", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP5_part3", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP5_part4", _branches);
  utils::setStatus(_tree, name_, "Mu7_IP4_part0", _branches);
  utils::setStatus(_tree, name_, "Mu7_IP4_part1", _branches);
  utils::setStatus(_tree, name_, "Mu7_IP4_part2", _branches);
  utils::setStatus(_tree, name_, "Mu7_IP4_part3", _branches);
  utils::setStatus(_tree, name_, "Mu7_IP4_part4", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP4_part0", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP4_part1", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP4_part2", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP4_part3", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP4_part4", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP5_part0", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP5_part1", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP5_part2", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP5_part3", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP5_part4", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP6_part0", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP6_part1", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP6_part2", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP6_part3", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP6_part4", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP6_part0", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP6_part1", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP6_part2", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP6_part3", _branches);
  utils::setStatus(_tree, name_, "Mu9_IP6_part4", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP3_part0", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP3_part1", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP3_part2", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP3_part3", _branches);
  utils::setStatus(_tree, name_, "Mu8_IP3_part4", _branches);
  utils::setStatus(_tree, name_, "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", _branches);
  utils::setStatus(_tree, name_, "TrkMu6NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "TrkMu16NoFiltersNoVtx", _branches);
  utils::setStatus(_tree, name_, "DoubleTrkMu_16_6_NoFiltersNoVtx", _branches);
}

panda::utils::BranchList
panda::Triggers::doGetStatus_(TTree& _tree) const
{
  utils::BranchList blist;

  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet360_TrimMass30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet380_TrimMass30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet400_TrimMass30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet420_TrimMass30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFHT750_TrimMass50"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFHT800_TrimMass50"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFHT850_TrimMass50"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFHT900_TrimMass50"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloJet500_NoJetID"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloJet550_NoJetID"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Trimuon5_3p5_2_Upsilon_Muon"));
  blist.push_back(utils::getStatus(_tree, name_, "TrimuonOpen_5_3p5_2_Upsilon_Muon"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle25_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle27_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle33_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle24_eta2p1_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele27_Ele37_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu27_Ele37_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu37_Ele27_CaloIdL_MW"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu37_TkMu27"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_3_Bs"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_3_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_JpsiTrk_Displaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_LowMassNonResonantTrk_Displaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_Trk_Tau3mu"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_TkMu_DsTau3Mu"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_PsiPrimeTrk_Displaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_Mass3p8_DZ_PFHT350"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3_PFJet40"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_L2Mu2_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_L2Mu2_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track2_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track3p5_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track7_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track2_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track3p5_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7p5_Track7_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3_L1SingleMu5orSingleMu7"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePhoton33_CaloIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePhoton70"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePhoton85"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele20_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_WPLoose_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele17_WPLoose_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele20_WPLoose_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele20_eta2p1_WPLoose_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "DiEle27_WPTightCaloOnly_L1DoubleEG"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele27_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele28_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele30_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele32_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele35_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele35_WPTight_Gsf_L1EGMT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele38_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele40_WPTight_Gsf"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele32_WPTight_Gsf_L1DoubleEG"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "HT450_Beamspot"));
  blist.push_back(utils::getStatus(_tree, name_, "HT300_Beamspot"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_Beamspot"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu20"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu27"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu30"));
  blist.push_back(utils::getStatus(_tree, name_, "UncorrectedJetE30_NoBPTX"));
  blist.push_back(utils::getStatus(_tree, name_, "UncorrectedJetE30_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "UncorrectedJetE60_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "UncorrectedJetE70_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "L1SingleMu18"));
  blist.push_back(utils::getStatus(_tree, name_, "L1SingleMu25"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu10"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu10_NoVertex_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu10_NoVertex_NoBPTX"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu45_NoVertex_3Sta_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu40_NoVertex_3Sta_NoBPTX3BX"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu50"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu23NoVtx_2Cha"));
  blist.push_back(utils::getStatus(_tree, name_, "L2Mu23NoVtx_2Cha_CosmicSeed"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_Eta2p4"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu50"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_NoL2Matched"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_NoL2Matched"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_Eta2p4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu25_TkMu0_Onia"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu30_TkMu0_Psi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu30_TkMu0_Upsilon"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_TkMu0_Phi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu25_TkMu0_Phi"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu15"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu27"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu50"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu55"));
  blist.push_back(utils::getStatus(_tree, name_, "OldMu100"));
  blist.push_back(utils::getStatus(_tree, name_, "TkMu100"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve40"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve60"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve80"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve140"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve200"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve260"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve320"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve400"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve500"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve60_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve80_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve100_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve160_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve220_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "DiPFJetAve300_HFJEC"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet15"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet25"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet40"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet60"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet80"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet140"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet200"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet260"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet320"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet400"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet450"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet500"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet550"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet15"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet25"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet40"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet80"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet140"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet200"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet260"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet320"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet400"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet450"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet500"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJet550"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd15"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd25"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd40"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd80"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd140"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd200"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd260"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd320"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd400"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd450"));
  blist.push_back(utils::getStatus(_tree, name_, "PFJetFwd500"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd15"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd25"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd40"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd60"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd80"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd140"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd200"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd260"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd320"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd400"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd450"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJetFwd500"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT180"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT250"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT370"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT430"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT510"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT590"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT680"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT780"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT890"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT1050"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT500_PFMET100_PFMHT100_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT500_PFMET110_PFMHT110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT700_PFMET85_PFMHT85_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT700_PFMET95_PFMHT95_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT800_PFMET75_PFMHT75_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT800_PFMET85_PFMHT85_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET110_PFMHT110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET120_PFMHT120_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET130_PFMHT130_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET140_PFMHT140_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET120_PFMHT120_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne110_PFMHT110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne130_PFMHT130_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne140_PFMHT140_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu130_PFMHTNoMu130_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu140_PFMHTNoMu140_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "L1ETMHadSeeds"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMHT90"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET80_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET90_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET100_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET110_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET250_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET70_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET80_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET90_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET100_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET250_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET300_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "CaloMET350_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET200_NotCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET200_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET250_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET300_HBHECleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET200_HBHE_BeamHaloCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne200_HBHE_BeamHaloCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "MET105_IsoTrk50"));
  blist.push_back(utils::getStatus(_tree, name_, "MET120_IsoTrk50"));
  blist.push_back(utils::getStatus(_tree, name_, "SingleJet30_Mu12_SinglePFJet40"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets40_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets100_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets200_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets350_CaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon300_NoHE"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19_TrkIsoVVL"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet20_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet40_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet70_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet110_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet170_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4Jet300_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8DiJet170_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8Jet300_Mu5"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet20_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet40_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet70_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet110_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4DiJet170_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK4Jet300_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8DiJet170_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "BTagMu_AK8Jet300_Mu5_noalgo"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_DoublePhoton20"));
  blist.push_back(utils::getStatus(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2"));
  blist.push_back(utils::getStatus(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL"));
  blist.push_back(utils::getStatus(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2"));
  blist.push_back(utils::getStatus(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL"));
  blist.push_back(utils::getStatus(_tree, name_, "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon20"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon33"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon50"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon90"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon120"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon150"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon175"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon200"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon100EB_TightID_TightIso"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon110EB_TightID_TightIso"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon120EB_TightID_TightIso"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon100EBHE10"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon100EEHE10"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon100EE_TightID_TightIso"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon50_R9Id90_HE10_IsoM"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon90_R9Id90_HE10_IsoM"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon120_R9Id90_HE10_IsoM"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon165_R9Id90_HE10_IsoM"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon90_CaloIdL_PFHT700"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon35_TwoProngs35"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_TwoProngs35"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi_L1_NoOS"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing_NoOS"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi_L1_4R_0er1p5R"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Jpsi3p5_Muon2"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_5"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5NoOS"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0M"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_NoVertexing"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_L1_5M"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass_L1_0er1p5R"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass_L1_0er1p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass_L1_4"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass_L1_4R"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_LowMass_L1_TM530"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_Muon_L1_TM0"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon0_Upsilon_Muon_NoL1Mass"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleMu_5_3_3_Mass3p8_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleMu_10_5_5_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleMu_12_10_5"));
  blist.push_back(utils::getStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15"));
  blist.push_back(utils::getStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1"));
  blist.push_back(utils::getStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15"));
  blist.push_back(utils::getStatus(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_DZ_PFMET50_PFMHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_DZ_PFMET70_PFMHT70"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_DZ_PFMET90_PFMHT90"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_Trk_Tau3mu_NoL1Mass"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_Jpsi_Displaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_Jpsi_NoVertexing"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu4_JpsiTrkTrk_Displaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu43NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu48NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu43NoFiltersNoVtx_Photon43_CaloIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu48NoFiltersNoVtx_Photon48_CaloIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu33NoFiltersNoVtxDisplaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu40NoFiltersNoVtxDisplaced"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4EG"));
  blist.push_back(utils::getStatus(_tree, name_, "HT425"));
  blist.push_back(utils::getStatus(_tree, name_, "HT430_DisplacedDijet40_DisplacedTrack"));
  blist.push_back(utils::getStatus(_tree, name_, "HT500_DisplacedDijet40_DisplacedTrack"));
  blist.push_back(utils::getStatus(_tree, name_, "HT430_DisplacedDijet60_DisplacedTrack"));
  blist.push_back(utils::getStatus(_tree, name_, "HT400_DisplacedDijet40_DisplacedTrack"));
  blist.push_back(utils::getStatus(_tree, name_, "HT650_DisplacedDijet60_Inclusive"));
  blist.push_back(utils::getStatus(_tree, name_, "HT550_DisplacedDijet60_Inclusive"));
  blist.push_back(utils::getStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET110"));
  blist.push_back(utils::getStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET120"));
  blist.push_back(utils::getStatus(_tree, name_, "DiJet110_35_Mjj650_PFMET130"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET110"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET120"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET130"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele28_eta2p1_WPTight_Gsf_HT150"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele28_HighEta_SC20_Mass55"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu20_7_Mass0to30_Photon23"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450_PFMET50"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_IsoVVVL_PFHT450"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele50_IsoVVVL_PFHT450"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_IsoVVVL_PFHT600"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450_PFMET50"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu15_IsoVVVL_PFHT450"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu50_IsoVVVL_PFHT450"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu15_IsoVVVL_PFHT600"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon10_PsiPrime_Barrel_Seagulls"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon20_Jpsi_Barrel_Seagulls"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon12_Upsilon_y1p4"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon14_Phi_Barrel_Seagulls"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon18_PsiPrime"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon25_Jpsi"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon18_PsiPrime_noCorrL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon24_Upsilon_noCorrL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon24_Phi_noCorrL1"));
  blist.push_back(utils::getStatus(_tree, name_, "Dimuon25_Jpsi_noCorrL1"));
  blist.push_back(utils::getStatus(_tree, name_, "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8"));
  blist.push_back(utils::getStatus(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleIsoMu20_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "TrkMu12_DoubleTrkMu5NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "TrkMu16_DoubleTrkMu6NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "TrkMu17_DoubleTrkMu8NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu19"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu17_Photon30_IsoCaloId"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele8_CaloIdM_TrackIdM_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele17_CaloIdM_TrackIdM_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele23_CaloIdM_TrackIdM_PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele50_CaloIdVT_GsfTrkIdT_PFJet165"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele115_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele135_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele145_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele200_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele250_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele300_CaloIdVT_GsfTrkIdT"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT400_SixPFJet32"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT450_SixPFJet36"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT350"));
  blist.push_back(utils::getStatus(_tree, name_, "PFHT350MinPFJet15"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15"));
  blist.push_back(utils::getStatus(_tree, name_, "ECALHT800"));
  blist.push_back(utils::getStatus(_tree, name_, "DiSC30_18_EIso_AND_HE_Mass70"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part5"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part6"));
  blist.push_back(utils::getStatus(_tree, name_, "Physics_part7"));
  blist.push_back(utils::getStatus(_tree, name_, "Random"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_Alignment"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part5"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part6"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_part7"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet40"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet50"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet80"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet100"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4CaloJet120"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4PFJet30"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4PFJet50"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4PFJet80"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4PFJet100"));
  blist.push_back(utils::getStatus(_tree, name_, "AK4PFJet120"));
  blist.push_back(utils::getStatus(_tree, name_, "SinglePhoton10_Eta3p1ForPPRef"));
  blist.push_back(utils::getStatus(_tree, name_, "SinglePhoton20_Eta3p1ForPPRef"));
  blist.push_back(utils::getStatus(_tree, name_, "SinglePhoton30_Eta3p1ForPPRef"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon20_HoverELoose"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon30_HoverELoose"));
  blist.push_back(utils::getStatus(_tree, name_, "EcalCalibration"));
  blist.push_back(utils::getStatus(_tree, name_, "HcalCalibration"));
  blist.push_back(utils::getStatus(_tree, name_, "L1UnpairedBunchBptxMinus"));
  blist.push_back(utils::getStatus(_tree, name_, "L1UnpairedBunchBptxPlus"));
  blist.push_back(utils::getStatus(_tree, name_, "L1NotBptxOR"));
  blist.push_back(utils::getStatus(_tree, name_, "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142"));
  blist.push_back(utils::getStatus(_tree, name_, "CDC_L2cosmic_5_er1p0"));
  blist.push_back(utils::getStatus(_tree, name_, "CDC_L2cosmic_5p5_er1p0"));
  blist.push_back(utils::getStatus(_tree, name_, "HcalNZS"));
  blist.push_back(utils::getStatus(_tree, name_, "HcalPhiSym"));
  blist.push_back(utils::getStatus(_tree, name_, "HcalIsolatedbunch"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoTrackHB"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoTrackHE"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_FirstCollisionAfterAbortGap"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_IsolatedBunches"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_FirstCollisionInTrain"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_LastCollisionInTrain"));
  blist.push_back(utils::getStatus(_tree, name_, "ZeroBias_FirstBXAfterTrain"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "Ele16_Ele12_Ele8_CaloIdL_TrackIdL"));
  blist.push_back(utils::getStatus(_tree, name_, "Rsq0p35"));
  blist.push_back(utils::getStatus(_tree, name_, "Rsq0p40"));
  blist.push_back(utils::getStatus(_tree, name_, "RsqMR300_Rsq0p09_MR200"));
  blist.push_back(utils::getStatus(_tree, name_, "RsqMR320_Rsq0p09_MR200"));
  blist.push_back(utils::getStatus(_tree, name_, "RsqMR300_Rsq0p09_MR200_4jet"));
  blist.push_back(utils::getStatus(_tree, name_, "RsqMR320_Rsq0p09_MR200_4jet"));
  blist.push_back(utils::getStatus(_tree, name_, "IsoMu27_MET90"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg"));
  blist.push_back(utils::getStatus(_tree, name_, "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3"));
  blist.push_back(utils::getStatus(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMET100_PFMHT100_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "PFMETTypeOne100_PFMHT100_IDTight_PFHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu18_Mu9_SameSign"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu18_Mu9_SameSign_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu18_Mu9"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu18_Mu9_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_SameSign"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_SameSign_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu20_Mu10_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_Mu12_SameSign"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_Mu12_SameSign_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_Mu12"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu23_Mu12_DZ"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu2_Jpsi_DoubleTkMu0_Phi"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleMu3_DCA_PFMET50_PFMHT60"));
  blist.push_back(utils::getStatus(_tree, name_, "TripleMu_5_3_3_Mass3p8_DCA"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet98_83_71_15"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet103_88_75_15"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet105_88_76_15"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet111_90_80_15"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2"));
  blist.push_back(utils::getStatus(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55"));
  blist.push_back(utils::getStatus(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_IP6_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_IP6_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_IP6_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_IP6_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu12_IP6_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP5_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP5_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP5_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP5_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP5_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7_IP4_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7_IP4_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7_IP4_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7_IP4_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu7_IP4_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP4_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP4_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP4_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP4_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP4_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP5_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP5_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP5_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP5_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP5_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP6_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP6_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP6_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP6_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP6_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP6_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP6_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP6_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP6_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu9_IP6_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP3_part0"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP3_part1"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP3_part2"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP3_part3"));
  blist.push_back(utils::getStatus(_tree, name_, "Mu8_IP3_part4"));
  blist.push_back(utils::getStatus(_tree, name_, "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1"));
  blist.push_back(utils::getStatus(_tree, name_, "TrkMu6NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "TrkMu16NoFiltersNoVtx"));
  blist.push_back(utils::getStatus(_tree, name_, "DoubleTrkMu_16_6_NoFiltersNoVtx"));

  return blist;
}

void
panda::Triggers::doSetAddress_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/, Bool_t _setStatus/* = kTRUE*/)
{
  utils::setAddress(_tree, name_, "AK8PFJet360_TrimMass30", &AK8PFJet360_TrimMass30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet380_TrimMass30", &AK8PFJet380_TrimMass30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet400_TrimMass30", &AK8PFJet400_TrimMass30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet420_TrimMass30", &AK8PFJet420_TrimMass30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFHT750_TrimMass50", &AK8PFHT750_TrimMass50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFHT800_TrimMass50", &AK8PFHT800_TrimMass50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFHT850_TrimMass50", &AK8PFHT850_TrimMass50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFHT900_TrimMass50", &AK8PFHT900_TrimMass50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloJet500_NoJetID", &CaloJet500_NoJetID, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloJet550_NoJetID", &CaloJet550_NoJetID, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", &DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", &DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Trimuon5_3p5_2_Upsilon_Muon", &Trimuon5_3p5_2_Upsilon_Muon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrimuonOpen_5_3p5_2_Upsilon_Muon", &TrimuonOpen_5_3p5_2_Upsilon_Muon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle25_CaloIdL_MW", &DoubleEle25_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle27_CaloIdL_MW", &DoubleEle27_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle33_CaloIdL_MW", &DoubleEle33_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle24_eta2p1_WPTight_Gsf", &DoubleEle24_eta2p1_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", &DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", &DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele27_Ele37_CaloIdL_MW", &Ele27_Ele37_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu27_Ele37_CaloIdL_MW", &Mu27_Ele37_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu37_Ele27_CaloIdL_MW", &Mu37_Ele27_CaloIdL_MW, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu37_TkMu27", &Mu37_TkMu27, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_3_Bs", &DoubleMu4_3_Bs, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_3_Jpsi", &DoubleMu4_3_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_JpsiTrk_Displaced", &DoubleMu4_JpsiTrk_Displaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_LowMassNonResonantTrk_Displaced", &DoubleMu4_LowMassNonResonantTrk_Displaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_Trk_Tau3mu", &DoubleMu3_Trk_Tau3mu, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_TkMu_DsTau3Mu", &DoubleMu3_TkMu_DsTau3Mu, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_PsiPrimeTrk_Displaced", &DoubleMu4_PsiPrimeTrk_Displaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_Mass3p8_DZ_PFHT350", &DoubleMu4_Mass3p8_DZ_PFHT350, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3_PFJet40", &Mu3_PFJet40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_L2Mu2_Jpsi", &Mu7p5_L2Mu2_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_L2Mu2_Upsilon", &Mu7p5_L2Mu2_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track2_Jpsi", &Mu7p5_Track2_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track3p5_Jpsi", &Mu7p5_Track3p5_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track7_Jpsi", &Mu7p5_Track7_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track2_Upsilon", &Mu7p5_Track2_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track3p5_Upsilon", &Mu7p5_Track3p5_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7p5_Track7_Upsilon", &Mu7p5_Track7_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3_L1SingleMu5orSingleMu7", &Mu3_L1SingleMu5orSingleMu7, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePhoton33_CaloIdL", &DoublePhoton33_CaloIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePhoton70", &DoublePhoton70, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePhoton85", &DoublePhoton85, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele20_WPTight_Gsf", &Ele20_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_WPLoose_Gsf", &Ele15_WPLoose_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele17_WPLoose_Gsf", &Ele17_WPLoose_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele20_WPLoose_Gsf", &Ele20_WPLoose_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele20_eta2p1_WPLoose_Gsf", &Ele20_eta2p1_WPLoose_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiEle27_WPTightCaloOnly_L1DoubleEG", &DiEle27_WPTightCaloOnly_L1DoubleEG, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele27_WPTight_Gsf", &Ele27_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele28_WPTight_Gsf", &Ele28_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele30_WPTight_Gsf", &Ele30_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele32_WPTight_Gsf", &Ele32_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele35_WPTight_Gsf", &Ele35_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele35_WPTight_Gsf_L1EGMT", &Ele35_WPTight_Gsf_L1EGMT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele38_WPTight_Gsf", &Ele38_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele40_WPTight_Gsf", &Ele40_WPTight_Gsf, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele32_WPTight_Gsf_L1DoubleEG", &Ele32_WPTight_Gsf_L1DoubleEG, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", &Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", &Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", &Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT450_Beamspot", &HT450_Beamspot, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT300_Beamspot", &HT300_Beamspot, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_Beamspot", &ZeroBias_Beamspot, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", &IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", &IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", &IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu20", &IsoMu20, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24", &IsoMu24, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1", &IsoMu24_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu27", &IsoMu27, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu30", &IsoMu30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "UncorrectedJetE30_NoBPTX", &UncorrectedJetE30_NoBPTX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "UncorrectedJetE30_NoBPTX3BX", &UncorrectedJetE30_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "UncorrectedJetE60_NoBPTX3BX", &UncorrectedJetE60_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "UncorrectedJetE70_NoBPTX3BX", &UncorrectedJetE70_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1SingleMu18", &L1SingleMu18, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1SingleMu25", &L1SingleMu25, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu10", &L2Mu10, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu10_NoVertex_NoBPTX3BX", &L2Mu10_NoVertex_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu10_NoVertex_NoBPTX", &L2Mu10_NoVertex_NoBPTX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu45_NoVertex_3Sta_NoBPTX3BX", &L2Mu45_NoVertex_3Sta_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu40_NoVertex_3Sta_NoBPTX3BX", &L2Mu40_NoVertex_3Sta_NoBPTX3BX, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu50", &L2Mu50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu23NoVtx_2Cha", &L2Mu23NoVtx_2Cha, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L2Mu23NoVtx_2Cha_CosmicSeed", &L2Mu23NoVtx_2Cha_CosmicSeed, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", &DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_Eta2p4", &DoubleL2Mu30NoVtx_2Cha_Eta2p4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu50", &DoubleL2Mu50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed", &DoubleL2Mu23NoVtx_2Cha_CosmicSeed, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", &DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed", &DoubleL2Mu25NoVtx_2Cha_CosmicSeed, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", &DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", &DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu23NoVtx_2Cha", &DoubleL2Mu23NoVtx_2Cha, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_NoL2Matched", &DoubleL2Mu23NoVtx_2Cha_NoL2Matched, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha", &DoubleL2Mu25NoVtx_2Cha, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_NoL2Matched", &DoubleL2Mu25NoVtx_2Cha_NoL2Matched, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_Eta2p4", &DoubleL2Mu25NoVtx_2Cha_Eta2p4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu25_TkMu0_Onia", &Mu25_TkMu0_Onia, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu30_TkMu0_Psi", &Mu30_TkMu0_Psi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu30_TkMu0_Upsilon", &Mu30_TkMu0_Upsilon, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_TkMu0_Phi", &Mu20_TkMu0_Phi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu25_TkMu0_Phi", &Mu25_TkMu0_Phi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12", &Mu12, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu15", &Mu15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20", &Mu20, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu27", &Mu27, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu50", &Mu50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu55", &Mu55, _branches, _setStatus);
  utils::setAddress(_tree, name_, "OldMu100", &OldMu100, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TkMu100", &TkMu100, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve40", &DiPFJetAve40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve60", &DiPFJetAve60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve80", &DiPFJetAve80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve140", &DiPFJetAve140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve200", &DiPFJetAve200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve260", &DiPFJetAve260, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve320", &DiPFJetAve320, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve400", &DiPFJetAve400, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve500", &DiPFJetAve500, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve60_HFJEC", &DiPFJetAve60_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve80_HFJEC", &DiPFJetAve80_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve100_HFJEC", &DiPFJetAve100_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve160_HFJEC", &DiPFJetAve160_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve220_HFJEC", &DiPFJetAve220_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiPFJetAve300_HFJEC", &DiPFJetAve300_HFJEC, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet15", &AK8PFJet15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet25", &AK8PFJet25, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet40", &AK8PFJet40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet60", &AK8PFJet60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet80", &AK8PFJet80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet140", &AK8PFJet140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet200", &AK8PFJet200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet260", &AK8PFJet260, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet320", &AK8PFJet320, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet400", &AK8PFJet400, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet450", &AK8PFJet450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet500", &AK8PFJet500, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet550", &AK8PFJet550, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet15", &PFJet15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet25", &PFJet25, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet40", &PFJet40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet60", &PFJet60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet80", &PFJet80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet140", &PFJet140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet200", &PFJet200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet260", &PFJet260, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet320", &PFJet320, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet400", &PFJet400, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet450", &PFJet450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet500", &PFJet500, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJet550", &PFJet550, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd15", &PFJetFwd15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd25", &PFJetFwd25, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd40", &PFJetFwd40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd60", &PFJetFwd60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd80", &PFJetFwd80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd140", &PFJetFwd140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd200", &PFJetFwd200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd260", &PFJetFwd260, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd320", &PFJetFwd320, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd400", &PFJetFwd400, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd450", &PFJetFwd450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFJetFwd500", &PFJetFwd500, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd15", &AK8PFJetFwd15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd25", &AK8PFJetFwd25, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd40", &AK8PFJetFwd40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd60", &AK8PFJetFwd60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd80", &AK8PFJetFwd80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd140", &AK8PFJetFwd140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd200", &AK8PFJetFwd200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd260", &AK8PFJetFwd260, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd320", &AK8PFJetFwd320, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd400", &AK8PFJetFwd400, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd450", &AK8PFJetFwd450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJetFwd500", &AK8PFJetFwd500, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT180", &PFHT180, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT250", &PFHT250, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT370", &PFHT370, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT430", &PFHT430, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT510", &PFHT510, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT590", &PFHT590, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT680", &PFHT680, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT780", &PFHT780, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT890", &PFHT890, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT1050", &PFHT1050, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT500_PFMET100_PFMHT100_IDTight", &PFHT500_PFMET100_PFMHT100_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT500_PFMET110_PFMHT110_IDTight", &PFHT500_PFMET110_PFMHT110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT700_PFMET85_PFMHT85_IDTight", &PFHT700_PFMET85_PFMHT85_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT700_PFMET95_PFMHT95_IDTight", &PFHT700_PFMET95_PFMHT95_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT800_PFMET75_PFMHT75_IDTight", &PFHT800_PFMET75_PFMHT75_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT800_PFMET85_PFMHT85_IDTight", &PFHT800_PFMET85_PFMHT85_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET110_PFMHT110_IDTight", &PFMET110_PFMHT110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET120_PFMHT120_IDTight", &PFMET120_PFMHT120_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET130_PFMHT130_IDTight", &PFMET130_PFMHT130_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET140_PFMHT140_IDTight", &PFMET140_PFMHT140_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", &PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", &PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", &PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", &PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", &PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET120_PFMHT120_IDTight_PFHT60", &PFMET120_PFMHT120_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", &PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight_PFHT60", &PFMETTypeOne120_PFMHT120_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne110_PFMHT110_IDTight", &PFMETTypeOne110_PFMHT110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight", &PFMETTypeOne120_PFMHT120_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne130_PFMHT130_IDTight", &PFMETTypeOne130_PFMHT130_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne140_PFMHT140_IDTight", &PFMETTypeOne140_PFMHT140_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", &PFMETNoMu110_PFMHTNoMu110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", &PFMETNoMu120_PFMHTNoMu120_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu130_PFMHTNoMu130_IDTight", &PFMETNoMu130_PFMHTNoMu130_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu140_PFMHTNoMu140_IDTight", &PFMETNoMu140_PFMHTNoMu140_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", &MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", &MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", &MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1ETMHadSeeds", &L1ETMHadSeeds, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMHT90", &CaloMHT90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET80_NotCleaned", &CaloMET80_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET90_NotCleaned", &CaloMET90_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET100_NotCleaned", &CaloMET100_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET110_NotCleaned", &CaloMET110_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET250_NotCleaned", &CaloMET250_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET70_HBHECleaned", &CaloMET70_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET80_HBHECleaned", &CaloMET80_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET90_HBHECleaned", &CaloMET90_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET100_HBHECleaned", &CaloMET100_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET250_HBHECleaned", &CaloMET250_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET300_HBHECleaned", &CaloMET300_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CaloMET350_HBHECleaned", &CaloMET350_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET200_NotCleaned", &PFMET200_NotCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET200_HBHECleaned", &PFMET200_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET250_HBHECleaned", &PFMET250_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET300_HBHECleaned", &PFMET300_HBHECleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET200_HBHE_BeamHaloCleaned", &PFMET200_HBHE_BeamHaloCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne200_HBHE_BeamHaloCleaned", &PFMETTypeOne200_HBHE_BeamHaloCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MET105_IsoTrk50", &MET105_IsoTrk50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MET120_IsoTrk50", &MET120_IsoTrk50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "SingleJet30_Mu12_SinglePFJet40", &SingleJet30_Mu12_SinglePFJet40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", &Mu12_DoublePFJets40_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", &Mu12_DoublePFJets100_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", &Mu12_DoublePFJets200_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", &Mu12_DoublePFJets350_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets40_CaloBTagDeepCSV_p71", &DoublePFJets40_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets100_CaloBTagDeepCSV_p71", &DoublePFJets100_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets200_CaloBTagDeepCSV_p71", &DoublePFJets200_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets350_CaloBTagDeepCSV_p71", &DoublePFJets350_CaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon300_NoHE", &Photon300_NoHE, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL", &Mu8_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL_DZ", &Mu8_DiEle12_CaloIdL_TrackIdL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL", &Mu8_DiEle12_CaloIdL_TrackIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", &Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", &Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_TrkIsoVVL", &Mu17_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19_TrkIsoVVL", &Mu19_TrkIsoVVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet20_Mu5", &BTagMu_AK4DiJet20_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet40_Mu5", &BTagMu_AK4DiJet40_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet70_Mu5", &BTagMu_AK4DiJet70_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet110_Mu5", &BTagMu_AK4DiJet110_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet170_Mu5", &BTagMu_AK4DiJet170_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4Jet300_Mu5", &BTagMu_AK4Jet300_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8DiJet170_Mu5", &BTagMu_AK8DiJet170_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5", &BTagMu_AK8Jet170_DoubleMu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8Jet300_Mu5", &BTagMu_AK8Jet300_Mu5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet20_Mu5_noalgo", &BTagMu_AK4DiJet20_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet40_Mu5_noalgo", &BTagMu_AK4DiJet40_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet70_Mu5_noalgo", &BTagMu_AK4DiJet70_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet110_Mu5_noalgo", &BTagMu_AK4DiJet110_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4DiJet170_Mu5_noalgo", &BTagMu_AK4DiJet170_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK4Jet300_Mu5_noalgo", &BTagMu_AK4Jet300_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8DiJet170_Mu5_noalgo", &BTagMu_AK8DiJet170_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5_noalgo", &BTagMu_AK8Jet170_DoubleMu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "BTagMu_AK8Jet300_Mu5_noalgo", &BTagMu_AK8Jet300_Mu5_noalgo, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", &Ele15_Ele8_CaloIdL_TrackIdL_IsoVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_DoublePhoton20", &Mu12_DoublePhoton20, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2", &TriplePhoton_20_20_20_CaloIdLV2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", &TriplePhoton_20_20_20_CaloIdLV2_R9IdVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2", &TriplePhoton_30_30_10_CaloIdLV2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", &TriplePhoton_30_30_10_CaloIdLV2_R9IdVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", &TriplePhoton_35_35_5_CaloIdLV2_R9IdVL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon20", &Photon20, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon33", &Photon33, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon50", &Photon50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75", &Photon75, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon90", &Photon90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon120", &Photon120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon150", &Photon150, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon175", &Photon175, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon200", &Photon200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon100EB_TightID_TightIso", &Photon100EB_TightID_TightIso, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon110EB_TightID_TightIso", &Photon110EB_TightID_TightIso, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon120EB_TightID_TightIso", &Photon120EB_TightID_TightIso, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon100EBHE10", &Photon100EBHE10, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon100EEHE10", &Photon100EEHE10, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon100EE_TightID_TightIso", &Photon100EE_TightID_TightIso, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon50_R9Id90_HE10_IsoM", &Photon50_R9Id90_HE10_IsoM, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75_R9Id90_HE10_IsoM", &Photon75_R9Id90_HE10_IsoM, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", &Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", &Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon90_R9Id90_HE10_IsoM", &Photon90_R9Id90_HE10_IsoM, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon120_R9Id90_HE10_IsoM", &Photon120_R9Id90_HE10_IsoM, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon165_R9Id90_HE10_IsoM", &Photon165_R9Id90_HE10_IsoM, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon90_CaloIdL_PFHT700", &Photon90_CaloIdL_PFHT700, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", &Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", &Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", &Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", &Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon35_TwoProngs35", &Photon35_TwoProngs35, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_TwoProngs35", &IsoMu24_TwoProngs35, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi_L1_NoOS", &Dimuon0_Jpsi_L1_NoOS, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi_NoVertexing_NoOS", &Dimuon0_Jpsi_NoVertexing_NoOS, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi", &Dimuon0_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi_NoVertexing", &Dimuon0_Jpsi_NoVertexing, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi_L1_4R_0er1p5R", &Dimuon0_Jpsi_L1_4R_0er1p5R, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", &Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Jpsi3p5_Muon2", &Dimuon0_Jpsi3p5_Muon2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_4p5", &Dimuon0_Upsilon_L1_4p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_5", &Dimuon0_Upsilon_L1_5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_4p5NoOS", &Dimuon0_Upsilon_L1_4p5NoOS, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0", &Dimuon0_Upsilon_L1_4p5er2p0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0M", &Dimuon0_Upsilon_L1_4p5er2p0M, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_NoVertexing", &Dimuon0_Upsilon_NoVertexing, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_L1_5M", &Dimuon0_Upsilon_L1_5M, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass_L1_0er1p5R", &Dimuon0_LowMass_L1_0er1p5R, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass_L1_0er1p5", &Dimuon0_LowMass_L1_0er1p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass", &Dimuon0_LowMass, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass_L1_4", &Dimuon0_LowMass_L1_4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass_L1_4R", &Dimuon0_LowMass_L1_4R, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_LowMass_L1_TM530", &Dimuon0_LowMass_L1_TM530, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_Muon_L1_TM0", &Dimuon0_Upsilon_Muon_L1_TM0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon0_Upsilon_Muon_NoL1Mass", &Dimuon0_Upsilon_Muon_NoL1Mass, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleMu_5_3_3_Mass3p8_DZ", &TripleMu_5_3_3_Mass3p8_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleMu_10_5_5_DZ", &TripleMu_10_5_5_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleMu_12_10_5", &TripleMu_12_10_5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15", &Tau3Mu_Mu7_Mu1_TkMu1_Tau15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", &Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", &Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", &Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_DZ_PFMET50_PFMHT60", &DoubleMu3_DZ_PFMET50_PFMHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_DZ_PFMET70_PFMHT70", &DoubleMu3_DZ_PFMET70_PFMHT70, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_DZ_PFMET90_PFMHT90", &DoubleMu3_DZ_PFMET90_PFMHT90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_Trk_Tau3mu_NoL1Mass", &DoubleMu3_Trk_Tau3mu_NoL1Mass, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_Jpsi_Displaced", &DoubleMu4_Jpsi_Displaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_Jpsi_NoVertexing", &DoubleMu4_Jpsi_NoVertexing, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu4_JpsiTrkTrk_Displaced", &DoubleMu4_JpsiTrkTrk_Displaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu43NoFiltersNoVtx", &DoubleMu43NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu48NoFiltersNoVtx", &DoubleMu48NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu43NoFiltersNoVtx_Photon43_CaloIdL", &Mu43NoFiltersNoVtx_Photon43_CaloIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu48NoFiltersNoVtx_Photon48_CaloIdL", &Mu48NoFiltersNoVtx_Photon48_CaloIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", &Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", &Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu33NoFiltersNoVtxDisplaced", &DoubleMu33NoFiltersNoVtxDisplaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu40NoFiltersNoVtxDisplaced", &DoubleMu40NoFiltersNoVtxDisplaced, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4", &DoubleMu20_7_Mass0to30_L1_DM4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4EG", &DoubleMu20_7_Mass0to30_L1_DM4EG, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT425", &HT425, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT430_DisplacedDijet40_DisplacedTrack", &HT430_DisplacedDijet40_DisplacedTrack, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT500_DisplacedDijet40_DisplacedTrack", &HT500_DisplacedDijet40_DisplacedTrack, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT430_DisplacedDijet60_DisplacedTrack", &HT430_DisplacedDijet60_DisplacedTrack, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT400_DisplacedDijet40_DisplacedTrack", &HT400_DisplacedDijet40_DisplacedTrack, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT650_DisplacedDijet60_Inclusive", &HT650_DisplacedDijet60_Inclusive, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HT550_DisplacedDijet60_Inclusive", &HT550_DisplacedDijet60_Inclusive, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiJet110_35_Mjj650_PFMET110", &DiJet110_35_Mjj650_PFMET110, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiJet110_35_Mjj650_PFMET120", &DiJet110_35_Mjj650_PFMET120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiJet110_35_Mjj650_PFMET130", &DiJet110_35_Mjj650_PFMET130, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET110", &TripleJet110_35_35_Mjj650_PFMET110, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET120", &TripleJet110_35_35_Mjj650_PFMET120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET130", &TripleJet110_35_35_Mjj650_PFMET130, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", &Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele28_eta2p1_WPTight_Gsf_HT150", &Ele28_eta2p1_WPTight_Gsf_HT150, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele28_HighEta_SC20_Mass55", &Ele28_HighEta_SC20_Mass55, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu20_7_Mass0to30_Photon23", &DoubleMu20_7_Mass0to30_Photon23, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_IsoVVVL_PFHT450_PFMET50", &Ele15_IsoVVVL_PFHT450_PFMET50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_IsoVVVL_PFHT450", &Ele15_IsoVVVL_PFHT450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele50_IsoVVVL_PFHT450", &Ele50_IsoVVVL_PFHT450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_IsoVVVL_PFHT600", &Ele15_IsoVVVL_PFHT600, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", &Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu15_IsoVVVL_PFHT450_PFMET50", &Mu15_IsoVVVL_PFHT450_PFMET50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu15_IsoVVVL_PFHT450", &Mu15_IsoVVVL_PFHT450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu50_IsoVVVL_PFHT450", &Mu50_IsoVVVL_PFHT450, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu15_IsoVVVL_PFHT600", &Mu15_IsoVVVL_PFHT600, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", &Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", &Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", &Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", &Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", &Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", &Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", &Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", &Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon10_PsiPrime_Barrel_Seagulls", &Dimuon10_PsiPrime_Barrel_Seagulls, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon20_Jpsi_Barrel_Seagulls", &Dimuon20_Jpsi_Barrel_Seagulls, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon12_Upsilon_y1p4", &Dimuon12_Upsilon_y1p4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon14_Phi_Barrel_Seagulls", &Dimuon14_Phi_Barrel_Seagulls, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon18_PsiPrime", &Dimuon18_PsiPrime, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon25_Jpsi", &Dimuon25_Jpsi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon18_PsiPrime_noCorrL1", &Dimuon18_PsiPrime_noCorrL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon24_Upsilon_noCorrL1", &Dimuon24_Upsilon_noCorrL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon24_Phi_noCorrL1", &Dimuon24_Phi_noCorrL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Dimuon25_Jpsi_noCorrL1", &Dimuon25_Jpsi_noCorrL1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", &DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL_DZ", &DiMu9_Ele9_CaloIdL_TrackIdL_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL", &DiMu9_Ele9_CaloIdL_TrackIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleIsoMu20_eta2p1", &DoubleIsoMu20_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrkMu12_DoubleTrkMu5NoFiltersNoVtx", &TrkMu12_DoubleTrkMu5NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrkMu16_DoubleTrkMu6NoFiltersNoVtx", &TrkMu16_DoubleTrkMu6NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrkMu17_DoubleTrkMu8NoFiltersNoVtx", &TrkMu17_DoubleTrkMu8NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8", &Mu8, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17", &Mu17, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu19", &Mu19, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu17_Photon30_IsoCaloId", &Mu17_Photon30_IsoCaloId, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", &Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", &Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", &Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", &Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele8_CaloIdM_TrackIdM_PFJet30", &Ele8_CaloIdM_TrackIdM_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele17_CaloIdM_TrackIdM_PFJet30", &Ele17_CaloIdM_TrackIdM_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele23_CaloIdM_TrackIdM_PFJet30", &Ele23_CaloIdM_TrackIdM_PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele50_CaloIdVT_GsfTrkIdT_PFJet165", &Ele50_CaloIdVT_GsfTrkIdT_PFJet165, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele115_CaloIdVT_GsfTrkIdT", &Ele115_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele135_CaloIdVT_GsfTrkIdT", &Ele135_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele145_CaloIdVT_GsfTrkIdT", &Ele145_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele200_CaloIdVT_GsfTrkIdT", &Ele200_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele250_CaloIdVT_GsfTrkIdT", &Ele250_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele300_CaloIdVT_GsfTrkIdT", &Ele300_CaloIdVT_GsfTrkIdT, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", &PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40", &PFHT330PT30_QuadPFJet_75_60_45_40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", &PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT400_SixPFJet32", &PFHT400_SixPFJet32, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", &PFHT450_SixPFJet36_PFBTagDeepCSV_1p59, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT450_SixPFJet36", &PFHT450_SixPFJet36, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT350", &PFHT350, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFHT350MinPFJet15", &PFHT350MinPFJet15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL", &Photon60_R9Id90_CaloIdL_IsoL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", &Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", &Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ECALHT800", &ECALHT800, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DiSC30_18_EIso_AND_HE_Mass70", &DiSC30_18_EIso_AND_HE_Mass70, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics", &Physics, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part0", &Physics_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part1", &Physics_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part2", &Physics_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part3", &Physics_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part4", &Physics_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part5", &Physics_part5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part6", &Physics_part6, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Physics_part7", &Physics_part7, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Random", &Random, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias", &ZeroBias, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_Alignment", &ZeroBias_Alignment, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part0", &ZeroBias_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part1", &ZeroBias_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part2", &ZeroBias_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part3", &ZeroBias_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part4", &ZeroBias_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part5", &ZeroBias_part5, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part6", &ZeroBias_part6, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_part7", &ZeroBias_part7, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet30", &AK4CaloJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet40", &AK4CaloJet40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet50", &AK4CaloJet50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet80", &AK4CaloJet80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet100", &AK4CaloJet100, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4CaloJet120", &AK4CaloJet120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4PFJet30", &AK4PFJet30, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4PFJet50", &AK4PFJet50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4PFJet80", &AK4PFJet80, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4PFJet100", &AK4PFJet100, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK4PFJet120", &AK4PFJet120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "SinglePhoton10_Eta3p1ForPPRef", &SinglePhoton10_Eta3p1ForPPRef, _branches, _setStatus);
  utils::setAddress(_tree, name_, "SinglePhoton20_Eta3p1ForPPRef", &SinglePhoton20_Eta3p1ForPPRef, _branches, _setStatus);
  utils::setAddress(_tree, name_, "SinglePhoton30_Eta3p1ForPPRef", &SinglePhoton30_Eta3p1ForPPRef, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon20_HoverELoose", &Photon20_HoverELoose, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon30_HoverELoose", &Photon30_HoverELoose, _branches, _setStatus);
  utils::setAddress(_tree, name_, "EcalCalibration", &EcalCalibration, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HcalCalibration", &HcalCalibration, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1UnpairedBunchBptxMinus", &L1UnpairedBunchBptxMinus, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1UnpairedBunchBptxPlus", &L1UnpairedBunchBptxPlus, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1NotBptxOR", &L1NotBptxOR, _branches, _setStatus);
  utils::setAddress(_tree, name_, "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CDC_L2cosmic_5_er1p0", &CDC_L2cosmic_5_er1p0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "CDC_L2cosmic_5p5_er1p0", &CDC_L2cosmic_5p5_er1p0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HcalNZS", &HcalNZS, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HcalPhiSym", &HcalPhiSym, _branches, _setStatus);
  utils::setAddress(_tree, name_, "HcalIsolatedbunch", &HcalIsolatedbunch, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoTrackHB", &IsoTrackHB, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoTrackHE", &IsoTrackHE, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_FirstCollisionAfterAbortGap", &ZeroBias_FirstCollisionAfterAbortGap, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_IsolatedBunches", &ZeroBias_IsolatedBunches, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_FirstCollisionInTrain", &ZeroBias_FirstCollisionInTrain, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_LastCollisionInTrain", &ZeroBias_LastCollisionInTrain, _branches, _setStatus);
  utils::setAddress(_tree, name_, "ZeroBias_FirstBXAfterTrain", &ZeroBias_FirstBXAfterTrain, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", &MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", &MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", &MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", &MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &Ele16_Ele12_Ele8_CaloIdL_TrackIdL, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Rsq0p35", &Rsq0p35, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Rsq0p40", &Rsq0p40, _branches, _setStatus);
  utils::setAddress(_tree, name_, "RsqMR300_Rsq0p09_MR200", &RsqMR300_Rsq0p09_MR200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "RsqMR320_Rsq0p09_MR200", &RsqMR320_Rsq0p09_MR200, _branches, _setStatus);
  utils::setAddress(_tree, name_, "RsqMR300_Rsq0p09_MR200_4jet", &RsqMR300_Rsq0p09_MR200_4jet, _branches, _setStatus);
  utils::setAddress(_tree, name_, "RsqMR320_Rsq0p09_MR200_4jet", &RsqMR320_Rsq0p09_MR200_4jet, _branches, _setStatus);
  utils::setAddress(_tree, name_, "IsoMu27_MET90", &IsoMu27_MET90, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, _branches, _setStatus);
  utils::setAddress(_tree, name_, "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", &VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", &VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", &VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", &Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", &Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", &Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMET100_PFMHT100_IDTight_PFHT60", &PFMET100_PFMHT100_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", &PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "PFMETTypeOne100_PFMHT100_IDTight_PFHT60", &PFMETTypeOne100_PFMHT100_IDTight_PFHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu18_Mu9_SameSign", &Mu18_Mu9_SameSign, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu18_Mu9_SameSign_DZ", &Mu18_Mu9_SameSign_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu18_Mu9", &Mu18_Mu9, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu18_Mu9_DZ", &Mu18_Mu9_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_SameSign", &Mu20_Mu10_SameSign, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_SameSign_DZ", &Mu20_Mu10_SameSign_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10", &Mu20_Mu10, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu20_Mu10_DZ", &Mu20_Mu10_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_Mu12_SameSign", &Mu23_Mu12_SameSign, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_Mu12_SameSign_DZ", &Mu23_Mu12_SameSign_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_Mu12", &Mu23_Mu12, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu23_Mu12_DZ", &Mu23_Mu12_DZ, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", &DoubleMu2_Jpsi_DoubleTrk1_Phi1p05, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu2_Jpsi_DoubleTkMu0_Phi", &DoubleMu2_Jpsi_DoubleTkMu0_Phi, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleMu3_DCA_PFMET50_PFMHT60", &DoubleMu3_DCA_PFMET50_PFMHT60, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TripleMu_5_3_3_Mass3p8_DCA", &TripleMu_5_3_3_Mass3p8_DCA, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", &QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", &QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", &QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", &QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet98_83_71_15", &QuadPFJet98_83_71_15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet103_88_75_15", &QuadPFJet103_88_75_15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet105_88_76_15", &QuadPFJet105_88_76_15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet111_90_80_15", &QuadPFJet111_90_80_15, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", &AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", &AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", &Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", &Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_IP6_part0", &Mu12_IP6_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_IP6_part1", &Mu12_IP6_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_IP6_part2", &Mu12_IP6_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_IP6_part3", &Mu12_IP6_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu12_IP6_part4", &Mu12_IP6_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP5_part0", &Mu9_IP5_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP5_part1", &Mu9_IP5_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP5_part2", &Mu9_IP5_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP5_part3", &Mu9_IP5_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP5_part4", &Mu9_IP5_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7_IP4_part0", &Mu7_IP4_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7_IP4_part1", &Mu7_IP4_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7_IP4_part2", &Mu7_IP4_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7_IP4_part3", &Mu7_IP4_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu7_IP4_part4", &Mu7_IP4_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP4_part0", &Mu9_IP4_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP4_part1", &Mu9_IP4_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP4_part2", &Mu9_IP4_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP4_part3", &Mu9_IP4_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP4_part4", &Mu9_IP4_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP5_part0", &Mu8_IP5_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP5_part1", &Mu8_IP5_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP5_part2", &Mu8_IP5_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP5_part3", &Mu8_IP5_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP5_part4", &Mu8_IP5_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP6_part0", &Mu8_IP6_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP6_part1", &Mu8_IP6_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP6_part2", &Mu8_IP6_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP6_part3", &Mu8_IP6_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP6_part4", &Mu8_IP6_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP6_part0", &Mu9_IP6_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP6_part1", &Mu9_IP6_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP6_part2", &Mu9_IP6_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP6_part3", &Mu9_IP6_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu9_IP6_part4", &Mu9_IP6_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP3_part0", &Mu8_IP3_part0, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP3_part1", &Mu8_IP3_part1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP3_part2", &Mu8_IP3_part2, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP3_part3", &Mu8_IP3_part3, _branches, _setStatus);
  utils::setAddress(_tree, name_, "Mu8_IP3_part4", &Mu8_IP3_part4, _branches, _setStatus);
  utils::setAddress(_tree, name_, "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrkMu6NoFiltersNoVtx", &TrkMu6NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "TrkMu16NoFiltersNoVtx", &TrkMu16NoFiltersNoVtx, _branches, _setStatus);
  utils::setAddress(_tree, name_, "DoubleTrkMu_16_6_NoFiltersNoVtx", &DoubleTrkMu_16_6_NoFiltersNoVtx, _branches, _setStatus);
}

void
panda::Triggers::doBook_(TTree& _tree, utils::BranchList const& _branches/* = {"*"}*/)
{
  utils::book(_tree, name_, "AK8PFJet360_TrimMass30", "", 'O', &AK8PFJet360_TrimMass30, _branches);
  utils::book(_tree, name_, "AK8PFJet380_TrimMass30", "", 'O', &AK8PFJet380_TrimMass30, _branches);
  utils::book(_tree, name_, "AK8PFJet400_TrimMass30", "", 'O', &AK8PFJet400_TrimMass30, _branches);
  utils::book(_tree, name_, "AK8PFJet420_TrimMass30", "", 'O', &AK8PFJet420_TrimMass30, _branches);
  utils::book(_tree, name_, "AK8PFHT750_TrimMass50", "", 'O', &AK8PFHT750_TrimMass50, _branches);
  utils::book(_tree, name_, "AK8PFHT800_TrimMass50", "", 'O', &AK8PFHT800_TrimMass50, _branches);
  utils::book(_tree, name_, "AK8PFHT850_TrimMass50", "", 'O', &AK8PFHT850_TrimMass50, _branches);
  utils::book(_tree, name_, "AK8PFHT900_TrimMass50", "", 'O', &AK8PFHT900_TrimMass50, _branches);
  utils::book(_tree, name_, "CaloJet500_NoJetID", "", 'O', &CaloJet500_NoJetID, _branches);
  utils::book(_tree, name_, "CaloJet550_NoJetID", "", 'O', &CaloJet550_NoJetID, _branches);
  utils::book(_tree, name_, "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", "", 'O', &DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL, _branches);
  utils::book(_tree, name_, "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", "", 'O', &DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon, _branches);
  utils::book(_tree, name_, "Trimuon5_3p5_2_Upsilon_Muon", "", 'O', &Trimuon5_3p5_2_Upsilon_Muon, _branches);
  utils::book(_tree, name_, "TrimuonOpen_5_3p5_2_Upsilon_Muon", "", 'O', &TrimuonOpen_5_3p5_2_Upsilon_Muon, _branches);
  utils::book(_tree, name_, "DoubleEle25_CaloIdL_MW", "", 'O', &DoubleEle25_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "DoubleEle27_CaloIdL_MW", "", 'O', &DoubleEle27_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "DoubleEle33_CaloIdL_MW", "", 'O', &DoubleEle33_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "DoubleEle24_eta2p1_WPTight_Gsf", "", 'O', &DoubleEle24_eta2p1_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", "", 'O', &DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350, _branches);
  utils::book(_tree, name_, "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", "", 'O', &DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350, _branches);
  utils::book(_tree, name_, "Ele27_Ele37_CaloIdL_MW", "", 'O', &Ele27_Ele37_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "Mu27_Ele37_CaloIdL_MW", "", 'O', &Mu27_Ele37_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "Mu37_Ele27_CaloIdL_MW", "", 'O', &Mu37_Ele27_CaloIdL_MW, _branches);
  utils::book(_tree, name_, "Mu37_TkMu27", "", 'O', &Mu37_TkMu27, _branches);
  utils::book(_tree, name_, "DoubleMu4_3_Bs", "", 'O', &DoubleMu4_3_Bs, _branches);
  utils::book(_tree, name_, "DoubleMu4_3_Jpsi", "", 'O', &DoubleMu4_3_Jpsi, _branches);
  utils::book(_tree, name_, "DoubleMu4_JpsiTrk_Displaced", "", 'O', &DoubleMu4_JpsiTrk_Displaced, _branches);
  utils::book(_tree, name_, "DoubleMu4_LowMassNonResonantTrk_Displaced", "", 'O', &DoubleMu4_LowMassNonResonantTrk_Displaced, _branches);
  utils::book(_tree, name_, "DoubleMu3_Trk_Tau3mu", "", 'O', &DoubleMu3_Trk_Tau3mu, _branches);
  utils::book(_tree, name_, "DoubleMu3_TkMu_DsTau3Mu", "", 'O', &DoubleMu3_TkMu_DsTau3Mu, _branches);
  utils::book(_tree, name_, "DoubleMu4_PsiPrimeTrk_Displaced", "", 'O', &DoubleMu4_PsiPrimeTrk_Displaced, _branches);
  utils::book(_tree, name_, "DoubleMu4_Mass3p8_DZ_PFHT350", "", 'O', &DoubleMu4_Mass3p8_DZ_PFHT350, _branches);
  utils::book(_tree, name_, "Mu3_PFJet40", "", 'O', &Mu3_PFJet40, _branches);
  utils::book(_tree, name_, "Mu7p5_L2Mu2_Jpsi", "", 'O', &Mu7p5_L2Mu2_Jpsi, _branches);
  utils::book(_tree, name_, "Mu7p5_L2Mu2_Upsilon", "", 'O', &Mu7p5_L2Mu2_Upsilon, _branches);
  utils::book(_tree, name_, "Mu7p5_Track2_Jpsi", "", 'O', &Mu7p5_Track2_Jpsi, _branches);
  utils::book(_tree, name_, "Mu7p5_Track3p5_Jpsi", "", 'O', &Mu7p5_Track3p5_Jpsi, _branches);
  utils::book(_tree, name_, "Mu7p5_Track7_Jpsi", "", 'O', &Mu7p5_Track7_Jpsi, _branches);
  utils::book(_tree, name_, "Mu7p5_Track2_Upsilon", "", 'O', &Mu7p5_Track2_Upsilon, _branches);
  utils::book(_tree, name_, "Mu7p5_Track3p5_Upsilon", "", 'O', &Mu7p5_Track3p5_Upsilon, _branches);
  utils::book(_tree, name_, "Mu7p5_Track7_Upsilon", "", 'O', &Mu7p5_Track7_Upsilon, _branches);
  utils::book(_tree, name_, "Mu3_L1SingleMu5orSingleMu7", "", 'O', &Mu3_L1SingleMu5orSingleMu7, _branches);
  utils::book(_tree, name_, "DoublePhoton33_CaloIdL", "", 'O', &DoublePhoton33_CaloIdL, _branches);
  utils::book(_tree, name_, "DoublePhoton70", "", 'O', &DoublePhoton70, _branches);
  utils::book(_tree, name_, "DoublePhoton85", "", 'O', &DoublePhoton85, _branches);
  utils::book(_tree, name_, "Ele20_WPTight_Gsf", "", 'O', &Ele20_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele15_WPLoose_Gsf", "", 'O', &Ele15_WPLoose_Gsf, _branches);
  utils::book(_tree, name_, "Ele17_WPLoose_Gsf", "", 'O', &Ele17_WPLoose_Gsf, _branches);
  utils::book(_tree, name_, "Ele20_WPLoose_Gsf", "", 'O', &Ele20_WPLoose_Gsf, _branches);
  utils::book(_tree, name_, "Ele20_eta2p1_WPLoose_Gsf", "", 'O', &Ele20_eta2p1_WPLoose_Gsf, _branches);
  utils::book(_tree, name_, "DiEle27_WPTightCaloOnly_L1DoubleEG", "", 'O', &DiEle27_WPTightCaloOnly_L1DoubleEG, _branches);
  utils::book(_tree, name_, "Ele27_WPTight_Gsf", "", 'O', &Ele27_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele28_WPTight_Gsf", "", 'O', &Ele28_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele30_WPTight_Gsf", "", 'O', &Ele30_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele32_WPTight_Gsf", "", 'O', &Ele32_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele35_WPTight_Gsf", "", 'O', &Ele35_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele35_WPTight_Gsf_L1EGMT", "", 'O', &Ele35_WPTight_Gsf_L1EGMT, _branches);
  utils::book(_tree, name_, "Ele38_WPTight_Gsf", "", 'O', &Ele38_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele40_WPTight_Gsf", "", 'O', &Ele40_WPTight_Gsf, _branches);
  utils::book(_tree, name_, "Ele32_WPTight_Gsf_L1DoubleEG", "", 'O', &Ele32_WPTight_Gsf_L1DoubleEG, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", "", 'O', &Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "HT450_Beamspot", "", 'O', &HT450_Beamspot, _branches);
  utils::book(_tree, name_, "HT300_Beamspot", "", 'O', &HT300_Beamspot, _branches);
  utils::book(_tree, name_, "ZeroBias_Beamspot", "", 'O', &ZeroBias_Beamspot, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", "", 'O', &IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", "", 'O', &IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", "", 'O', &IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "", 'O', &IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "", 'O', &IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", "", 'O', &IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", "", 'O', &IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", "", 'O', &IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", "", 'O', &IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", "", 'O', &IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, _branches);
  utils::book(_tree, name_, "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "", 'O', &IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches);
  utils::book(_tree, name_, "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "", 'O', &IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches);
  utils::book(_tree, name_, "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", "", 'O', &IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, _branches);
  utils::book(_tree, name_, "IsoMu20", "", 'O', &IsoMu20, _branches);
  utils::book(_tree, name_, "IsoMu24", "", 'O', &IsoMu24, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1", "", 'O', &IsoMu24_eta2p1, _branches);
  utils::book(_tree, name_, "IsoMu27", "", 'O', &IsoMu27, _branches);
  utils::book(_tree, name_, "IsoMu30", "", 'O', &IsoMu30, _branches);
  utils::book(_tree, name_, "UncorrectedJetE30_NoBPTX", "", 'O', &UncorrectedJetE30_NoBPTX, _branches);
  utils::book(_tree, name_, "UncorrectedJetE30_NoBPTX3BX", "", 'O', &UncorrectedJetE30_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "UncorrectedJetE60_NoBPTX3BX", "", 'O', &UncorrectedJetE60_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "UncorrectedJetE70_NoBPTX3BX", "", 'O', &UncorrectedJetE70_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "L1SingleMu18", "", 'O', &L1SingleMu18, _branches);
  utils::book(_tree, name_, "L1SingleMu25", "", 'O', &L1SingleMu25, _branches);
  utils::book(_tree, name_, "L2Mu10", "", 'O', &L2Mu10, _branches);
  utils::book(_tree, name_, "L2Mu10_NoVertex_NoBPTX3BX", "", 'O', &L2Mu10_NoVertex_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "L2Mu10_NoVertex_NoBPTX", "", 'O', &L2Mu10_NoVertex_NoBPTX, _branches);
  utils::book(_tree, name_, "L2Mu45_NoVertex_3Sta_NoBPTX3BX", "", 'O', &L2Mu45_NoVertex_3Sta_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "L2Mu40_NoVertex_3Sta_NoBPTX3BX", "", 'O', &L2Mu40_NoVertex_3Sta_NoBPTX3BX, _branches);
  utils::book(_tree, name_, "L2Mu50", "", 'O', &L2Mu50, _branches);
  utils::book(_tree, name_, "L2Mu23NoVtx_2Cha", "", 'O', &L2Mu23NoVtx_2Cha, _branches);
  utils::book(_tree, name_, "L2Mu23NoVtx_2Cha_CosmicSeed", "", 'O', &L2Mu23NoVtx_2Cha_CosmicSeed, _branches);
  utils::book(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", "", 'O', &DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4, _branches);
  utils::book(_tree, name_, "DoubleL2Mu30NoVtx_2Cha_Eta2p4", "", 'O', &DoubleL2Mu30NoVtx_2Cha_Eta2p4, _branches);
  utils::book(_tree, name_, "DoubleL2Mu50", "", 'O', &DoubleL2Mu50, _branches);
  utils::book(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed", "", 'O', &DoubleL2Mu23NoVtx_2Cha_CosmicSeed, _branches);
  utils::book(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", "", 'O', &DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed", "", 'O', &DoubleL2Mu25NoVtx_2Cha_CosmicSeed, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", "", 'O', &DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", "", 'O', &DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4, _branches);
  utils::book(_tree, name_, "DoubleL2Mu23NoVtx_2Cha", "", 'O', &DoubleL2Mu23NoVtx_2Cha, _branches);
  utils::book(_tree, name_, "DoubleL2Mu23NoVtx_2Cha_NoL2Matched", "", 'O', &DoubleL2Mu23NoVtx_2Cha_NoL2Matched, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha", "", 'O', &DoubleL2Mu25NoVtx_2Cha, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_NoL2Matched", "", 'O', &DoubleL2Mu25NoVtx_2Cha_NoL2Matched, _branches);
  utils::book(_tree, name_, "DoubleL2Mu25NoVtx_2Cha_Eta2p4", "", 'O', &DoubleL2Mu25NoVtx_2Cha_Eta2p4, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", "", 'O', &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, _branches);
  utils::book(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", "", 'O', &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, _branches);
  utils::book(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", "", 'O', &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", "", 'O', &Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, _branches);
  utils::book(_tree, name_, "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", "", 'O', &Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8, _branches);
  utils::book(_tree, name_, "Mu25_TkMu0_Onia", "", 'O', &Mu25_TkMu0_Onia, _branches);
  utils::book(_tree, name_, "Mu30_TkMu0_Psi", "", 'O', &Mu30_TkMu0_Psi, _branches);
  utils::book(_tree, name_, "Mu30_TkMu0_Upsilon", "", 'O', &Mu30_TkMu0_Upsilon, _branches);
  utils::book(_tree, name_, "Mu20_TkMu0_Phi", "", 'O', &Mu20_TkMu0_Phi, _branches);
  utils::book(_tree, name_, "Mu25_TkMu0_Phi", "", 'O', &Mu25_TkMu0_Phi, _branches);
  utils::book(_tree, name_, "Mu12", "", 'O', &Mu12, _branches);
  utils::book(_tree, name_, "Mu15", "", 'O', &Mu15, _branches);
  utils::book(_tree, name_, "Mu20", "", 'O', &Mu20, _branches);
  utils::book(_tree, name_, "Mu27", "", 'O', &Mu27, _branches);
  utils::book(_tree, name_, "Mu50", "", 'O', &Mu50, _branches);
  utils::book(_tree, name_, "Mu55", "", 'O', &Mu55, _branches);
  utils::book(_tree, name_, "OldMu100", "", 'O', &OldMu100, _branches);
  utils::book(_tree, name_, "TkMu100", "", 'O', &TkMu100, _branches);
  utils::book(_tree, name_, "DiPFJetAve40", "", 'O', &DiPFJetAve40, _branches);
  utils::book(_tree, name_, "DiPFJetAve60", "", 'O', &DiPFJetAve60, _branches);
  utils::book(_tree, name_, "DiPFJetAve80", "", 'O', &DiPFJetAve80, _branches);
  utils::book(_tree, name_, "DiPFJetAve140", "", 'O', &DiPFJetAve140, _branches);
  utils::book(_tree, name_, "DiPFJetAve200", "", 'O', &DiPFJetAve200, _branches);
  utils::book(_tree, name_, "DiPFJetAve260", "", 'O', &DiPFJetAve260, _branches);
  utils::book(_tree, name_, "DiPFJetAve320", "", 'O', &DiPFJetAve320, _branches);
  utils::book(_tree, name_, "DiPFJetAve400", "", 'O', &DiPFJetAve400, _branches);
  utils::book(_tree, name_, "DiPFJetAve500", "", 'O', &DiPFJetAve500, _branches);
  utils::book(_tree, name_, "DiPFJetAve60_HFJEC", "", 'O', &DiPFJetAve60_HFJEC, _branches);
  utils::book(_tree, name_, "DiPFJetAve80_HFJEC", "", 'O', &DiPFJetAve80_HFJEC, _branches);
  utils::book(_tree, name_, "DiPFJetAve100_HFJEC", "", 'O', &DiPFJetAve100_HFJEC, _branches);
  utils::book(_tree, name_, "DiPFJetAve160_HFJEC", "", 'O', &DiPFJetAve160_HFJEC, _branches);
  utils::book(_tree, name_, "DiPFJetAve220_HFJEC", "", 'O', &DiPFJetAve220_HFJEC, _branches);
  utils::book(_tree, name_, "DiPFJetAve300_HFJEC", "", 'O', &DiPFJetAve300_HFJEC, _branches);
  utils::book(_tree, name_, "AK8PFJet15", "", 'O', &AK8PFJet15, _branches);
  utils::book(_tree, name_, "AK8PFJet25", "", 'O', &AK8PFJet25, _branches);
  utils::book(_tree, name_, "AK8PFJet40", "", 'O', &AK8PFJet40, _branches);
  utils::book(_tree, name_, "AK8PFJet60", "", 'O', &AK8PFJet60, _branches);
  utils::book(_tree, name_, "AK8PFJet80", "", 'O', &AK8PFJet80, _branches);
  utils::book(_tree, name_, "AK8PFJet140", "", 'O', &AK8PFJet140, _branches);
  utils::book(_tree, name_, "AK8PFJet200", "", 'O', &AK8PFJet200, _branches);
  utils::book(_tree, name_, "AK8PFJet260", "", 'O', &AK8PFJet260, _branches);
  utils::book(_tree, name_, "AK8PFJet320", "", 'O', &AK8PFJet320, _branches);
  utils::book(_tree, name_, "AK8PFJet400", "", 'O', &AK8PFJet400, _branches);
  utils::book(_tree, name_, "AK8PFJet450", "", 'O', &AK8PFJet450, _branches);
  utils::book(_tree, name_, "AK8PFJet500", "", 'O', &AK8PFJet500, _branches);
  utils::book(_tree, name_, "AK8PFJet550", "", 'O', &AK8PFJet550, _branches);
  utils::book(_tree, name_, "PFJet15", "", 'O', &PFJet15, _branches);
  utils::book(_tree, name_, "PFJet25", "", 'O', &PFJet25, _branches);
  utils::book(_tree, name_, "PFJet40", "", 'O', &PFJet40, _branches);
  utils::book(_tree, name_, "PFJet60", "", 'O', &PFJet60, _branches);
  utils::book(_tree, name_, "PFJet80", "", 'O', &PFJet80, _branches);
  utils::book(_tree, name_, "PFJet140", "", 'O', &PFJet140, _branches);
  utils::book(_tree, name_, "PFJet200", "", 'O', &PFJet200, _branches);
  utils::book(_tree, name_, "PFJet260", "", 'O', &PFJet260, _branches);
  utils::book(_tree, name_, "PFJet320", "", 'O', &PFJet320, _branches);
  utils::book(_tree, name_, "PFJet400", "", 'O', &PFJet400, _branches);
  utils::book(_tree, name_, "PFJet450", "", 'O', &PFJet450, _branches);
  utils::book(_tree, name_, "PFJet500", "", 'O', &PFJet500, _branches);
  utils::book(_tree, name_, "PFJet550", "", 'O', &PFJet550, _branches);
  utils::book(_tree, name_, "PFJetFwd15", "", 'O', &PFJetFwd15, _branches);
  utils::book(_tree, name_, "PFJetFwd25", "", 'O', &PFJetFwd25, _branches);
  utils::book(_tree, name_, "PFJetFwd40", "", 'O', &PFJetFwd40, _branches);
  utils::book(_tree, name_, "PFJetFwd60", "", 'O', &PFJetFwd60, _branches);
  utils::book(_tree, name_, "PFJetFwd80", "", 'O', &PFJetFwd80, _branches);
  utils::book(_tree, name_, "PFJetFwd140", "", 'O', &PFJetFwd140, _branches);
  utils::book(_tree, name_, "PFJetFwd200", "", 'O', &PFJetFwd200, _branches);
  utils::book(_tree, name_, "PFJetFwd260", "", 'O', &PFJetFwd260, _branches);
  utils::book(_tree, name_, "PFJetFwd320", "", 'O', &PFJetFwd320, _branches);
  utils::book(_tree, name_, "PFJetFwd400", "", 'O', &PFJetFwd400, _branches);
  utils::book(_tree, name_, "PFJetFwd450", "", 'O', &PFJetFwd450, _branches);
  utils::book(_tree, name_, "PFJetFwd500", "", 'O', &PFJetFwd500, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd15", "", 'O', &AK8PFJetFwd15, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd25", "", 'O', &AK8PFJetFwd25, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd40", "", 'O', &AK8PFJetFwd40, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd60", "", 'O', &AK8PFJetFwd60, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd80", "", 'O', &AK8PFJetFwd80, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd140", "", 'O', &AK8PFJetFwd140, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd200", "", 'O', &AK8PFJetFwd200, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd260", "", 'O', &AK8PFJetFwd260, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd320", "", 'O', &AK8PFJetFwd320, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd400", "", 'O', &AK8PFJetFwd400, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd450", "", 'O', &AK8PFJetFwd450, _branches);
  utils::book(_tree, name_, "AK8PFJetFwd500", "", 'O', &AK8PFJetFwd500, _branches);
  utils::book(_tree, name_, "PFHT180", "", 'O', &PFHT180, _branches);
  utils::book(_tree, name_, "PFHT250", "", 'O', &PFHT250, _branches);
  utils::book(_tree, name_, "PFHT370", "", 'O', &PFHT370, _branches);
  utils::book(_tree, name_, "PFHT430", "", 'O', &PFHT430, _branches);
  utils::book(_tree, name_, "PFHT510", "", 'O', &PFHT510, _branches);
  utils::book(_tree, name_, "PFHT590", "", 'O', &PFHT590, _branches);
  utils::book(_tree, name_, "PFHT680", "", 'O', &PFHT680, _branches);
  utils::book(_tree, name_, "PFHT780", "", 'O', &PFHT780, _branches);
  utils::book(_tree, name_, "PFHT890", "", 'O', &PFHT890, _branches);
  utils::book(_tree, name_, "PFHT1050", "", 'O', &PFHT1050, _branches);
  utils::book(_tree, name_, "PFHT500_PFMET100_PFMHT100_IDTight", "", 'O', &PFHT500_PFMET100_PFMHT100_IDTight, _branches);
  utils::book(_tree, name_, "PFHT500_PFMET110_PFMHT110_IDTight", "", 'O', &PFHT500_PFMET110_PFMHT110_IDTight, _branches);
  utils::book(_tree, name_, "PFHT700_PFMET85_PFMHT85_IDTight", "", 'O', &PFHT700_PFMET85_PFMHT85_IDTight, _branches);
  utils::book(_tree, name_, "PFHT700_PFMET95_PFMHT95_IDTight", "", 'O', &PFHT700_PFMET95_PFMHT95_IDTight, _branches);
  utils::book(_tree, name_, "PFHT800_PFMET75_PFMHT75_IDTight", "", 'O', &PFHT800_PFMET75_PFMHT75_IDTight, _branches);
  utils::book(_tree, name_, "PFHT800_PFMET85_PFMHT85_IDTight", "", 'O', &PFHT800_PFMET85_PFMHT85_IDTight, _branches);
  utils::book(_tree, name_, "PFMET110_PFMHT110_IDTight", "", 'O', &PFMET110_PFMHT110_IDTight, _branches);
  utils::book(_tree, name_, "PFMET120_PFMHT120_IDTight", "", 'O', &PFMET120_PFMHT120_IDTight, _branches);
  utils::book(_tree, name_, "PFMET130_PFMHT130_IDTight", "", 'O', &PFMET130_PFMHT130_IDTight, _branches);
  utils::book(_tree, name_, "PFMET140_PFMHT140_IDTight", "", 'O', &PFMET140_PFMHT140_IDTight, _branches);
  utils::book(_tree, name_, "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", "", 'O', &PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1, _branches);
  utils::book(_tree, name_, "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", "", 'O', &PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1, _branches);
  utils::book(_tree, name_, "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", "", 'O', &PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1, _branches);
  utils::book(_tree, name_, "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", "", 'O', &PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1, _branches);
  utils::book(_tree, name_, "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", "", 'O', &PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1, _branches);
  utils::book(_tree, name_, "PFMET120_PFMHT120_IDTight_PFHT60", "", 'O', &PFMET120_PFMHT120_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", "", 'O', &PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight_PFHT60", "", 'O', &PFMETTypeOne120_PFMHT120_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "PFMETTypeOne110_PFMHT110_IDTight", "", 'O', &PFMETTypeOne110_PFMHT110_IDTight, _branches);
  utils::book(_tree, name_, "PFMETTypeOne120_PFMHT120_IDTight", "", 'O', &PFMETTypeOne120_PFMHT120_IDTight, _branches);
  utils::book(_tree, name_, "PFMETTypeOne130_PFMHT130_IDTight", "", 'O', &PFMETTypeOne130_PFMHT130_IDTight, _branches);
  utils::book(_tree, name_, "PFMETTypeOne140_PFMHT140_IDTight", "", 'O', &PFMETTypeOne140_PFMHT140_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu110_PFMHTNoMu110_IDTight", "", 'O', &PFMETNoMu110_PFMHTNoMu110_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu120_PFMHTNoMu120_IDTight", "", 'O', &PFMETNoMu120_PFMHTNoMu120_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu130_PFMHTNoMu130_IDTight", "", 'O', &PFMETNoMu130_PFMHTNoMu130_IDTight, _branches);
  utils::book(_tree, name_, "PFMETNoMu140_PFMHTNoMu140_IDTight", "", 'O', &PFMETNoMu140_PFMHTNoMu140_IDTight, _branches);
  utils::book(_tree, name_, "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", "", 'O', &MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, _branches);
  utils::book(_tree, name_, "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", "", 'O', &MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, _branches);
  utils::book(_tree, name_, "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", "", 'O', &MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight, _branches);
  utils::book(_tree, name_, "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", "", 'O', &MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight, _branches);
  utils::book(_tree, name_, "L1ETMHadSeeds", "", 'O', &L1ETMHadSeeds, _branches);
  utils::book(_tree, name_, "CaloMHT90", "", 'O', &CaloMHT90, _branches);
  utils::book(_tree, name_, "CaloMET80_NotCleaned", "", 'O', &CaloMET80_NotCleaned, _branches);
  utils::book(_tree, name_, "CaloMET90_NotCleaned", "", 'O', &CaloMET90_NotCleaned, _branches);
  utils::book(_tree, name_, "CaloMET100_NotCleaned", "", 'O', &CaloMET100_NotCleaned, _branches);
  utils::book(_tree, name_, "CaloMET110_NotCleaned", "", 'O', &CaloMET110_NotCleaned, _branches);
  utils::book(_tree, name_, "CaloMET250_NotCleaned", "", 'O', &CaloMET250_NotCleaned, _branches);
  utils::book(_tree, name_, "CaloMET70_HBHECleaned", "", 'O', &CaloMET70_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET80_HBHECleaned", "", 'O', &CaloMET80_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET90_HBHECleaned", "", 'O', &CaloMET90_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET100_HBHECleaned", "", 'O', &CaloMET100_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET250_HBHECleaned", "", 'O', &CaloMET250_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET300_HBHECleaned", "", 'O', &CaloMET300_HBHECleaned, _branches);
  utils::book(_tree, name_, "CaloMET350_HBHECleaned", "", 'O', &CaloMET350_HBHECleaned, _branches);
  utils::book(_tree, name_, "PFMET200_NotCleaned", "", 'O', &PFMET200_NotCleaned, _branches);
  utils::book(_tree, name_, "PFMET200_HBHECleaned", "", 'O', &PFMET200_HBHECleaned, _branches);
  utils::book(_tree, name_, "PFMET250_HBHECleaned", "", 'O', &PFMET250_HBHECleaned, _branches);
  utils::book(_tree, name_, "PFMET300_HBHECleaned", "", 'O', &PFMET300_HBHECleaned, _branches);
  utils::book(_tree, name_, "PFMET200_HBHE_BeamHaloCleaned", "", 'O', &PFMET200_HBHE_BeamHaloCleaned, _branches);
  utils::book(_tree, name_, "PFMETTypeOne200_HBHE_BeamHaloCleaned", "", 'O', &PFMETTypeOne200_HBHE_BeamHaloCleaned, _branches);
  utils::book(_tree, name_, "MET105_IsoTrk50", "", 'O', &MET105_IsoTrk50, _branches);
  utils::book(_tree, name_, "MET120_IsoTrk50", "", 'O', &MET120_IsoTrk50, _branches);
  utils::book(_tree, name_, "SingleJet30_Mu12_SinglePFJet40", "", 'O', &SingleJet30_Mu12_SinglePFJet40, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets40_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets100_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets200_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets350_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "", 'O', &Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets40_CaloBTagDeepCSV_p71", "", 'O', &DoublePFJets40_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets100_CaloBTagDeepCSV_p71", "", 'O', &DoublePFJets100_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets200_CaloBTagDeepCSV_p71", "", 'O', &DoublePFJets200_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets350_CaloBTagDeepCSV_p71", "", 'O', &DoublePFJets350_CaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "", 'O', &DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", "", 'O', &DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, _branches);
  utils::book(_tree, name_, "Photon300_NoHE", "", 'O', &Photon300_NoHE, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL", "", 'O', &Mu8_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL_DZ", "", 'O', &Mu8_DiEle12_CaloIdL_TrackIdL_DZ, _branches);
  utils::book(_tree, name_, "Mu8_DiEle12_CaloIdL_TrackIdL", "", 'O', &Mu8_DiEle12_CaloIdL_TrackIdL, _branches);
  utils::book(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", "", 'O', &Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ, _branches);
  utils::book(_tree, name_, "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", "", 'O', &Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", "", 'O', &Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, _branches);
  utils::book(_tree, name_, "Mu17_TrkIsoVVL", "", 'O', &Mu17_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "Mu19_TrkIsoVVL", "", 'O', &Mu19_TrkIsoVVL, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet20_Mu5", "", 'O', &BTagMu_AK4DiJet20_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet40_Mu5", "", 'O', &BTagMu_AK4DiJet40_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet70_Mu5", "", 'O', &BTagMu_AK4DiJet70_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet110_Mu5", "", 'O', &BTagMu_AK4DiJet110_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet170_Mu5", "", 'O', &BTagMu_AK4DiJet170_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4Jet300_Mu5", "", 'O', &BTagMu_AK4Jet300_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK8DiJet170_Mu5", "", 'O', &BTagMu_AK8DiJet170_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5", "", 'O', &BTagMu_AK8Jet170_DoubleMu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK8Jet300_Mu5", "", 'O', &BTagMu_AK8Jet300_Mu5, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet20_Mu5_noalgo", "", 'O', &BTagMu_AK4DiJet20_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet40_Mu5_noalgo", "", 'O', &BTagMu_AK4DiJet40_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet70_Mu5_noalgo", "", 'O', &BTagMu_AK4DiJet70_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet110_Mu5_noalgo", "", 'O', &BTagMu_AK4DiJet110_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK4DiJet170_Mu5_noalgo", "", 'O', &BTagMu_AK4DiJet170_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK4Jet300_Mu5_noalgo", "", 'O', &BTagMu_AK4Jet300_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK8DiJet170_Mu5_noalgo", "", 'O', &BTagMu_AK8DiJet170_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK8Jet170_DoubleMu5_noalgo", "", 'O', &BTagMu_AK8Jet170_DoubleMu5_noalgo, _branches);
  utils::book(_tree, name_, "BTagMu_AK8Jet300_Mu5_noalgo", "", 'O', &BTagMu_AK8Jet300_Mu5_noalgo, _branches);
  utils::book(_tree, name_, "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", "", 'O', &Ele15_Ele8_CaloIdL_TrackIdL_IsoVL, _branches);
  utils::book(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", "", 'O', &Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, _branches);
  utils::book(_tree, name_, "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", "", 'O', &Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, _branches);
  utils::book(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", "", 'O', &Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, _branches);
  utils::book(_tree, name_, "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", "", 'O', &Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, _branches);
  utils::book(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", "", 'O', &Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, _branches);
  utils::book(_tree, name_, "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", "", 'O', &Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, _branches);
  utils::book(_tree, name_, "Mu12_DoublePhoton20", "", 'O', &Mu12_DoublePhoton20, _branches);
  utils::book(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2", "", 'O', &TriplePhoton_20_20_20_CaloIdLV2, _branches);
  utils::book(_tree, name_, "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", "", 'O', &TriplePhoton_20_20_20_CaloIdLV2_R9IdVL, _branches);
  utils::book(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2", "", 'O', &TriplePhoton_30_30_10_CaloIdLV2, _branches);
  utils::book(_tree, name_, "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", "", 'O', &TriplePhoton_30_30_10_CaloIdLV2_R9IdVL, _branches);
  utils::book(_tree, name_, "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", "", 'O', &TriplePhoton_35_35_5_CaloIdLV2_R9IdVL, _branches);
  utils::book(_tree, name_, "Photon20", "", 'O', &Photon20, _branches);
  utils::book(_tree, name_, "Photon33", "", 'O', &Photon33, _branches);
  utils::book(_tree, name_, "Photon50", "", 'O', &Photon50, _branches);
  utils::book(_tree, name_, "Photon75", "", 'O', &Photon75, _branches);
  utils::book(_tree, name_, "Photon90", "", 'O', &Photon90, _branches);
  utils::book(_tree, name_, "Photon120", "", 'O', &Photon120, _branches);
  utils::book(_tree, name_, "Photon150", "", 'O', &Photon150, _branches);
  utils::book(_tree, name_, "Photon175", "", 'O', &Photon175, _branches);
  utils::book(_tree, name_, "Photon200", "", 'O', &Photon200, _branches);
  utils::book(_tree, name_, "Photon100EB_TightID_TightIso", "", 'O', &Photon100EB_TightID_TightIso, _branches);
  utils::book(_tree, name_, "Photon110EB_TightID_TightIso", "", 'O', &Photon110EB_TightID_TightIso, _branches);
  utils::book(_tree, name_, "Photon120EB_TightID_TightIso", "", 'O', &Photon120EB_TightID_TightIso, _branches);
  utils::book(_tree, name_, "Photon100EBHE10", "", 'O', &Photon100EBHE10, _branches);
  utils::book(_tree, name_, "Photon100EEHE10", "", 'O', &Photon100EEHE10, _branches);
  utils::book(_tree, name_, "Photon100EE_TightID_TightIso", "", 'O', &Photon100EE_TightID_TightIso, _branches);
  utils::book(_tree, name_, "Photon50_R9Id90_HE10_IsoM", "", 'O', &Photon50_R9Id90_HE10_IsoM, _branches);
  utils::book(_tree, name_, "Photon75_R9Id90_HE10_IsoM", "", 'O', &Photon75_R9Id90_HE10_IsoM, _branches);
  utils::book(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", "", 'O', &Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3, _branches);
  utils::book(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", "", 'O', &Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3, _branches);
  utils::book(_tree, name_, "Photon90_R9Id90_HE10_IsoM", "", 'O', &Photon90_R9Id90_HE10_IsoM, _branches);
  utils::book(_tree, name_, "Photon120_R9Id90_HE10_IsoM", "", 'O', &Photon120_R9Id90_HE10_IsoM, _branches);
  utils::book(_tree, name_, "Photon165_R9Id90_HE10_IsoM", "", 'O', &Photon165_R9Id90_HE10_IsoM, _branches);
  utils::book(_tree, name_, "Photon90_CaloIdL_PFHT700", "", 'O', &Photon90_CaloIdL_PFHT700, _branches);
  utils::book(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", "", 'O', &Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, _branches);
  utils::book(_tree, name_, "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", "", 'O', &Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95, _branches);
  utils::book(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", "", 'O', &Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55, _branches);
  utils::book(_tree, name_, "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", "", 'O', &Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55, _branches);
  utils::book(_tree, name_, "Photon35_TwoProngs35", "", 'O', &Photon35_TwoProngs35, _branches);
  utils::book(_tree, name_, "IsoMu24_TwoProngs35", "", 'O', &IsoMu24_TwoProngs35, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi_L1_NoOS", "", 'O', &Dimuon0_Jpsi_L1_NoOS, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi_NoVertexing_NoOS", "", 'O', &Dimuon0_Jpsi_NoVertexing_NoOS, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi", "", 'O', &Dimuon0_Jpsi, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi_NoVertexing", "", 'O', &Dimuon0_Jpsi_NoVertexing, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi_L1_4R_0er1p5R", "", 'O', &Dimuon0_Jpsi_L1_4R_0er1p5R, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", "", 'O', &Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R, _branches);
  utils::book(_tree, name_, "Dimuon0_Jpsi3p5_Muon2", "", 'O', &Dimuon0_Jpsi3p5_Muon2, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_4p5", "", 'O', &Dimuon0_Upsilon_L1_4p5, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_5", "", 'O', &Dimuon0_Upsilon_L1_5, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_4p5NoOS", "", 'O', &Dimuon0_Upsilon_L1_4p5NoOS, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0", "", 'O', &Dimuon0_Upsilon_L1_4p5er2p0, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_4p5er2p0M", "", 'O', &Dimuon0_Upsilon_L1_4p5er2p0M, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_NoVertexing", "", 'O', &Dimuon0_Upsilon_NoVertexing, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_L1_5M", "", 'O', &Dimuon0_Upsilon_L1_5M, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass_L1_0er1p5R", "", 'O', &Dimuon0_LowMass_L1_0er1p5R, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass_L1_0er1p5", "", 'O', &Dimuon0_LowMass_L1_0er1p5, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass", "", 'O', &Dimuon0_LowMass, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass_L1_4", "", 'O', &Dimuon0_LowMass_L1_4, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass_L1_4R", "", 'O', &Dimuon0_LowMass_L1_4R, _branches);
  utils::book(_tree, name_, "Dimuon0_LowMass_L1_TM530", "", 'O', &Dimuon0_LowMass_L1_TM530, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_Muon_L1_TM0", "", 'O', &Dimuon0_Upsilon_Muon_L1_TM0, _branches);
  utils::book(_tree, name_, "Dimuon0_Upsilon_Muon_NoL1Mass", "", 'O', &Dimuon0_Upsilon_Muon_NoL1Mass, _branches);
  utils::book(_tree, name_, "TripleMu_5_3_3_Mass3p8_DZ", "", 'O', &TripleMu_5_3_3_Mass3p8_DZ, _branches);
  utils::book(_tree, name_, "TripleMu_10_5_5_DZ", "", 'O', &TripleMu_10_5_5_DZ, _branches);
  utils::book(_tree, name_, "TripleMu_12_10_5", "", 'O', &TripleMu_12_10_5, _branches);
  utils::book(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15", "", 'O', &Tau3Mu_Mu7_Mu1_TkMu1_Tau15, _branches);
  utils::book(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", "", 'O', &Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, _branches);
  utils::book(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", "", 'O', &Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, _branches);
  utils::book(_tree, name_, "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", "", 'O', &Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, _branches);
  utils::book(_tree, name_, "DoubleMu3_DZ_PFMET50_PFMHT60", "", 'O', &DoubleMu3_DZ_PFMET50_PFMHT60, _branches);
  utils::book(_tree, name_, "DoubleMu3_DZ_PFMET70_PFMHT70", "", 'O', &DoubleMu3_DZ_PFMET70_PFMHT70, _branches);
  utils::book(_tree, name_, "DoubleMu3_DZ_PFMET90_PFMHT90", "", 'O', &DoubleMu3_DZ_PFMET90_PFMHT90, _branches);
  utils::book(_tree, name_, "DoubleMu3_Trk_Tau3mu_NoL1Mass", "", 'O', &DoubleMu3_Trk_Tau3mu_NoL1Mass, _branches);
  utils::book(_tree, name_, "DoubleMu4_Jpsi_Displaced", "", 'O', &DoubleMu4_Jpsi_Displaced, _branches);
  utils::book(_tree, name_, "DoubleMu4_Jpsi_NoVertexing", "", 'O', &DoubleMu4_Jpsi_NoVertexing, _branches);
  utils::book(_tree, name_, "DoubleMu4_JpsiTrkTrk_Displaced", "", 'O', &DoubleMu4_JpsiTrkTrk_Displaced, _branches);
  utils::book(_tree, name_, "DoubleMu43NoFiltersNoVtx", "", 'O', &DoubleMu43NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "DoubleMu48NoFiltersNoVtx", "", 'O', &DoubleMu48NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "Mu43NoFiltersNoVtx_Photon43_CaloIdL", "", 'O', &Mu43NoFiltersNoVtx_Photon43_CaloIdL, _branches);
  utils::book(_tree, name_, "Mu48NoFiltersNoVtx_Photon48_CaloIdL", "", 'O', &Mu48NoFiltersNoVtx_Photon48_CaloIdL, _branches);
  utils::book(_tree, name_, "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", "", 'O', &Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL, _branches);
  utils::book(_tree, name_, "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", "", 'O', &Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL, _branches);
  utils::book(_tree, name_, "DoubleMu33NoFiltersNoVtxDisplaced", "", 'O', &DoubleMu33NoFiltersNoVtxDisplaced, _branches);
  utils::book(_tree, name_, "DoubleMu40NoFiltersNoVtxDisplaced", "", 'O', &DoubleMu40NoFiltersNoVtxDisplaced, _branches);
  utils::book(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4", "", 'O', &DoubleMu20_7_Mass0to30_L1_DM4, _branches);
  utils::book(_tree, name_, "DoubleMu20_7_Mass0to30_L1_DM4EG", "", 'O', &DoubleMu20_7_Mass0to30_L1_DM4EG, _branches);
  utils::book(_tree, name_, "HT425", "", 'O', &HT425, _branches);
  utils::book(_tree, name_, "HT430_DisplacedDijet40_DisplacedTrack", "", 'O', &HT430_DisplacedDijet40_DisplacedTrack, _branches);
  utils::book(_tree, name_, "HT500_DisplacedDijet40_DisplacedTrack", "", 'O', &HT500_DisplacedDijet40_DisplacedTrack, _branches);
  utils::book(_tree, name_, "HT430_DisplacedDijet60_DisplacedTrack", "", 'O', &HT430_DisplacedDijet60_DisplacedTrack, _branches);
  utils::book(_tree, name_, "HT400_DisplacedDijet40_DisplacedTrack", "", 'O', &HT400_DisplacedDijet40_DisplacedTrack, _branches);
  utils::book(_tree, name_, "HT650_DisplacedDijet60_Inclusive", "", 'O', &HT650_DisplacedDijet60_Inclusive, _branches);
  utils::book(_tree, name_, "HT550_DisplacedDijet60_Inclusive", "", 'O', &HT550_DisplacedDijet60_Inclusive, _branches);
  utils::book(_tree, name_, "DiJet110_35_Mjj650_PFMET110", "", 'O', &DiJet110_35_Mjj650_PFMET110, _branches);
  utils::book(_tree, name_, "DiJet110_35_Mjj650_PFMET120", "", 'O', &DiJet110_35_Mjj650_PFMET120, _branches);
  utils::book(_tree, name_, "DiJet110_35_Mjj650_PFMET130", "", 'O', &DiJet110_35_Mjj650_PFMET130, _branches);
  utils::book(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET110", "", 'O', &TripleJet110_35_35_Mjj650_PFMET110, _branches);
  utils::book(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET120", "", 'O', &TripleJet110_35_35_Mjj650_PFMET120, _branches);
  utils::book(_tree, name_, "TripleJet110_35_35_Mjj650_PFMET130", "", 'O', &TripleJet110_35_35_Mjj650_PFMET130, _branches);
  utils::book(_tree, name_, "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", "", 'O', &Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned, _branches);
  utils::book(_tree, name_, "Ele28_eta2p1_WPTight_Gsf_HT150", "", 'O', &Ele28_eta2p1_WPTight_Gsf_HT150, _branches);
  utils::book(_tree, name_, "Ele28_HighEta_SC20_Mass55", "", 'O', &Ele28_HighEta_SC20_Mass55, _branches);
  utils::book(_tree, name_, "DoubleMu20_7_Mass0to30_Photon23", "", 'O', &DoubleMu20_7_Mass0to30_Photon23, _branches);
  utils::book(_tree, name_, "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", "", 'O', &Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, _branches);
  utils::book(_tree, name_, "Ele15_IsoVVVL_PFHT450_PFMET50", "", 'O', &Ele15_IsoVVVL_PFHT450_PFMET50, _branches);
  utils::book(_tree, name_, "Ele15_IsoVVVL_PFHT450", "", 'O', &Ele15_IsoVVVL_PFHT450, _branches);
  utils::book(_tree, name_, "Ele50_IsoVVVL_PFHT450", "", 'O', &Ele50_IsoVVVL_PFHT450, _branches);
  utils::book(_tree, name_, "Ele15_IsoVVVL_PFHT600", "", 'O', &Ele15_IsoVVVL_PFHT600, _branches);
  utils::book(_tree, name_, "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", "", 'O', &Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, _branches);
  utils::book(_tree, name_, "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", "", 'O', &Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, _branches);
  utils::book(_tree, name_, "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", "", 'O', &Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, _branches);
  utils::book(_tree, name_, "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", "", 'O', &Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, _branches);
  utils::book(_tree, name_, "Mu15_IsoVVVL_PFHT450_PFMET50", "", 'O', &Mu15_IsoVVVL_PFHT450_PFMET50, _branches);
  utils::book(_tree, name_, "Mu15_IsoVVVL_PFHT450", "", 'O', &Mu15_IsoVVVL_PFHT450, _branches);
  utils::book(_tree, name_, "Mu50_IsoVVVL_PFHT450", "", 'O', &Mu50_IsoVVVL_PFHT450, _branches);
  utils::book(_tree, name_, "Mu15_IsoVVVL_PFHT600", "", 'O', &Mu15_IsoVVVL_PFHT600, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight, _branches);
  utils::book(_tree, name_, "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", "", 'O', &Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight, _branches);
  utils::book(_tree, name_, "Dimuon10_PsiPrime_Barrel_Seagulls", "", 'O', &Dimuon10_PsiPrime_Barrel_Seagulls, _branches);
  utils::book(_tree, name_, "Dimuon20_Jpsi_Barrel_Seagulls", "", 'O', &Dimuon20_Jpsi_Barrel_Seagulls, _branches);
  utils::book(_tree, name_, "Dimuon12_Upsilon_y1p4", "", 'O', &Dimuon12_Upsilon_y1p4, _branches);
  utils::book(_tree, name_, "Dimuon14_Phi_Barrel_Seagulls", "", 'O', &Dimuon14_Phi_Barrel_Seagulls, _branches);
  utils::book(_tree, name_, "Dimuon18_PsiPrime", "", 'O', &Dimuon18_PsiPrime, _branches);
  utils::book(_tree, name_, "Dimuon25_Jpsi", "", 'O', &Dimuon25_Jpsi, _branches);
  utils::book(_tree, name_, "Dimuon18_PsiPrime_noCorrL1", "", 'O', &Dimuon18_PsiPrime_noCorrL1, _branches);
  utils::book(_tree, name_, "Dimuon24_Upsilon_noCorrL1", "", 'O', &Dimuon24_Upsilon_noCorrL1, _branches);
  utils::book(_tree, name_, "Dimuon24_Phi_noCorrL1", "", 'O', &Dimuon24_Phi_noCorrL1, _branches);
  utils::book(_tree, name_, "Dimuon25_Jpsi_noCorrL1", "", 'O', &Dimuon25_Jpsi_noCorrL1, _branches);
  utils::book(_tree, name_, "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", "", 'O', &DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8, _branches);
  utils::book(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL_DZ", "", 'O', &DiMu9_Ele9_CaloIdL_TrackIdL_DZ, _branches);
  utils::book(_tree, name_, "DiMu9_Ele9_CaloIdL_TrackIdL", "", 'O', &DiMu9_Ele9_CaloIdL_TrackIdL, _branches);
  utils::book(_tree, name_, "DoubleIsoMu20_eta2p1", "", 'O', &DoubleIsoMu20_eta2p1, _branches);
  utils::book(_tree, name_, "TrkMu12_DoubleTrkMu5NoFiltersNoVtx", "", 'O', &TrkMu12_DoubleTrkMu5NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "TrkMu16_DoubleTrkMu6NoFiltersNoVtx", "", 'O', &TrkMu16_DoubleTrkMu6NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "TrkMu17_DoubleTrkMu8NoFiltersNoVtx", "", 'O', &TrkMu17_DoubleTrkMu8NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "Mu8", "", 'O', &Mu8, _branches);
  utils::book(_tree, name_, "Mu17", "", 'O', &Mu17, _branches);
  utils::book(_tree, name_, "Mu19", "", 'O', &Mu19, _branches);
  utils::book(_tree, name_, "Mu17_Photon30_IsoCaloId", "", 'O', &Mu17_Photon30_IsoCaloId, _branches);
  utils::book(_tree, name_, "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", "", 'O', &Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches);
  utils::book(_tree, name_, "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", "", 'O', &Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches);
  utils::book(_tree, name_, "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", "", 'O', &Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches);
  utils::book(_tree, name_, "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", "", 'O', &Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, _branches);
  utils::book(_tree, name_, "Ele8_CaloIdM_TrackIdM_PFJet30", "", 'O', &Ele8_CaloIdM_TrackIdM_PFJet30, _branches);
  utils::book(_tree, name_, "Ele17_CaloIdM_TrackIdM_PFJet30", "", 'O', &Ele17_CaloIdM_TrackIdM_PFJet30, _branches);
  utils::book(_tree, name_, "Ele23_CaloIdM_TrackIdM_PFJet30", "", 'O', &Ele23_CaloIdM_TrackIdM_PFJet30, _branches);
  utils::book(_tree, name_, "Ele50_CaloIdVT_GsfTrkIdT_PFJet165", "", 'O', &Ele50_CaloIdVT_GsfTrkIdT_PFJet165, _branches);
  utils::book(_tree, name_, "Ele115_CaloIdVT_GsfTrkIdT", "", 'O', &Ele115_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "Ele135_CaloIdVT_GsfTrkIdT", "", 'O', &Ele135_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "Ele145_CaloIdVT_GsfTrkIdT", "", 'O', &Ele145_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "Ele200_CaloIdVT_GsfTrkIdT", "", 'O', &Ele200_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "Ele250_CaloIdVT_GsfTrkIdT", "", 'O', &Ele250_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "Ele300_CaloIdVT_GsfTrkIdT", "", 'O', &Ele300_CaloIdVT_GsfTrkIdT, _branches);
  utils::book(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", "", 'O', &PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5, _branches);
  utils::book(_tree, name_, "PFHT330PT30_QuadPFJet_75_60_45_40", "", 'O', &PFHT330PT30_QuadPFJet_75_60_45_40, _branches);
  utils::book(_tree, name_, "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", "", 'O', &PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94, _branches);
  utils::book(_tree, name_, "PFHT400_SixPFJet32", "", 'O', &PFHT400_SixPFJet32, _branches);
  utils::book(_tree, name_, "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", "", 'O', &PFHT450_SixPFJet36_PFBTagDeepCSV_1p59, _branches);
  utils::book(_tree, name_, "PFHT450_SixPFJet36", "", 'O', &PFHT450_SixPFJet36, _branches);
  utils::book(_tree, name_, "PFHT350", "", 'O', &PFHT350, _branches);
  utils::book(_tree, name_, "PFHT350MinPFJet15", "", 'O', &PFHT350MinPFJet15, _branches);
  utils::book(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL", "", 'O', &Photon60_R9Id90_CaloIdL_IsoL, _branches);
  utils::book(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", "", 'O', &Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL, _branches);
  utils::book(_tree, name_, "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", "", 'O', &Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15, _branches);
  utils::book(_tree, name_, "ECALHT800", "", 'O', &ECALHT800, _branches);
  utils::book(_tree, name_, "DiSC30_18_EIso_AND_HE_Mass70", "", 'O', &DiSC30_18_EIso_AND_HE_Mass70, _branches);
  utils::book(_tree, name_, "Physics", "", 'O', &Physics, _branches);
  utils::book(_tree, name_, "Physics_part0", "", 'O', &Physics_part0, _branches);
  utils::book(_tree, name_, "Physics_part1", "", 'O', &Physics_part1, _branches);
  utils::book(_tree, name_, "Physics_part2", "", 'O', &Physics_part2, _branches);
  utils::book(_tree, name_, "Physics_part3", "", 'O', &Physics_part3, _branches);
  utils::book(_tree, name_, "Physics_part4", "", 'O', &Physics_part4, _branches);
  utils::book(_tree, name_, "Physics_part5", "", 'O', &Physics_part5, _branches);
  utils::book(_tree, name_, "Physics_part6", "", 'O', &Physics_part6, _branches);
  utils::book(_tree, name_, "Physics_part7", "", 'O', &Physics_part7, _branches);
  utils::book(_tree, name_, "Random", "", 'O', &Random, _branches);
  utils::book(_tree, name_, "ZeroBias", "", 'O', &ZeroBias, _branches);
  utils::book(_tree, name_, "ZeroBias_Alignment", "", 'O', &ZeroBias_Alignment, _branches);
  utils::book(_tree, name_, "ZeroBias_part0", "", 'O', &ZeroBias_part0, _branches);
  utils::book(_tree, name_, "ZeroBias_part1", "", 'O', &ZeroBias_part1, _branches);
  utils::book(_tree, name_, "ZeroBias_part2", "", 'O', &ZeroBias_part2, _branches);
  utils::book(_tree, name_, "ZeroBias_part3", "", 'O', &ZeroBias_part3, _branches);
  utils::book(_tree, name_, "ZeroBias_part4", "", 'O', &ZeroBias_part4, _branches);
  utils::book(_tree, name_, "ZeroBias_part5", "", 'O', &ZeroBias_part5, _branches);
  utils::book(_tree, name_, "ZeroBias_part6", "", 'O', &ZeroBias_part6, _branches);
  utils::book(_tree, name_, "ZeroBias_part7", "", 'O', &ZeroBias_part7, _branches);
  utils::book(_tree, name_, "AK4CaloJet30", "", 'O', &AK4CaloJet30, _branches);
  utils::book(_tree, name_, "AK4CaloJet40", "", 'O', &AK4CaloJet40, _branches);
  utils::book(_tree, name_, "AK4CaloJet50", "", 'O', &AK4CaloJet50, _branches);
  utils::book(_tree, name_, "AK4CaloJet80", "", 'O', &AK4CaloJet80, _branches);
  utils::book(_tree, name_, "AK4CaloJet100", "", 'O', &AK4CaloJet100, _branches);
  utils::book(_tree, name_, "AK4CaloJet120", "", 'O', &AK4CaloJet120, _branches);
  utils::book(_tree, name_, "AK4PFJet30", "", 'O', &AK4PFJet30, _branches);
  utils::book(_tree, name_, "AK4PFJet50", "", 'O', &AK4PFJet50, _branches);
  utils::book(_tree, name_, "AK4PFJet80", "", 'O', &AK4PFJet80, _branches);
  utils::book(_tree, name_, "AK4PFJet100", "", 'O', &AK4PFJet100, _branches);
  utils::book(_tree, name_, "AK4PFJet120", "", 'O', &AK4PFJet120, _branches);
  utils::book(_tree, name_, "SinglePhoton10_Eta3p1ForPPRef", "", 'O', &SinglePhoton10_Eta3p1ForPPRef, _branches);
  utils::book(_tree, name_, "SinglePhoton20_Eta3p1ForPPRef", "", 'O', &SinglePhoton20_Eta3p1ForPPRef, _branches);
  utils::book(_tree, name_, "SinglePhoton30_Eta3p1ForPPRef", "", 'O', &SinglePhoton30_Eta3p1ForPPRef, _branches);
  utils::book(_tree, name_, "Photon20_HoverELoose", "", 'O', &Photon20_HoverELoose, _branches);
  utils::book(_tree, name_, "Photon30_HoverELoose", "", 'O', &Photon30_HoverELoose, _branches);
  utils::book(_tree, name_, "EcalCalibration", "", 'O', &EcalCalibration, _branches);
  utils::book(_tree, name_, "HcalCalibration", "", 'O', &HcalCalibration, _branches);
  utils::book(_tree, name_, "L1UnpairedBunchBptxMinus", "", 'O', &L1UnpairedBunchBptxMinus, _branches);
  utils::book(_tree, name_, "L1UnpairedBunchBptxPlus", "", 'O', &L1UnpairedBunchBptxPlus, _branches);
  utils::book(_tree, name_, "L1NotBptxOR", "", 'O', &L1NotBptxOR, _branches);
  utils::book(_tree, name_, "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", "", 'O', &L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, _branches);
  utils::book(_tree, name_, "CDC_L2cosmic_5_er1p0", "", 'O', &CDC_L2cosmic_5_er1p0, _branches);
  utils::book(_tree, name_, "CDC_L2cosmic_5p5_er1p0", "", 'O', &CDC_L2cosmic_5p5_er1p0, _branches);
  utils::book(_tree, name_, "HcalNZS", "", 'O', &HcalNZS, _branches);
  utils::book(_tree, name_, "HcalPhiSym", "", 'O', &HcalPhiSym, _branches);
  utils::book(_tree, name_, "HcalIsolatedbunch", "", 'O', &HcalIsolatedbunch, _branches);
  utils::book(_tree, name_, "IsoTrackHB", "", 'O', &IsoTrackHB, _branches);
  utils::book(_tree, name_, "IsoTrackHE", "", 'O', &IsoTrackHE, _branches);
  utils::book(_tree, name_, "ZeroBias_FirstCollisionAfterAbortGap", "", 'O', &ZeroBias_FirstCollisionAfterAbortGap, _branches);
  utils::book(_tree, name_, "ZeroBias_IsolatedBunches", "", 'O', &ZeroBias_IsolatedBunches, _branches);
  utils::book(_tree, name_, "ZeroBias_FirstCollisionInTrain", "", 'O', &ZeroBias_FirstCollisionInTrain, _branches);
  utils::book(_tree, name_, "ZeroBias_LastCollisionInTrain", "", 'O', &ZeroBias_LastCollisionInTrain, _branches);
  utils::book(_tree, name_, "ZeroBias_FirstBXAfterTrain", "", 'O', &ZeroBias_FirstBXAfterTrain, _branches);
  utils::book(_tree, name_, "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", "", 'O', &IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", "", 'O', &MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", "", 'O', &MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", "", 'O', &MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", "", 'O', &MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, _branches);
  utils::book(_tree, name_, "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", "", 'O', &MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, _branches);
  utils::book(_tree, name_, "Ele16_Ele12_Ele8_CaloIdL_TrackIdL", "", 'O', &Ele16_Ele12_Ele8_CaloIdL_TrackIdL, _branches);
  utils::book(_tree, name_, "Rsq0p35", "", 'O', &Rsq0p35, _branches);
  utils::book(_tree, name_, "Rsq0p40", "", 'O', &Rsq0p40, _branches);
  utils::book(_tree, name_, "RsqMR300_Rsq0p09_MR200", "", 'O', &RsqMR300_Rsq0p09_MR200, _branches);
  utils::book(_tree, name_, "RsqMR320_Rsq0p09_MR200", "", 'O', &RsqMR320_Rsq0p09_MR200, _branches);
  utils::book(_tree, name_, "RsqMR300_Rsq0p09_MR200_4jet", "", 'O', &RsqMR300_Rsq0p09_MR200_4jet, _branches);
  utils::book(_tree, name_, "RsqMR320_Rsq0p09_MR200_4jet", "", 'O', &RsqMR320_Rsq0p09_MR200_4jet, _branches);
  utils::book(_tree, name_, "IsoMu27_MET90", "", 'O', &IsoMu27_MET90, _branches);
  utils::book(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", "", 'O', &DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", "", 'O', &DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", "", 'O', &DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", "", 'O', &DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", "", 'O', &DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", "", 'O', &DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", "", 'O', &DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", "", 'O', &DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, _branches);
  utils::book(_tree, name_, "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", "", 'O', &VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, _branches);
  utils::book(_tree, name_, "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", "", 'O', &VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, _branches);
  utils::book(_tree, name_, "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", "", 'O', &VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, _branches);
  utils::book(_tree, name_, "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", "", 'O', &Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50, _branches);
  utils::book(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", "", 'O', &Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3, _branches);
  utils::book(_tree, name_, "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", "", 'O', &Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3, _branches);
  utils::book(_tree, name_, "PFMET100_PFMHT100_IDTight_PFHT60", "", 'O', &PFMET100_PFMHT100_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", "", 'O', &PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "PFMETTypeOne100_PFMHT100_IDTight_PFHT60", "", 'O', &PFMETTypeOne100_PFMHT100_IDTight_PFHT60, _branches);
  utils::book(_tree, name_, "Mu18_Mu9_SameSign", "", 'O', &Mu18_Mu9_SameSign, _branches);
  utils::book(_tree, name_, "Mu18_Mu9_SameSign_DZ", "", 'O', &Mu18_Mu9_SameSign_DZ, _branches);
  utils::book(_tree, name_, "Mu18_Mu9", "", 'O', &Mu18_Mu9, _branches);
  utils::book(_tree, name_, "Mu18_Mu9_DZ", "", 'O', &Mu18_Mu9_DZ, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_SameSign", "", 'O', &Mu20_Mu10_SameSign, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_SameSign_DZ", "", 'O', &Mu20_Mu10_SameSign_DZ, _branches);
  utils::book(_tree, name_, "Mu20_Mu10", "", 'O', &Mu20_Mu10, _branches);
  utils::book(_tree, name_, "Mu20_Mu10_DZ", "", 'O', &Mu20_Mu10_DZ, _branches);
  utils::book(_tree, name_, "Mu23_Mu12_SameSign", "", 'O', &Mu23_Mu12_SameSign, _branches);
  utils::book(_tree, name_, "Mu23_Mu12_SameSign_DZ", "", 'O', &Mu23_Mu12_SameSign_DZ, _branches);
  utils::book(_tree, name_, "Mu23_Mu12", "", 'O', &Mu23_Mu12, _branches);
  utils::book(_tree, name_, "Mu23_Mu12_DZ", "", 'O', &Mu23_Mu12_DZ, _branches);
  utils::book(_tree, name_, "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", "", 'O', &DoubleMu2_Jpsi_DoubleTrk1_Phi1p05, _branches);
  utils::book(_tree, name_, "DoubleMu2_Jpsi_DoubleTkMu0_Phi", "", 'O', &DoubleMu2_Jpsi_DoubleTkMu0_Phi, _branches);
  utils::book(_tree, name_, "DoubleMu3_DCA_PFMET50_PFMHT60", "", 'O', &DoubleMu3_DCA_PFMET50_PFMHT60, _branches);
  utils::book(_tree, name_, "TripleMu_5_3_3_Mass3p8_DCA", "", 'O', &TripleMu_5_3_3_Mass3p8_DCA, _branches);
  utils::book(_tree, name_, "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "", 'O', &QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches);
  utils::book(_tree, name_, "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "", 'O', &QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches);
  utils::book(_tree, name_, "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "", 'O', &QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches);
  utils::book(_tree, name_, "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", "", 'O', &QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2, _branches);
  utils::book(_tree, name_, "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", "", 'O', &QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2, _branches);
  utils::book(_tree, name_, "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", "", 'O', &QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2, _branches);
  utils::book(_tree, name_, "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", "", 'O', &QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2, _branches);
  utils::book(_tree, name_, "QuadPFJet98_83_71_15", "", 'O', &QuadPFJet98_83_71_15, _branches);
  utils::book(_tree, name_, "QuadPFJet103_88_75_15", "", 'O', &QuadPFJet103_88_75_15, _branches);
  utils::book(_tree, name_, "QuadPFJet105_88_76_15", "", 'O', &QuadPFJet105_88_76_15, _branches);
  utils::book(_tree, name_, "QuadPFJet111_90_80_15", "", 'O', &QuadPFJet111_90_80_15, _branches);
  utils::book(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", "", 'O', &AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17, _branches);
  utils::book(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", "", 'O', &AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1, _branches);
  utils::book(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", "", 'O', &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02, _branches);
  utils::book(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", "", 'O', &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2, _branches);
  utils::book(_tree, name_, "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", "", 'O', &AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4, _branches);
  utils::book(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", "", 'O', &Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55, _branches);
  utils::book(_tree, name_, "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", "", 'O', &Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto, _branches);
  utils::book(_tree, name_, "Mu12_IP6_part0", "", 'O', &Mu12_IP6_part0, _branches);
  utils::book(_tree, name_, "Mu12_IP6_part1", "", 'O', &Mu12_IP6_part1, _branches);
  utils::book(_tree, name_, "Mu12_IP6_part2", "", 'O', &Mu12_IP6_part2, _branches);
  utils::book(_tree, name_, "Mu12_IP6_part3", "", 'O', &Mu12_IP6_part3, _branches);
  utils::book(_tree, name_, "Mu12_IP6_part4", "", 'O', &Mu12_IP6_part4, _branches);
  utils::book(_tree, name_, "Mu9_IP5_part0", "", 'O', &Mu9_IP5_part0, _branches);
  utils::book(_tree, name_, "Mu9_IP5_part1", "", 'O', &Mu9_IP5_part1, _branches);
  utils::book(_tree, name_, "Mu9_IP5_part2", "", 'O', &Mu9_IP5_part2, _branches);
  utils::book(_tree, name_, "Mu9_IP5_part3", "", 'O', &Mu9_IP5_part3, _branches);
  utils::book(_tree, name_, "Mu9_IP5_part4", "", 'O', &Mu9_IP5_part4, _branches);
  utils::book(_tree, name_, "Mu7_IP4_part0", "", 'O', &Mu7_IP4_part0, _branches);
  utils::book(_tree, name_, "Mu7_IP4_part1", "", 'O', &Mu7_IP4_part1, _branches);
  utils::book(_tree, name_, "Mu7_IP4_part2", "", 'O', &Mu7_IP4_part2, _branches);
  utils::book(_tree, name_, "Mu7_IP4_part3", "", 'O', &Mu7_IP4_part3, _branches);
  utils::book(_tree, name_, "Mu7_IP4_part4", "", 'O', &Mu7_IP4_part4, _branches);
  utils::book(_tree, name_, "Mu9_IP4_part0", "", 'O', &Mu9_IP4_part0, _branches);
  utils::book(_tree, name_, "Mu9_IP4_part1", "", 'O', &Mu9_IP4_part1, _branches);
  utils::book(_tree, name_, "Mu9_IP4_part2", "", 'O', &Mu9_IP4_part2, _branches);
  utils::book(_tree, name_, "Mu9_IP4_part3", "", 'O', &Mu9_IP4_part3, _branches);
  utils::book(_tree, name_, "Mu9_IP4_part4", "", 'O', &Mu9_IP4_part4, _branches);
  utils::book(_tree, name_, "Mu8_IP5_part0", "", 'O', &Mu8_IP5_part0, _branches);
  utils::book(_tree, name_, "Mu8_IP5_part1", "", 'O', &Mu8_IP5_part1, _branches);
  utils::book(_tree, name_, "Mu8_IP5_part2", "", 'O', &Mu8_IP5_part2, _branches);
  utils::book(_tree, name_, "Mu8_IP5_part3", "", 'O', &Mu8_IP5_part3, _branches);
  utils::book(_tree, name_, "Mu8_IP5_part4", "", 'O', &Mu8_IP5_part4, _branches);
  utils::book(_tree, name_, "Mu8_IP6_part0", "", 'O', &Mu8_IP6_part0, _branches);
  utils::book(_tree, name_, "Mu8_IP6_part1", "", 'O', &Mu8_IP6_part1, _branches);
  utils::book(_tree, name_, "Mu8_IP6_part2", "", 'O', &Mu8_IP6_part2, _branches);
  utils::book(_tree, name_, "Mu8_IP6_part3", "", 'O', &Mu8_IP6_part3, _branches);
  utils::book(_tree, name_, "Mu8_IP6_part4", "", 'O', &Mu8_IP6_part4, _branches);
  utils::book(_tree, name_, "Mu9_IP6_part0", "", 'O', &Mu9_IP6_part0, _branches);
  utils::book(_tree, name_, "Mu9_IP6_part1", "", 'O', &Mu9_IP6_part1, _branches);
  utils::book(_tree, name_, "Mu9_IP6_part2", "", 'O', &Mu9_IP6_part2, _branches);
  utils::book(_tree, name_, "Mu9_IP6_part3", "", 'O', &Mu9_IP6_part3, _branches);
  utils::book(_tree, name_, "Mu9_IP6_part4", "", 'O', &Mu9_IP6_part4, _branches);
  utils::book(_tree, name_, "Mu8_IP3_part0", "", 'O', &Mu8_IP3_part0, _branches);
  utils::book(_tree, name_, "Mu8_IP3_part1", "", 'O', &Mu8_IP3_part1, _branches);
  utils::book(_tree, name_, "Mu8_IP3_part2", "", 'O', &Mu8_IP3_part2, _branches);
  utils::book(_tree, name_, "Mu8_IP3_part3", "", 'O', &Mu8_IP3_part3, _branches);
  utils::book(_tree, name_, "Mu8_IP3_part4", "", 'O', &Mu8_IP3_part4, _branches);
  utils::book(_tree, name_, "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", "", 'O', &QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, _branches);
  utils::book(_tree, name_, "TrkMu6NoFiltersNoVtx", "", 'O', &TrkMu6NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "TrkMu16NoFiltersNoVtx", "", 'O', &TrkMu16NoFiltersNoVtx, _branches);
  utils::book(_tree, name_, "DoubleTrkMu_16_6_NoFiltersNoVtx", "", 'O', &DoubleTrkMu_16_6_NoFiltersNoVtx, _branches);
}

void
panda::Triggers::doInit_()
{
  AK8PFJet360_TrimMass30 = false;
  AK8PFJet380_TrimMass30 = false;
  AK8PFJet400_TrimMass30 = false;
  AK8PFJet420_TrimMass30 = false;
  AK8PFHT750_TrimMass50 = false;
  AK8PFHT800_TrimMass50 = false;
  AK8PFHT850_TrimMass50 = false;
  AK8PFHT900_TrimMass50 = false;
  CaloJet500_NoJetID = false;
  CaloJet550_NoJetID = false;
  DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL = false;
  DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon = false;
  Trimuon5_3p5_2_Upsilon_Muon = false;
  TrimuonOpen_5_3p5_2_Upsilon_Muon = false;
  DoubleEle25_CaloIdL_MW = false;
  DoubleEle27_CaloIdL_MW = false;
  DoubleEle33_CaloIdL_MW = false;
  DoubleEle24_eta2p1_WPTight_Gsf = false;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 = false;
  DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 = false;
  Ele27_Ele37_CaloIdL_MW = false;
  Mu27_Ele37_CaloIdL_MW = false;
  Mu37_Ele27_CaloIdL_MW = false;
  Mu37_TkMu27 = false;
  DoubleMu4_3_Bs = false;
  DoubleMu4_3_Jpsi = false;
  DoubleMu4_JpsiTrk_Displaced = false;
  DoubleMu4_LowMassNonResonantTrk_Displaced = false;
  DoubleMu3_Trk_Tau3mu = false;
  DoubleMu3_TkMu_DsTau3Mu = false;
  DoubleMu4_PsiPrimeTrk_Displaced = false;
  DoubleMu4_Mass3p8_DZ_PFHT350 = false;
  Mu3_PFJet40 = false;
  Mu7p5_L2Mu2_Jpsi = false;
  Mu7p5_L2Mu2_Upsilon = false;
  Mu7p5_Track2_Jpsi = false;
  Mu7p5_Track3p5_Jpsi = false;
  Mu7p5_Track7_Jpsi = false;
  Mu7p5_Track2_Upsilon = false;
  Mu7p5_Track3p5_Upsilon = false;
  Mu7p5_Track7_Upsilon = false;
  Mu3_L1SingleMu5orSingleMu7 = false;
  DoublePhoton33_CaloIdL = false;
  DoublePhoton70 = false;
  DoublePhoton85 = false;
  Ele20_WPTight_Gsf = false;
  Ele15_WPLoose_Gsf = false;
  Ele17_WPLoose_Gsf = false;
  Ele20_WPLoose_Gsf = false;
  Ele20_eta2p1_WPLoose_Gsf = false;
  DiEle27_WPTightCaloOnly_L1DoubleEG = false;
  Ele27_WPTight_Gsf = false;
  Ele28_WPTight_Gsf = false;
  Ele30_WPTight_Gsf = false;
  Ele32_WPTight_Gsf = false;
  Ele35_WPTight_Gsf = false;
  Ele35_WPTight_Gsf_L1EGMT = false;
  Ele38_WPTight_Gsf = false;
  Ele40_WPTight_Gsf = false;
  Ele32_WPTight_Gsf_L1DoubleEG = false;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1 = false;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1 = false;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1 = false;
  Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = false;
  Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = false;
  Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = false;
  HT450_Beamspot = false;
  HT300_Beamspot = false;
  ZeroBias_Beamspot = false;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1 = false;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1 = false;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1 = false;
  IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = false;
  IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = false;
  IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = false;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = false;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = false;
  IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = false;
  IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = false;
  IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = false;
  IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = false;
  IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = false;
  IsoMu20 = false;
  IsoMu24 = false;
  IsoMu24_eta2p1 = false;
  IsoMu27 = false;
  IsoMu30 = false;
  UncorrectedJetE30_NoBPTX = false;
  UncorrectedJetE30_NoBPTX3BX = false;
  UncorrectedJetE60_NoBPTX3BX = false;
  UncorrectedJetE70_NoBPTX3BX = false;
  L1SingleMu18 = false;
  L1SingleMu25 = false;
  L2Mu10 = false;
  L2Mu10_NoVertex_NoBPTX3BX = false;
  L2Mu10_NoVertex_NoBPTX = false;
  L2Mu45_NoVertex_3Sta_NoBPTX3BX = false;
  L2Mu40_NoVertex_3Sta_NoBPTX3BX = false;
  L2Mu50 = false;
  L2Mu23NoVtx_2Cha = false;
  L2Mu23NoVtx_2Cha_CosmicSeed = false;
  DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4 = false;
  DoubleL2Mu30NoVtx_2Cha_Eta2p4 = false;
  DoubleL2Mu50 = false;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed = false;
  DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched = false;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed = false;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched = false;
  DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4 = false;
  DoubleL2Mu23NoVtx_2Cha = false;
  DoubleL2Mu23NoVtx_2Cha_NoL2Matched = false;
  DoubleL2Mu25NoVtx_2Cha = false;
  DoubleL2Mu25NoVtx_2Cha_NoL2Matched = false;
  DoubleL2Mu25NoVtx_2Cha_Eta2p4 = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = false;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = false;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 = false;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 = false;
  Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 = false;
  Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 = false;
  Mu25_TkMu0_Onia = false;
  Mu30_TkMu0_Psi = false;
  Mu30_TkMu0_Upsilon = false;
  Mu20_TkMu0_Phi = false;
  Mu25_TkMu0_Phi = false;
  Mu12 = false;
  Mu15 = false;
  Mu20 = false;
  Mu27 = false;
  Mu50 = false;
  Mu55 = false;
  OldMu100 = false;
  TkMu100 = false;
  DiPFJetAve40 = false;
  DiPFJetAve60 = false;
  DiPFJetAve80 = false;
  DiPFJetAve140 = false;
  DiPFJetAve200 = false;
  DiPFJetAve260 = false;
  DiPFJetAve320 = false;
  DiPFJetAve400 = false;
  DiPFJetAve500 = false;
  DiPFJetAve60_HFJEC = false;
  DiPFJetAve80_HFJEC = false;
  DiPFJetAve100_HFJEC = false;
  DiPFJetAve160_HFJEC = false;
  DiPFJetAve220_HFJEC = false;
  DiPFJetAve300_HFJEC = false;
  AK8PFJet15 = false;
  AK8PFJet25 = false;
  AK8PFJet40 = false;
  AK8PFJet60 = false;
  AK8PFJet80 = false;
  AK8PFJet140 = false;
  AK8PFJet200 = false;
  AK8PFJet260 = false;
  AK8PFJet320 = false;
  AK8PFJet400 = false;
  AK8PFJet450 = false;
  AK8PFJet500 = false;
  AK8PFJet550 = false;
  PFJet15 = false;
  PFJet25 = false;
  PFJet40 = false;
  PFJet60 = false;
  PFJet80 = false;
  PFJet140 = false;
  PFJet200 = false;
  PFJet260 = false;
  PFJet320 = false;
  PFJet400 = false;
  PFJet450 = false;
  PFJet500 = false;
  PFJet550 = false;
  PFJetFwd15 = false;
  PFJetFwd25 = false;
  PFJetFwd40 = false;
  PFJetFwd60 = false;
  PFJetFwd80 = false;
  PFJetFwd140 = false;
  PFJetFwd200 = false;
  PFJetFwd260 = false;
  PFJetFwd320 = false;
  PFJetFwd400 = false;
  PFJetFwd450 = false;
  PFJetFwd500 = false;
  AK8PFJetFwd15 = false;
  AK8PFJetFwd25 = false;
  AK8PFJetFwd40 = false;
  AK8PFJetFwd60 = false;
  AK8PFJetFwd80 = false;
  AK8PFJetFwd140 = false;
  AK8PFJetFwd200 = false;
  AK8PFJetFwd260 = false;
  AK8PFJetFwd320 = false;
  AK8PFJetFwd400 = false;
  AK8PFJetFwd450 = false;
  AK8PFJetFwd500 = false;
  PFHT180 = false;
  PFHT250 = false;
  PFHT370 = false;
  PFHT430 = false;
  PFHT510 = false;
  PFHT590 = false;
  PFHT680 = false;
  PFHT780 = false;
  PFHT890 = false;
  PFHT1050 = false;
  PFHT500_PFMET100_PFMHT100_IDTight = false;
  PFHT500_PFMET110_PFMHT110_IDTight = false;
  PFHT700_PFMET85_PFMHT85_IDTight = false;
  PFHT700_PFMET95_PFMHT95_IDTight = false;
  PFHT800_PFMET75_PFMHT75_IDTight = false;
  PFHT800_PFMET85_PFMHT85_IDTight = false;
  PFMET110_PFMHT110_IDTight = false;
  PFMET120_PFMHT120_IDTight = false;
  PFMET130_PFMHT130_IDTight = false;
  PFMET140_PFMHT140_IDTight = false;
  PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1 = false;
  PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1 = false;
  PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1 = false;
  PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1 = false;
  PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1 = false;
  PFMET120_PFMHT120_IDTight_PFHT60 = false;
  PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 = false;
  PFMETTypeOne120_PFMHT120_IDTight_PFHT60 = false;
  PFMETTypeOne110_PFMHT110_IDTight = false;
  PFMETTypeOne120_PFMHT120_IDTight = false;
  PFMETTypeOne130_PFMHT130_IDTight = false;
  PFMETTypeOne140_PFMHT140_IDTight = false;
  PFMETNoMu110_PFMHTNoMu110_IDTight = false;
  PFMETNoMu120_PFMHTNoMu120_IDTight = false;
  PFMETNoMu130_PFMHTNoMu130_IDTight = false;
  PFMETNoMu140_PFMHTNoMu140_IDTight = false;
  MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight = false;
  MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight = false;
  MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight = false;
  MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight = false;
  L1ETMHadSeeds = false;
  CaloMHT90 = false;
  CaloMET80_NotCleaned = false;
  CaloMET90_NotCleaned = false;
  CaloMET100_NotCleaned = false;
  CaloMET110_NotCleaned = false;
  CaloMET250_NotCleaned = false;
  CaloMET70_HBHECleaned = false;
  CaloMET80_HBHECleaned = false;
  CaloMET90_HBHECleaned = false;
  CaloMET100_HBHECleaned = false;
  CaloMET250_HBHECleaned = false;
  CaloMET300_HBHECleaned = false;
  CaloMET350_HBHECleaned = false;
  PFMET200_NotCleaned = false;
  PFMET200_HBHECleaned = false;
  PFMET250_HBHECleaned = false;
  PFMET300_HBHECleaned = false;
  PFMET200_HBHE_BeamHaloCleaned = false;
  PFMETTypeOne200_HBHE_BeamHaloCleaned = false;
  MET105_IsoTrk50 = false;
  MET120_IsoTrk50 = false;
  SingleJet30_Mu12_SinglePFJet40 = false;
  Mu12_DoublePFJets40_CaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets100_CaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets200_CaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets350_CaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = false;
  Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = false;
  DoublePFJets40_CaloBTagDeepCSV_p71 = false;
  DoublePFJets100_CaloBTagDeepCSV_p71 = false;
  DoublePFJets200_CaloBTagDeepCSV_p71 = false;
  DoublePFJets350_CaloBTagDeepCSV_p71 = false;
  DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = false;
  DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = false;
  Photon300_NoHE = false;
  Mu8_TrkIsoVVL = false;
  Mu8_DiEle12_CaloIdL_TrackIdL_DZ = false;
  Mu8_DiEle12_CaloIdL_TrackIdL = false;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ = false;
  Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30 = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30 = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5 = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5 = false;
  Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = false;
  Mu17_TrkIsoVVL = false;
  Mu19_TrkIsoVVL = false;
  BTagMu_AK4DiJet20_Mu5 = false;
  BTagMu_AK4DiJet40_Mu5 = false;
  BTagMu_AK4DiJet70_Mu5 = false;
  BTagMu_AK4DiJet110_Mu5 = false;
  BTagMu_AK4DiJet170_Mu5 = false;
  BTagMu_AK4Jet300_Mu5 = false;
  BTagMu_AK8DiJet170_Mu5 = false;
  BTagMu_AK8Jet170_DoubleMu5 = false;
  BTagMu_AK8Jet300_Mu5 = false;
  BTagMu_AK4DiJet20_Mu5_noalgo = false;
  BTagMu_AK4DiJet40_Mu5_noalgo = false;
  BTagMu_AK4DiJet70_Mu5_noalgo = false;
  BTagMu_AK4DiJet110_Mu5_noalgo = false;
  BTagMu_AK4DiJet170_Mu5_noalgo = false;
  BTagMu_AK4Jet300_Mu5_noalgo = false;
  BTagMu_AK8DiJet170_Mu5_noalgo = false;
  BTagMu_AK8Jet170_DoubleMu5_noalgo = false;
  BTagMu_AK8Jet300_Mu5_noalgo = false;
  Ele15_Ele8_CaloIdL_TrackIdL_IsoVL = false;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = false;
  Ele23_Ele12_CaloIdL_TrackIdL_IsoVL = false;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = false;
  Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL = false;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = false;
  Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = false;
  Mu12_DoublePhoton20 = false;
  TriplePhoton_20_20_20_CaloIdLV2 = false;
  TriplePhoton_20_20_20_CaloIdLV2_R9IdVL = false;
  TriplePhoton_30_30_10_CaloIdLV2 = false;
  TriplePhoton_30_30_10_CaloIdLV2_R9IdVL = false;
  TriplePhoton_35_35_5_CaloIdLV2_R9IdVL = false;
  Photon20 = false;
  Photon33 = false;
  Photon50 = false;
  Photon75 = false;
  Photon90 = false;
  Photon120 = false;
  Photon150 = false;
  Photon175 = false;
  Photon200 = false;
  Photon100EB_TightID_TightIso = false;
  Photon110EB_TightID_TightIso = false;
  Photon120EB_TightID_TightIso = false;
  Photon100EBHE10 = false;
  Photon100EEHE10 = false;
  Photon100EE_TightID_TightIso = false;
  Photon50_R9Id90_HE10_IsoM = false;
  Photon75_R9Id90_HE10_IsoM = false;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 = false;
  Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 = false;
  Photon90_R9Id90_HE10_IsoM = false;
  Photon120_R9Id90_HE10_IsoM = false;
  Photon165_R9Id90_HE10_IsoM = false;
  Photon90_CaloIdL_PFHT700 = false;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 = false;
  Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 = false;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 = false;
  Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 = false;
  Photon35_TwoProngs35 = false;
  IsoMu24_TwoProngs35 = false;
  Dimuon0_Jpsi_L1_NoOS = false;
  Dimuon0_Jpsi_NoVertexing_NoOS = false;
  Dimuon0_Jpsi = false;
  Dimuon0_Jpsi_NoVertexing = false;
  Dimuon0_Jpsi_L1_4R_0er1p5R = false;
  Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R = false;
  Dimuon0_Jpsi3p5_Muon2 = false;
  Dimuon0_Upsilon_L1_4p5 = false;
  Dimuon0_Upsilon_L1_5 = false;
  Dimuon0_Upsilon_L1_4p5NoOS = false;
  Dimuon0_Upsilon_L1_4p5er2p0 = false;
  Dimuon0_Upsilon_L1_4p5er2p0M = false;
  Dimuon0_Upsilon_NoVertexing = false;
  Dimuon0_Upsilon_L1_5M = false;
  Dimuon0_LowMass_L1_0er1p5R = false;
  Dimuon0_LowMass_L1_0er1p5 = false;
  Dimuon0_LowMass = false;
  Dimuon0_LowMass_L1_4 = false;
  Dimuon0_LowMass_L1_4R = false;
  Dimuon0_LowMass_L1_TM530 = false;
  Dimuon0_Upsilon_Muon_L1_TM0 = false;
  Dimuon0_Upsilon_Muon_NoL1Mass = false;
  TripleMu_5_3_3_Mass3p8_DZ = false;
  TripleMu_10_5_5_DZ = false;
  TripleMu_12_10_5 = false;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15 = false;
  Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 = false;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 = false;
  Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 = false;
  DoubleMu3_DZ_PFMET50_PFMHT60 = false;
  DoubleMu3_DZ_PFMET70_PFMHT70 = false;
  DoubleMu3_DZ_PFMET90_PFMHT90 = false;
  DoubleMu3_Trk_Tau3mu_NoL1Mass = false;
  DoubleMu4_Jpsi_Displaced = false;
  DoubleMu4_Jpsi_NoVertexing = false;
  DoubleMu4_JpsiTrkTrk_Displaced = false;
  DoubleMu43NoFiltersNoVtx = false;
  DoubleMu48NoFiltersNoVtx = false;
  Mu43NoFiltersNoVtx_Photon43_CaloIdL = false;
  Mu48NoFiltersNoVtx_Photon48_CaloIdL = false;
  Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL = false;
  Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL = false;
  DoubleMu33NoFiltersNoVtxDisplaced = false;
  DoubleMu40NoFiltersNoVtxDisplaced = false;
  DoubleMu20_7_Mass0to30_L1_DM4 = false;
  DoubleMu20_7_Mass0to30_L1_DM4EG = false;
  HT425 = false;
  HT430_DisplacedDijet40_DisplacedTrack = false;
  HT500_DisplacedDijet40_DisplacedTrack = false;
  HT430_DisplacedDijet60_DisplacedTrack = false;
  HT400_DisplacedDijet40_DisplacedTrack = false;
  HT650_DisplacedDijet60_Inclusive = false;
  HT550_DisplacedDijet60_Inclusive = false;
  DiJet110_35_Mjj650_PFMET110 = false;
  DiJet110_35_Mjj650_PFMET120 = false;
  DiJet110_35_Mjj650_PFMET130 = false;
  TripleJet110_35_35_Mjj650_PFMET110 = false;
  TripleJet110_35_35_Mjj650_PFMET120 = false;
  TripleJet110_35_35_Mjj650_PFMET130 = false;
  Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned = false;
  Ele28_eta2p1_WPTight_Gsf_HT150 = false;
  Ele28_HighEta_SC20_Mass55 = false;
  DoubleMu20_7_Mass0to30_Photon23 = false;
  Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = false;
  Ele15_IsoVVVL_PFHT450_PFMET50 = false;
  Ele15_IsoVVVL_PFHT450 = false;
  Ele50_IsoVVVL_PFHT450 = false;
  Ele15_IsoVVVL_PFHT600 = false;
  Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = false;
  Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = false;
  Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 = false;
  Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = false;
  Mu15_IsoVVVL_PFHT450_PFMET50 = false;
  Mu15_IsoVVVL_PFHT450 = false;
  Mu50_IsoVVVL_PFHT450 = false;
  Mu15_IsoVVVL_PFHT600 = false;
  Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight = false;
  Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight = false;
  Dimuon10_PsiPrime_Barrel_Seagulls = false;
  Dimuon20_Jpsi_Barrel_Seagulls = false;
  Dimuon12_Upsilon_y1p4 = false;
  Dimuon14_Phi_Barrel_Seagulls = false;
  Dimuon18_PsiPrime = false;
  Dimuon25_Jpsi = false;
  Dimuon18_PsiPrime_noCorrL1 = false;
  Dimuon24_Upsilon_noCorrL1 = false;
  Dimuon24_Phi_noCorrL1 = false;
  Dimuon25_Jpsi_noCorrL1 = false;
  DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8 = false;
  DiMu9_Ele9_CaloIdL_TrackIdL_DZ = false;
  DiMu9_Ele9_CaloIdL_TrackIdL = false;
  DoubleIsoMu20_eta2p1 = false;
  TrkMu12_DoubleTrkMu5NoFiltersNoVtx = false;
  TrkMu16_DoubleTrkMu6NoFiltersNoVtx = false;
  TrkMu17_DoubleTrkMu8NoFiltersNoVtx = false;
  Mu8 = false;
  Mu17 = false;
  Mu19 = false;
  Mu17_Photon30_IsoCaloId = false;
  Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 = false;
  Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 = false;
  Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30 = false;
  Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 = false;
  Ele8_CaloIdM_TrackIdM_PFJet30 = false;
  Ele17_CaloIdM_TrackIdM_PFJet30 = false;
  Ele23_CaloIdM_TrackIdM_PFJet30 = false;
  Ele50_CaloIdVT_GsfTrkIdT_PFJet165 = false;
  Ele115_CaloIdVT_GsfTrkIdT = false;
  Ele135_CaloIdVT_GsfTrkIdT = false;
  Ele145_CaloIdVT_GsfTrkIdT = false;
  Ele200_CaloIdVT_GsfTrkIdT = false;
  Ele250_CaloIdVT_GsfTrkIdT = false;
  Ele300_CaloIdVT_GsfTrkIdT = false;
  PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5 = false;
  PFHT330PT30_QuadPFJet_75_60_45_40 = false;
  PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94 = false;
  PFHT400_SixPFJet32 = false;
  PFHT450_SixPFJet36_PFBTagDeepCSV_1p59 = false;
  PFHT450_SixPFJet36 = false;
  PFHT350 = false;
  PFHT350MinPFJet15 = false;
  Photon60_R9Id90_CaloIdL_IsoL = false;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL = false;
  Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 = false;
  ECALHT800 = false;
  DiSC30_18_EIso_AND_HE_Mass70 = false;
  Physics = false;
  Physics_part0 = false;
  Physics_part1 = false;
  Physics_part2 = false;
  Physics_part3 = false;
  Physics_part4 = false;
  Physics_part5 = false;
  Physics_part6 = false;
  Physics_part7 = false;
  Random = false;
  ZeroBias = false;
  ZeroBias_Alignment = false;
  ZeroBias_part0 = false;
  ZeroBias_part1 = false;
  ZeroBias_part2 = false;
  ZeroBias_part3 = false;
  ZeroBias_part4 = false;
  ZeroBias_part5 = false;
  ZeroBias_part6 = false;
  ZeroBias_part7 = false;
  AK4CaloJet30 = false;
  AK4CaloJet40 = false;
  AK4CaloJet50 = false;
  AK4CaloJet80 = false;
  AK4CaloJet100 = false;
  AK4CaloJet120 = false;
  AK4PFJet30 = false;
  AK4PFJet50 = false;
  AK4PFJet80 = false;
  AK4PFJet100 = false;
  AK4PFJet120 = false;
  SinglePhoton10_Eta3p1ForPPRef = false;
  SinglePhoton20_Eta3p1ForPPRef = false;
  SinglePhoton30_Eta3p1ForPPRef = false;
  Photon20_HoverELoose = false;
  Photon30_HoverELoose = false;
  EcalCalibration = false;
  HcalCalibration = false;
  L1UnpairedBunchBptxMinus = false;
  L1UnpairedBunchBptxPlus = false;
  L1NotBptxOR = false;
  L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 = false;
  CDC_L2cosmic_5_er1p0 = false;
  CDC_L2cosmic_5p5_er1p0 = false;
  HcalNZS = false;
  HcalPhiSym = false;
  HcalIsolatedbunch = false;
  IsoTrackHB = false;
  IsoTrackHE = false;
  ZeroBias_FirstCollisionAfterAbortGap = false;
  ZeroBias_IsolatedBunches = false;
  ZeroBias_FirstCollisionInTrain = false;
  ZeroBias_LastCollisionInTrain = false;
  ZeroBias_FirstBXAfterTrain = false;
  IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140 = false;
  MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = false;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr = false;
  MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 = false;
  MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1 = false;
  MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1 = false;
  Ele16_Ele12_Ele8_CaloIdL_TrackIdL = false;
  Rsq0p35 = false;
  Rsq0p40 = false;
  RsqMR300_Rsq0p09_MR200 = false;
  RsqMR320_Rsq0p09_MR200 = false;
  RsqMR300_Rsq0p09_MR200_4jet = false;
  RsqMR320_Rsq0p09_MR200_4jet = false;
  IsoMu27_MET90 = false;
  DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = false;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = false;
  DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = false;
  DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = false;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = false;
  DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = false;
  DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = false;
  DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = false;
  VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1 = false;
  VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1 = false;
  VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1 = false;
  Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 = false;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 = false;
  Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 = false;
  PFMET100_PFMHT100_IDTight_PFHT60 = false;
  PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 = false;
  PFMETTypeOne100_PFMHT100_IDTight_PFHT60 = false;
  Mu18_Mu9_SameSign = false;
  Mu18_Mu9_SameSign_DZ = false;
  Mu18_Mu9 = false;
  Mu18_Mu9_DZ = false;
  Mu20_Mu10_SameSign = false;
  Mu20_Mu10_SameSign_DZ = false;
  Mu20_Mu10 = false;
  Mu20_Mu10_DZ = false;
  Mu23_Mu12_SameSign = false;
  Mu23_Mu12_SameSign_DZ = false;
  Mu23_Mu12 = false;
  Mu23_Mu12_DZ = false;
  DoubleMu2_Jpsi_DoubleTrk1_Phi1p05 = false;
  DoubleMu2_Jpsi_DoubleTkMu0_Phi = false;
  DoubleMu3_DCA_PFMET50_PFMHT60 = false;
  TripleMu_5_3_3_Mass3p8_DCA = false;
  QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = false;
  QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = false;
  QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = false;
  QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2 = false;
  QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2 = false;
  QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2 = false;
  QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2 = false;
  QuadPFJet98_83_71_15 = false;
  QuadPFJet103_88_75_15 = false;
  QuadPFJet105_88_76_15 = false;
  QuadPFJet111_90_80_15 = false;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17 = false;
  AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1 = false;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02 = false;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2 = false;
  AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 = false;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 = false;
  Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto = false;
  Mu12_IP6_part0 = false;
  Mu12_IP6_part1 = false;
  Mu12_IP6_part2 = false;
  Mu12_IP6_part3 = false;
  Mu12_IP6_part4 = false;
  Mu9_IP5_part0 = false;
  Mu9_IP5_part1 = false;
  Mu9_IP5_part2 = false;
  Mu9_IP5_part3 = false;
  Mu9_IP5_part4 = false;
  Mu7_IP4_part0 = false;
  Mu7_IP4_part1 = false;
  Mu7_IP4_part2 = false;
  Mu7_IP4_part3 = false;
  Mu7_IP4_part4 = false;
  Mu9_IP4_part0 = false;
  Mu9_IP4_part1 = false;
  Mu9_IP4_part2 = false;
  Mu9_IP4_part3 = false;
  Mu9_IP4_part4 = false;
  Mu8_IP5_part0 = false;
  Mu8_IP5_part1 = false;
  Mu8_IP5_part2 = false;
  Mu8_IP5_part3 = false;
  Mu8_IP5_part4 = false;
  Mu8_IP6_part0 = false;
  Mu8_IP6_part1 = false;
  Mu8_IP6_part2 = false;
  Mu8_IP6_part3 = false;
  Mu8_IP6_part4 = false;
  Mu9_IP6_part0 = false;
  Mu9_IP6_part1 = false;
  Mu9_IP6_part2 = false;
  Mu9_IP6_part3 = false;
  Mu9_IP6_part4 = false;
  Mu8_IP3_part0 = false;
  Mu8_IP3_part1 = false;
  Mu8_IP3_part2 = false;
  Mu8_IP3_part3 = false;
  Mu8_IP3_part4 = false;
  QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = false;
  TrkMu6NoFiltersNoVtx = false;
  TrkMu16NoFiltersNoVtx = false;
  DoubleTrkMu_16_6_NoFiltersNoVtx = false;

  /* BEGIN CUSTOM Triggers.cc.doInit_ */
  /* END CUSTOM */
}

panda::utils::BranchList
panda::Triggers::doGetBranchNames_(Bool_t _fullName) const
{
  if (_fullName)
    return getListOfBranches().fullNames(name_);
  else
    return getListOfBranches().fullNames();
}

void
panda::Triggers::print(std::ostream& _out/* = std::cout*/, UInt_t _level/* = 1*/) const
{
  /* BEGIN CUSTOM Triggers.cc.print */
  dump(_out);
  /* END CUSTOM */
}

void
panda::Triggers::dump(std::ostream& _out/* = std::cout*/) const
{
  _out << "AK8PFJet360_TrimMass30 = " << AK8PFJet360_TrimMass30 << std::endl;
  _out << "AK8PFJet380_TrimMass30 = " << AK8PFJet380_TrimMass30 << std::endl;
  _out << "AK8PFJet400_TrimMass30 = " << AK8PFJet400_TrimMass30 << std::endl;
  _out << "AK8PFJet420_TrimMass30 = " << AK8PFJet420_TrimMass30 << std::endl;
  _out << "AK8PFHT750_TrimMass50 = " << AK8PFHT750_TrimMass50 << std::endl;
  _out << "AK8PFHT800_TrimMass50 = " << AK8PFHT800_TrimMass50 << std::endl;
  _out << "AK8PFHT850_TrimMass50 = " << AK8PFHT850_TrimMass50 << std::endl;
  _out << "AK8PFHT900_TrimMass50 = " << AK8PFHT900_TrimMass50 << std::endl;
  _out << "CaloJet500_NoJetID = " << CaloJet500_NoJetID << std::endl;
  _out << "CaloJet550_NoJetID = " << CaloJet550_NoJetID << std::endl;
  _out << "DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL = " << DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL << std::endl;
  _out << "DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon = " << DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon << std::endl;
  _out << "Trimuon5_3p5_2_Upsilon_Muon = " << Trimuon5_3p5_2_Upsilon_Muon << std::endl;
  _out << "TrimuonOpen_5_3p5_2_Upsilon_Muon = " << TrimuonOpen_5_3p5_2_Upsilon_Muon << std::endl;
  _out << "DoubleEle25_CaloIdL_MW = " << DoubleEle25_CaloIdL_MW << std::endl;
  _out << "DoubleEle27_CaloIdL_MW = " << DoubleEle27_CaloIdL_MW << std::endl;
  _out << "DoubleEle33_CaloIdL_MW = " << DoubleEle33_CaloIdL_MW << std::endl;
  _out << "DoubleEle24_eta2p1_WPTight_Gsf = " << DoubleEle24_eta2p1_WPTight_Gsf << std::endl;
  _out << "DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 = " << DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350 << std::endl;
  _out << "DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 = " << DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350 << std::endl;
  _out << "Ele27_Ele37_CaloIdL_MW = " << Ele27_Ele37_CaloIdL_MW << std::endl;
  _out << "Mu27_Ele37_CaloIdL_MW = " << Mu27_Ele37_CaloIdL_MW << std::endl;
  _out << "Mu37_Ele27_CaloIdL_MW = " << Mu37_Ele27_CaloIdL_MW << std::endl;
  _out << "Mu37_TkMu27 = " << Mu37_TkMu27 << std::endl;
  _out << "DoubleMu4_3_Bs = " << DoubleMu4_3_Bs << std::endl;
  _out << "DoubleMu4_3_Jpsi = " << DoubleMu4_3_Jpsi << std::endl;
  _out << "DoubleMu4_JpsiTrk_Displaced = " << DoubleMu4_JpsiTrk_Displaced << std::endl;
  _out << "DoubleMu4_LowMassNonResonantTrk_Displaced = " << DoubleMu4_LowMassNonResonantTrk_Displaced << std::endl;
  _out << "DoubleMu3_Trk_Tau3mu = " << DoubleMu3_Trk_Tau3mu << std::endl;
  _out << "DoubleMu3_TkMu_DsTau3Mu = " << DoubleMu3_TkMu_DsTau3Mu << std::endl;
  _out << "DoubleMu4_PsiPrimeTrk_Displaced = " << DoubleMu4_PsiPrimeTrk_Displaced << std::endl;
  _out << "DoubleMu4_Mass3p8_DZ_PFHT350 = " << DoubleMu4_Mass3p8_DZ_PFHT350 << std::endl;
  _out << "Mu3_PFJet40 = " << Mu3_PFJet40 << std::endl;
  _out << "Mu7p5_L2Mu2_Jpsi = " << Mu7p5_L2Mu2_Jpsi << std::endl;
  _out << "Mu7p5_L2Mu2_Upsilon = " << Mu7p5_L2Mu2_Upsilon << std::endl;
  _out << "Mu7p5_Track2_Jpsi = " << Mu7p5_Track2_Jpsi << std::endl;
  _out << "Mu7p5_Track3p5_Jpsi = " << Mu7p5_Track3p5_Jpsi << std::endl;
  _out << "Mu7p5_Track7_Jpsi = " << Mu7p5_Track7_Jpsi << std::endl;
  _out << "Mu7p5_Track2_Upsilon = " << Mu7p5_Track2_Upsilon << std::endl;
  _out << "Mu7p5_Track3p5_Upsilon = " << Mu7p5_Track3p5_Upsilon << std::endl;
  _out << "Mu7p5_Track7_Upsilon = " << Mu7p5_Track7_Upsilon << std::endl;
  _out << "Mu3_L1SingleMu5orSingleMu7 = " << Mu3_L1SingleMu5orSingleMu7 << std::endl;
  _out << "DoublePhoton33_CaloIdL = " << DoublePhoton33_CaloIdL << std::endl;
  _out << "DoublePhoton70 = " << DoublePhoton70 << std::endl;
  _out << "DoublePhoton85 = " << DoublePhoton85 << std::endl;
  _out << "Ele20_WPTight_Gsf = " << Ele20_WPTight_Gsf << std::endl;
  _out << "Ele15_WPLoose_Gsf = " << Ele15_WPLoose_Gsf << std::endl;
  _out << "Ele17_WPLoose_Gsf = " << Ele17_WPLoose_Gsf << std::endl;
  _out << "Ele20_WPLoose_Gsf = " << Ele20_WPLoose_Gsf << std::endl;
  _out << "Ele20_eta2p1_WPLoose_Gsf = " << Ele20_eta2p1_WPLoose_Gsf << std::endl;
  _out << "DiEle27_WPTightCaloOnly_L1DoubleEG = " << DiEle27_WPTightCaloOnly_L1DoubleEG << std::endl;
  _out << "Ele27_WPTight_Gsf = " << Ele27_WPTight_Gsf << std::endl;
  _out << "Ele28_WPTight_Gsf = " << Ele28_WPTight_Gsf << std::endl;
  _out << "Ele30_WPTight_Gsf = " << Ele30_WPTight_Gsf << std::endl;
  _out << "Ele32_WPTight_Gsf = " << Ele32_WPTight_Gsf << std::endl;
  _out << "Ele35_WPTight_Gsf = " << Ele35_WPTight_Gsf << std::endl;
  _out << "Ele35_WPTight_Gsf_L1EGMT = " << Ele35_WPTight_Gsf_L1EGMT << std::endl;
  _out << "Ele38_WPTight_Gsf = " << Ele38_WPTight_Gsf << std::endl;
  _out << "Ele40_WPTight_Gsf = " << Ele40_WPTight_Gsf << std::endl;
  _out << "Ele32_WPTight_Gsf_L1DoubleEG = " << Ele32_WPTight_Gsf_L1DoubleEG << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1 << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1 << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1 << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 << std::endl;
  _out << "Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 = " << Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1 << std::endl;
  _out << "HT450_Beamspot = " << HT450_Beamspot << std::endl;
  _out << "HT300_Beamspot = " << HT300_Beamspot << std::endl;
  _out << "ZeroBias_Beamspot = " << ZeroBias_Beamspot << std::endl;
  _out << "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1 = " << IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1 << std::endl;
  _out << "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1 = " << IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1 << std::endl;
  _out << "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1 = " << IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1 << std::endl;
  _out << "IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = " << IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 << std::endl;
  _out << "IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = " << IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 << std::endl;
  _out << "IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 = " << IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1 << std::endl;
  _out << "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = " << IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 << std::endl;
  _out << "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = " << IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 << std::endl;
  _out << "IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 = " << IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1 << std::endl;
  _out << "IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 = " << IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1 << std::endl;
  _out << "IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = " << IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 << std::endl;
  _out << "IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = " << IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 << std::endl;
  _out << "IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 = " << IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1 << std::endl;
  _out << "IsoMu20 = " << IsoMu20 << std::endl;
  _out << "IsoMu24 = " << IsoMu24 << std::endl;
  _out << "IsoMu24_eta2p1 = " << IsoMu24_eta2p1 << std::endl;
  _out << "IsoMu27 = " << IsoMu27 << std::endl;
  _out << "IsoMu30 = " << IsoMu30 << std::endl;
  _out << "UncorrectedJetE30_NoBPTX = " << UncorrectedJetE30_NoBPTX << std::endl;
  _out << "UncorrectedJetE30_NoBPTX3BX = " << UncorrectedJetE30_NoBPTX3BX << std::endl;
  _out << "UncorrectedJetE60_NoBPTX3BX = " << UncorrectedJetE60_NoBPTX3BX << std::endl;
  _out << "UncorrectedJetE70_NoBPTX3BX = " << UncorrectedJetE70_NoBPTX3BX << std::endl;
  _out << "L1SingleMu18 = " << L1SingleMu18 << std::endl;
  _out << "L1SingleMu25 = " << L1SingleMu25 << std::endl;
  _out << "L2Mu10 = " << L2Mu10 << std::endl;
  _out << "L2Mu10_NoVertex_NoBPTX3BX = " << L2Mu10_NoVertex_NoBPTX3BX << std::endl;
  _out << "L2Mu10_NoVertex_NoBPTX = " << L2Mu10_NoVertex_NoBPTX << std::endl;
  _out << "L2Mu45_NoVertex_3Sta_NoBPTX3BX = " << L2Mu45_NoVertex_3Sta_NoBPTX3BX << std::endl;
  _out << "L2Mu40_NoVertex_3Sta_NoBPTX3BX = " << L2Mu40_NoVertex_3Sta_NoBPTX3BX << std::endl;
  _out << "L2Mu50 = " << L2Mu50 << std::endl;
  _out << "L2Mu23NoVtx_2Cha = " << L2Mu23NoVtx_2Cha << std::endl;
  _out << "L2Mu23NoVtx_2Cha_CosmicSeed = " << L2Mu23NoVtx_2Cha_CosmicSeed << std::endl;
  _out << "DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4 = " << DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4 << std::endl;
  _out << "DoubleL2Mu30NoVtx_2Cha_Eta2p4 = " << DoubleL2Mu30NoVtx_2Cha_Eta2p4 << std::endl;
  _out << "DoubleL2Mu50 = " << DoubleL2Mu50 << std::endl;
  _out << "DoubleL2Mu23NoVtx_2Cha_CosmicSeed = " << DoubleL2Mu23NoVtx_2Cha_CosmicSeed << std::endl;
  _out << "DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched = " << DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha_CosmicSeed = " << DoubleL2Mu25NoVtx_2Cha_CosmicSeed << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched = " << DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4 = " << DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4 << std::endl;
  _out << "DoubleL2Mu23NoVtx_2Cha = " << DoubleL2Mu23NoVtx_2Cha << std::endl;
  _out << "DoubleL2Mu23NoVtx_2Cha_NoL2Matched = " << DoubleL2Mu23NoVtx_2Cha_NoL2Matched << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha = " << DoubleL2Mu25NoVtx_2Cha << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha_NoL2Matched = " << DoubleL2Mu25NoVtx_2Cha_NoL2Matched << std::endl;
  _out << "DoubleL2Mu25NoVtx_2Cha_Eta2p4 = " << DoubleL2Mu25NoVtx_2Cha_Eta2p4 << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL << std::endl;
  _out << "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL = " << Mu19_TrkIsoVVL_Mu9_TrkIsoVVL << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ << std::endl;
  _out << "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ = " << Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8 << std::endl;
  _out << "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 = " << Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8 << std::endl;
  _out << "Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 = " << Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8 << std::endl;
  _out << "Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 = " << Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8 << std::endl;
  _out << "Mu25_TkMu0_Onia = " << Mu25_TkMu0_Onia << std::endl;
  _out << "Mu30_TkMu0_Psi = " << Mu30_TkMu0_Psi << std::endl;
  _out << "Mu30_TkMu0_Upsilon = " << Mu30_TkMu0_Upsilon << std::endl;
  _out << "Mu20_TkMu0_Phi = " << Mu20_TkMu0_Phi << std::endl;
  _out << "Mu25_TkMu0_Phi = " << Mu25_TkMu0_Phi << std::endl;
  _out << "Mu12 = " << Mu12 << std::endl;
  _out << "Mu15 = " << Mu15 << std::endl;
  _out << "Mu20 = " << Mu20 << std::endl;
  _out << "Mu27 = " << Mu27 << std::endl;
  _out << "Mu50 = " << Mu50 << std::endl;
  _out << "Mu55 = " << Mu55 << std::endl;
  _out << "OldMu100 = " << OldMu100 << std::endl;
  _out << "TkMu100 = " << TkMu100 << std::endl;
  _out << "DiPFJetAve40 = " << DiPFJetAve40 << std::endl;
  _out << "DiPFJetAve60 = " << DiPFJetAve60 << std::endl;
  _out << "DiPFJetAve80 = " << DiPFJetAve80 << std::endl;
  _out << "DiPFJetAve140 = " << DiPFJetAve140 << std::endl;
  _out << "DiPFJetAve200 = " << DiPFJetAve200 << std::endl;
  _out << "DiPFJetAve260 = " << DiPFJetAve260 << std::endl;
  _out << "DiPFJetAve320 = " << DiPFJetAve320 << std::endl;
  _out << "DiPFJetAve400 = " << DiPFJetAve400 << std::endl;
  _out << "DiPFJetAve500 = " << DiPFJetAve500 << std::endl;
  _out << "DiPFJetAve60_HFJEC = " << DiPFJetAve60_HFJEC << std::endl;
  _out << "DiPFJetAve80_HFJEC = " << DiPFJetAve80_HFJEC << std::endl;
  _out << "DiPFJetAve100_HFJEC = " << DiPFJetAve100_HFJEC << std::endl;
  _out << "DiPFJetAve160_HFJEC = " << DiPFJetAve160_HFJEC << std::endl;
  _out << "DiPFJetAve220_HFJEC = " << DiPFJetAve220_HFJEC << std::endl;
  _out << "DiPFJetAve300_HFJEC = " << DiPFJetAve300_HFJEC << std::endl;
  _out << "AK8PFJet15 = " << AK8PFJet15 << std::endl;
  _out << "AK8PFJet25 = " << AK8PFJet25 << std::endl;
  _out << "AK8PFJet40 = " << AK8PFJet40 << std::endl;
  _out << "AK8PFJet60 = " << AK8PFJet60 << std::endl;
  _out << "AK8PFJet80 = " << AK8PFJet80 << std::endl;
  _out << "AK8PFJet140 = " << AK8PFJet140 << std::endl;
  _out << "AK8PFJet200 = " << AK8PFJet200 << std::endl;
  _out << "AK8PFJet260 = " << AK8PFJet260 << std::endl;
  _out << "AK8PFJet320 = " << AK8PFJet320 << std::endl;
  _out << "AK8PFJet400 = " << AK8PFJet400 << std::endl;
  _out << "AK8PFJet450 = " << AK8PFJet450 << std::endl;
  _out << "AK8PFJet500 = " << AK8PFJet500 << std::endl;
  _out << "AK8PFJet550 = " << AK8PFJet550 << std::endl;
  _out << "PFJet15 = " << PFJet15 << std::endl;
  _out << "PFJet25 = " << PFJet25 << std::endl;
  _out << "PFJet40 = " << PFJet40 << std::endl;
  _out << "PFJet60 = " << PFJet60 << std::endl;
  _out << "PFJet80 = " << PFJet80 << std::endl;
  _out << "PFJet140 = " << PFJet140 << std::endl;
  _out << "PFJet200 = " << PFJet200 << std::endl;
  _out << "PFJet260 = " << PFJet260 << std::endl;
  _out << "PFJet320 = " << PFJet320 << std::endl;
  _out << "PFJet400 = " << PFJet400 << std::endl;
  _out << "PFJet450 = " << PFJet450 << std::endl;
  _out << "PFJet500 = " << PFJet500 << std::endl;
  _out << "PFJet550 = " << PFJet550 << std::endl;
  _out << "PFJetFwd15 = " << PFJetFwd15 << std::endl;
  _out << "PFJetFwd25 = " << PFJetFwd25 << std::endl;
  _out << "PFJetFwd40 = " << PFJetFwd40 << std::endl;
  _out << "PFJetFwd60 = " << PFJetFwd60 << std::endl;
  _out << "PFJetFwd80 = " << PFJetFwd80 << std::endl;
  _out << "PFJetFwd140 = " << PFJetFwd140 << std::endl;
  _out << "PFJetFwd200 = " << PFJetFwd200 << std::endl;
  _out << "PFJetFwd260 = " << PFJetFwd260 << std::endl;
  _out << "PFJetFwd320 = " << PFJetFwd320 << std::endl;
  _out << "PFJetFwd400 = " << PFJetFwd400 << std::endl;
  _out << "PFJetFwd450 = " << PFJetFwd450 << std::endl;
  _out << "PFJetFwd500 = " << PFJetFwd500 << std::endl;
  _out << "AK8PFJetFwd15 = " << AK8PFJetFwd15 << std::endl;
  _out << "AK8PFJetFwd25 = " << AK8PFJetFwd25 << std::endl;
  _out << "AK8PFJetFwd40 = " << AK8PFJetFwd40 << std::endl;
  _out << "AK8PFJetFwd60 = " << AK8PFJetFwd60 << std::endl;
  _out << "AK8PFJetFwd80 = " << AK8PFJetFwd80 << std::endl;
  _out << "AK8PFJetFwd140 = " << AK8PFJetFwd140 << std::endl;
  _out << "AK8PFJetFwd200 = " << AK8PFJetFwd200 << std::endl;
  _out << "AK8PFJetFwd260 = " << AK8PFJetFwd260 << std::endl;
  _out << "AK8PFJetFwd320 = " << AK8PFJetFwd320 << std::endl;
  _out << "AK8PFJetFwd400 = " << AK8PFJetFwd400 << std::endl;
  _out << "AK8PFJetFwd450 = " << AK8PFJetFwd450 << std::endl;
  _out << "AK8PFJetFwd500 = " << AK8PFJetFwd500 << std::endl;
  _out << "PFHT180 = " << PFHT180 << std::endl;
  _out << "PFHT250 = " << PFHT250 << std::endl;
  _out << "PFHT370 = " << PFHT370 << std::endl;
  _out << "PFHT430 = " << PFHT430 << std::endl;
  _out << "PFHT510 = " << PFHT510 << std::endl;
  _out << "PFHT590 = " << PFHT590 << std::endl;
  _out << "PFHT680 = " << PFHT680 << std::endl;
  _out << "PFHT780 = " << PFHT780 << std::endl;
  _out << "PFHT890 = " << PFHT890 << std::endl;
  _out << "PFHT1050 = " << PFHT1050 << std::endl;
  _out << "PFHT500_PFMET100_PFMHT100_IDTight = " << PFHT500_PFMET100_PFMHT100_IDTight << std::endl;
  _out << "PFHT500_PFMET110_PFMHT110_IDTight = " << PFHT500_PFMET110_PFMHT110_IDTight << std::endl;
  _out << "PFHT700_PFMET85_PFMHT85_IDTight = " << PFHT700_PFMET85_PFMHT85_IDTight << std::endl;
  _out << "PFHT700_PFMET95_PFMHT95_IDTight = " << PFHT700_PFMET95_PFMHT95_IDTight << std::endl;
  _out << "PFHT800_PFMET75_PFMHT75_IDTight = " << PFHT800_PFMET75_PFMHT75_IDTight << std::endl;
  _out << "PFHT800_PFMET85_PFMHT85_IDTight = " << PFHT800_PFMET85_PFMHT85_IDTight << std::endl;
  _out << "PFMET110_PFMHT110_IDTight = " << PFMET110_PFMHT110_IDTight << std::endl;
  _out << "PFMET120_PFMHT120_IDTight = " << PFMET120_PFMHT120_IDTight << std::endl;
  _out << "PFMET130_PFMHT130_IDTight = " << PFMET130_PFMHT130_IDTight << std::endl;
  _out << "PFMET140_PFMHT140_IDTight = " << PFMET140_PFMHT140_IDTight << std::endl;
  _out << "PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1 = " << PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1 << std::endl;
  _out << "PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1 = " << PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1 << std::endl;
  _out << "PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1 = " << PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1 << std::endl;
  _out << "PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1 = " << PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1 << std::endl;
  _out << "PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1 = " << PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1 << std::endl;
  _out << "PFMET120_PFMHT120_IDTight_PFHT60 = " << PFMET120_PFMHT120_IDTight_PFHT60 << std::endl;
  _out << "PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 = " << PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60 << std::endl;
  _out << "PFMETTypeOne120_PFMHT120_IDTight_PFHT60 = " << PFMETTypeOne120_PFMHT120_IDTight_PFHT60 << std::endl;
  _out << "PFMETTypeOne110_PFMHT110_IDTight = " << PFMETTypeOne110_PFMHT110_IDTight << std::endl;
  _out << "PFMETTypeOne120_PFMHT120_IDTight = " << PFMETTypeOne120_PFMHT120_IDTight << std::endl;
  _out << "PFMETTypeOne130_PFMHT130_IDTight = " << PFMETTypeOne130_PFMHT130_IDTight << std::endl;
  _out << "PFMETTypeOne140_PFMHT140_IDTight = " << PFMETTypeOne140_PFMHT140_IDTight << std::endl;
  _out << "PFMETNoMu110_PFMHTNoMu110_IDTight = " << PFMETNoMu110_PFMHTNoMu110_IDTight << std::endl;
  _out << "PFMETNoMu120_PFMHTNoMu120_IDTight = " << PFMETNoMu120_PFMHTNoMu120_IDTight << std::endl;
  _out << "PFMETNoMu130_PFMHTNoMu130_IDTight = " << PFMETNoMu130_PFMHTNoMu130_IDTight << std::endl;
  _out << "PFMETNoMu140_PFMHTNoMu140_IDTight = " << PFMETNoMu140_PFMHTNoMu140_IDTight << std::endl;
  _out << "MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight = " << MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight << std::endl;
  _out << "MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight = " << MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight << std::endl;
  _out << "MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight = " << MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight << std::endl;
  _out << "MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight = " << MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight << std::endl;
  _out << "L1ETMHadSeeds = " << L1ETMHadSeeds << std::endl;
  _out << "CaloMHT90 = " << CaloMHT90 << std::endl;
  _out << "CaloMET80_NotCleaned = " << CaloMET80_NotCleaned << std::endl;
  _out << "CaloMET90_NotCleaned = " << CaloMET90_NotCleaned << std::endl;
  _out << "CaloMET100_NotCleaned = " << CaloMET100_NotCleaned << std::endl;
  _out << "CaloMET110_NotCleaned = " << CaloMET110_NotCleaned << std::endl;
  _out << "CaloMET250_NotCleaned = " << CaloMET250_NotCleaned << std::endl;
  _out << "CaloMET70_HBHECleaned = " << CaloMET70_HBHECleaned << std::endl;
  _out << "CaloMET80_HBHECleaned = " << CaloMET80_HBHECleaned << std::endl;
  _out << "CaloMET90_HBHECleaned = " << CaloMET90_HBHECleaned << std::endl;
  _out << "CaloMET100_HBHECleaned = " << CaloMET100_HBHECleaned << std::endl;
  _out << "CaloMET250_HBHECleaned = " << CaloMET250_HBHECleaned << std::endl;
  _out << "CaloMET300_HBHECleaned = " << CaloMET300_HBHECleaned << std::endl;
  _out << "CaloMET350_HBHECleaned = " << CaloMET350_HBHECleaned << std::endl;
  _out << "PFMET200_NotCleaned = " << PFMET200_NotCleaned << std::endl;
  _out << "PFMET200_HBHECleaned = " << PFMET200_HBHECleaned << std::endl;
  _out << "PFMET250_HBHECleaned = " << PFMET250_HBHECleaned << std::endl;
  _out << "PFMET300_HBHECleaned = " << PFMET300_HBHECleaned << std::endl;
  _out << "PFMET200_HBHE_BeamHaloCleaned = " << PFMET200_HBHE_BeamHaloCleaned << std::endl;
  _out << "PFMETTypeOne200_HBHE_BeamHaloCleaned = " << PFMETTypeOne200_HBHE_BeamHaloCleaned << std::endl;
  _out << "MET105_IsoTrk50 = " << MET105_IsoTrk50 << std::endl;
  _out << "MET120_IsoTrk50 = " << MET120_IsoTrk50 << std::endl;
  _out << "SingleJet30_Mu12_SinglePFJet40 = " << SingleJet30_Mu12_SinglePFJet40 << std::endl;
  _out << "Mu12_DoublePFJets40_CaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets40_CaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets100_CaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets100_CaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets200_CaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets200_CaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets350_CaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets350_CaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 << std::endl;
  _out << "Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = " << Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets40_CaloBTagDeepCSV_p71 = " << DoublePFJets40_CaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets100_CaloBTagDeepCSV_p71 = " << DoublePFJets100_CaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets200_CaloBTagDeepCSV_p71 = " << DoublePFJets200_CaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets350_CaloBTagDeepCSV_p71 = " << DoublePFJets350_CaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = " << DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 << std::endl;
  _out << "DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 = " << DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71 << std::endl;
  _out << "Photon300_NoHE = " << Photon300_NoHE << std::endl;
  _out << "Mu8_TrkIsoVVL = " << Mu8_TrkIsoVVL << std::endl;
  _out << "Mu8_DiEle12_CaloIdL_TrackIdL_DZ = " << Mu8_DiEle12_CaloIdL_TrackIdL_DZ << std::endl;
  _out << "Mu8_DiEle12_CaloIdL_TrackIdL = " << Mu8_DiEle12_CaloIdL_TrackIdL << std::endl;
  _out << "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ = " << Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ << std::endl;
  _out << "Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 = " << Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350 << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30 = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30 << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30 = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30 << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5 = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5 << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5 = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5 << std::endl;
  _out << "Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = " << Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL << std::endl;
  _out << "Mu17_TrkIsoVVL = " << Mu17_TrkIsoVVL << std::endl;
  _out << "Mu19_TrkIsoVVL = " << Mu19_TrkIsoVVL << std::endl;
  _out << "BTagMu_AK4DiJet20_Mu5 = " << BTagMu_AK4DiJet20_Mu5 << std::endl;
  _out << "BTagMu_AK4DiJet40_Mu5 = " << BTagMu_AK4DiJet40_Mu5 << std::endl;
  _out << "BTagMu_AK4DiJet70_Mu5 = " << BTagMu_AK4DiJet70_Mu5 << std::endl;
  _out << "BTagMu_AK4DiJet110_Mu5 = " << BTagMu_AK4DiJet110_Mu5 << std::endl;
  _out << "BTagMu_AK4DiJet170_Mu5 = " << BTagMu_AK4DiJet170_Mu5 << std::endl;
  _out << "BTagMu_AK4Jet300_Mu5 = " << BTagMu_AK4Jet300_Mu5 << std::endl;
  _out << "BTagMu_AK8DiJet170_Mu5 = " << BTagMu_AK8DiJet170_Mu5 << std::endl;
  _out << "BTagMu_AK8Jet170_DoubleMu5 = " << BTagMu_AK8Jet170_DoubleMu5 << std::endl;
  _out << "BTagMu_AK8Jet300_Mu5 = " << BTagMu_AK8Jet300_Mu5 << std::endl;
  _out << "BTagMu_AK4DiJet20_Mu5_noalgo = " << BTagMu_AK4DiJet20_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK4DiJet40_Mu5_noalgo = " << BTagMu_AK4DiJet40_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK4DiJet70_Mu5_noalgo = " << BTagMu_AK4DiJet70_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK4DiJet110_Mu5_noalgo = " << BTagMu_AK4DiJet110_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK4DiJet170_Mu5_noalgo = " << BTagMu_AK4DiJet170_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK4Jet300_Mu5_noalgo = " << BTagMu_AK4Jet300_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK8DiJet170_Mu5_noalgo = " << BTagMu_AK8DiJet170_Mu5_noalgo << std::endl;
  _out << "BTagMu_AK8Jet170_DoubleMu5_noalgo = " << BTagMu_AK8Jet170_DoubleMu5_noalgo << std::endl;
  _out << "BTagMu_AK8Jet300_Mu5_noalgo = " << BTagMu_AK8Jet300_Mu5_noalgo << std::endl;
  _out << "Ele15_Ele8_CaloIdL_TrackIdL_IsoVL = " << Ele15_Ele8_CaloIdL_TrackIdL_IsoVL << std::endl;
  _out << "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = " << Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ << std::endl;
  _out << "Ele23_Ele12_CaloIdL_TrackIdL_IsoVL = " << Ele23_Ele12_CaloIdL_TrackIdL_IsoVL << std::endl;
  _out << "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ = " << Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ << std::endl;
  _out << "Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL = " << Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL << std::endl;
  _out << "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL = " << Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL << std::endl;
  _out << "Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ = " << Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ << std::endl;
  _out << "Mu12_DoublePhoton20 = " << Mu12_DoublePhoton20 << std::endl;
  _out << "TriplePhoton_20_20_20_CaloIdLV2 = " << TriplePhoton_20_20_20_CaloIdLV2 << std::endl;
  _out << "TriplePhoton_20_20_20_CaloIdLV2_R9IdVL = " << TriplePhoton_20_20_20_CaloIdLV2_R9IdVL << std::endl;
  _out << "TriplePhoton_30_30_10_CaloIdLV2 = " << TriplePhoton_30_30_10_CaloIdLV2 << std::endl;
  _out << "TriplePhoton_30_30_10_CaloIdLV2_R9IdVL = " << TriplePhoton_30_30_10_CaloIdLV2_R9IdVL << std::endl;
  _out << "TriplePhoton_35_35_5_CaloIdLV2_R9IdVL = " << TriplePhoton_35_35_5_CaloIdLV2_R9IdVL << std::endl;
  _out << "Photon20 = " << Photon20 << std::endl;
  _out << "Photon33 = " << Photon33 << std::endl;
  _out << "Photon50 = " << Photon50 << std::endl;
  _out << "Photon75 = " << Photon75 << std::endl;
  _out << "Photon90 = " << Photon90 << std::endl;
  _out << "Photon120 = " << Photon120 << std::endl;
  _out << "Photon150 = " << Photon150 << std::endl;
  _out << "Photon175 = " << Photon175 << std::endl;
  _out << "Photon200 = " << Photon200 << std::endl;
  _out << "Photon100EB_TightID_TightIso = " << Photon100EB_TightID_TightIso << std::endl;
  _out << "Photon110EB_TightID_TightIso = " << Photon110EB_TightID_TightIso << std::endl;
  _out << "Photon120EB_TightID_TightIso = " << Photon120EB_TightID_TightIso << std::endl;
  _out << "Photon100EBHE10 = " << Photon100EBHE10 << std::endl;
  _out << "Photon100EEHE10 = " << Photon100EEHE10 << std::endl;
  _out << "Photon100EE_TightID_TightIso = " << Photon100EE_TightID_TightIso << std::endl;
  _out << "Photon50_R9Id90_HE10_IsoM = " << Photon50_R9Id90_HE10_IsoM << std::endl;
  _out << "Photon75_R9Id90_HE10_IsoM = " << Photon75_R9Id90_HE10_IsoM << std::endl;
  _out << "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 = " << Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3 << std::endl;
  _out << "Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 = " << Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3 << std::endl;
  _out << "Photon90_R9Id90_HE10_IsoM = " << Photon90_R9Id90_HE10_IsoM << std::endl;
  _out << "Photon120_R9Id90_HE10_IsoM = " << Photon120_R9Id90_HE10_IsoM << std::endl;
  _out << "Photon165_R9Id90_HE10_IsoM = " << Photon165_R9Id90_HE10_IsoM << std::endl;
  _out << "Photon90_CaloIdL_PFHT700 = " << Photon90_CaloIdL_PFHT700 << std::endl;
  _out << "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 = " << Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90 << std::endl;
  _out << "Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 = " << Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95 << std::endl;
  _out << "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 = " << Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55 << std::endl;
  _out << "Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 = " << Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55 << std::endl;
  _out << "Photon35_TwoProngs35 = " << Photon35_TwoProngs35 << std::endl;
  _out << "IsoMu24_TwoProngs35 = " << IsoMu24_TwoProngs35 << std::endl;
  _out << "Dimuon0_Jpsi_L1_NoOS = " << Dimuon0_Jpsi_L1_NoOS << std::endl;
  _out << "Dimuon0_Jpsi_NoVertexing_NoOS = " << Dimuon0_Jpsi_NoVertexing_NoOS << std::endl;
  _out << "Dimuon0_Jpsi = " << Dimuon0_Jpsi << std::endl;
  _out << "Dimuon0_Jpsi_NoVertexing = " << Dimuon0_Jpsi_NoVertexing << std::endl;
  _out << "Dimuon0_Jpsi_L1_4R_0er1p5R = " << Dimuon0_Jpsi_L1_4R_0er1p5R << std::endl;
  _out << "Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R = " << Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R << std::endl;
  _out << "Dimuon0_Jpsi3p5_Muon2 = " << Dimuon0_Jpsi3p5_Muon2 << std::endl;
  _out << "Dimuon0_Upsilon_L1_4p5 = " << Dimuon0_Upsilon_L1_4p5 << std::endl;
  _out << "Dimuon0_Upsilon_L1_5 = " << Dimuon0_Upsilon_L1_5 << std::endl;
  _out << "Dimuon0_Upsilon_L1_4p5NoOS = " << Dimuon0_Upsilon_L1_4p5NoOS << std::endl;
  _out << "Dimuon0_Upsilon_L1_4p5er2p0 = " << Dimuon0_Upsilon_L1_4p5er2p0 << std::endl;
  _out << "Dimuon0_Upsilon_L1_4p5er2p0M = " << Dimuon0_Upsilon_L1_4p5er2p0M << std::endl;
  _out << "Dimuon0_Upsilon_NoVertexing = " << Dimuon0_Upsilon_NoVertexing << std::endl;
  _out << "Dimuon0_Upsilon_L1_5M = " << Dimuon0_Upsilon_L1_5M << std::endl;
  _out << "Dimuon0_LowMass_L1_0er1p5R = " << Dimuon0_LowMass_L1_0er1p5R << std::endl;
  _out << "Dimuon0_LowMass_L1_0er1p5 = " << Dimuon0_LowMass_L1_0er1p5 << std::endl;
  _out << "Dimuon0_LowMass = " << Dimuon0_LowMass << std::endl;
  _out << "Dimuon0_LowMass_L1_4 = " << Dimuon0_LowMass_L1_4 << std::endl;
  _out << "Dimuon0_LowMass_L1_4R = " << Dimuon0_LowMass_L1_4R << std::endl;
  _out << "Dimuon0_LowMass_L1_TM530 = " << Dimuon0_LowMass_L1_TM530 << std::endl;
  _out << "Dimuon0_Upsilon_Muon_L1_TM0 = " << Dimuon0_Upsilon_Muon_L1_TM0 << std::endl;
  _out << "Dimuon0_Upsilon_Muon_NoL1Mass = " << Dimuon0_Upsilon_Muon_NoL1Mass << std::endl;
  _out << "TripleMu_5_3_3_Mass3p8_DZ = " << TripleMu_5_3_3_Mass3p8_DZ << std::endl;
  _out << "TripleMu_10_5_5_DZ = " << TripleMu_10_5_5_DZ << std::endl;
  _out << "TripleMu_12_10_5 = " << TripleMu_12_10_5 << std::endl;
  _out << "Tau3Mu_Mu7_Mu1_TkMu1_Tau15 = " << Tau3Mu_Mu7_Mu1_TkMu1_Tau15 << std::endl;
  _out << "Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 = " << Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1 << std::endl;
  _out << "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 = " << Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15 << std::endl;
  _out << "Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 = " << Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1 << std::endl;
  _out << "DoubleMu3_DZ_PFMET50_PFMHT60 = " << DoubleMu3_DZ_PFMET50_PFMHT60 << std::endl;
  _out << "DoubleMu3_DZ_PFMET70_PFMHT70 = " << DoubleMu3_DZ_PFMET70_PFMHT70 << std::endl;
  _out << "DoubleMu3_DZ_PFMET90_PFMHT90 = " << DoubleMu3_DZ_PFMET90_PFMHT90 << std::endl;
  _out << "DoubleMu3_Trk_Tau3mu_NoL1Mass = " << DoubleMu3_Trk_Tau3mu_NoL1Mass << std::endl;
  _out << "DoubleMu4_Jpsi_Displaced = " << DoubleMu4_Jpsi_Displaced << std::endl;
  _out << "DoubleMu4_Jpsi_NoVertexing = " << DoubleMu4_Jpsi_NoVertexing << std::endl;
  _out << "DoubleMu4_JpsiTrkTrk_Displaced = " << DoubleMu4_JpsiTrkTrk_Displaced << std::endl;
  _out << "DoubleMu43NoFiltersNoVtx = " << DoubleMu43NoFiltersNoVtx << std::endl;
  _out << "DoubleMu48NoFiltersNoVtx = " << DoubleMu48NoFiltersNoVtx << std::endl;
  _out << "Mu43NoFiltersNoVtx_Photon43_CaloIdL = " << Mu43NoFiltersNoVtx_Photon43_CaloIdL << std::endl;
  _out << "Mu48NoFiltersNoVtx_Photon48_CaloIdL = " << Mu48NoFiltersNoVtx_Photon48_CaloIdL << std::endl;
  _out << "Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL = " << Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL << std::endl;
  _out << "Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL = " << Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL << std::endl;
  _out << "DoubleMu33NoFiltersNoVtxDisplaced = " << DoubleMu33NoFiltersNoVtxDisplaced << std::endl;
  _out << "DoubleMu40NoFiltersNoVtxDisplaced = " << DoubleMu40NoFiltersNoVtxDisplaced << std::endl;
  _out << "DoubleMu20_7_Mass0to30_L1_DM4 = " << DoubleMu20_7_Mass0to30_L1_DM4 << std::endl;
  _out << "DoubleMu20_7_Mass0to30_L1_DM4EG = " << DoubleMu20_7_Mass0to30_L1_DM4EG << std::endl;
  _out << "HT425 = " << HT425 << std::endl;
  _out << "HT430_DisplacedDijet40_DisplacedTrack = " << HT430_DisplacedDijet40_DisplacedTrack << std::endl;
  _out << "HT500_DisplacedDijet40_DisplacedTrack = " << HT500_DisplacedDijet40_DisplacedTrack << std::endl;
  _out << "HT430_DisplacedDijet60_DisplacedTrack = " << HT430_DisplacedDijet60_DisplacedTrack << std::endl;
  _out << "HT400_DisplacedDijet40_DisplacedTrack = " << HT400_DisplacedDijet40_DisplacedTrack << std::endl;
  _out << "HT650_DisplacedDijet60_Inclusive = " << HT650_DisplacedDijet60_Inclusive << std::endl;
  _out << "HT550_DisplacedDijet60_Inclusive = " << HT550_DisplacedDijet60_Inclusive << std::endl;
  _out << "DiJet110_35_Mjj650_PFMET110 = " << DiJet110_35_Mjj650_PFMET110 << std::endl;
  _out << "DiJet110_35_Mjj650_PFMET120 = " << DiJet110_35_Mjj650_PFMET120 << std::endl;
  _out << "DiJet110_35_Mjj650_PFMET130 = " << DiJet110_35_Mjj650_PFMET130 << std::endl;
  _out << "TripleJet110_35_35_Mjj650_PFMET110 = " << TripleJet110_35_35_Mjj650_PFMET110 << std::endl;
  _out << "TripleJet110_35_35_Mjj650_PFMET120 = " << TripleJet110_35_35_Mjj650_PFMET120 << std::endl;
  _out << "TripleJet110_35_35_Mjj650_PFMET130 = " << TripleJet110_35_35_Mjj650_PFMET130 << std::endl;
  _out << "Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned = " << Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned << std::endl;
  _out << "Ele28_eta2p1_WPTight_Gsf_HT150 = " << Ele28_eta2p1_WPTight_Gsf_HT150 << std::endl;
  _out << "Ele28_HighEta_SC20_Mass55 = " << Ele28_HighEta_SC20_Mass55 << std::endl;
  _out << "DoubleMu20_7_Mass0to30_Photon23 = " << DoubleMu20_7_Mass0to30_Photon23 << std::endl;
  _out << "Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = " << Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 << std::endl;
  _out << "Ele15_IsoVVVL_PFHT450_PFMET50 = " << Ele15_IsoVVVL_PFHT450_PFMET50 << std::endl;
  _out << "Ele15_IsoVVVL_PFHT450 = " << Ele15_IsoVVVL_PFHT450 << std::endl;
  _out << "Ele50_IsoVVVL_PFHT450 = " << Ele50_IsoVVVL_PFHT450 << std::endl;
  _out << "Ele15_IsoVVVL_PFHT600 = " << Ele15_IsoVVVL_PFHT600 << std::endl;
  _out << "Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = " << Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 << std::endl;
  _out << "Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 = " << Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60 << std::endl;
  _out << "Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 = " << Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60 << std::endl;
  _out << "Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 = " << Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5 << std::endl;
  _out << "Mu15_IsoVVVL_PFHT450_PFMET50 = " << Mu15_IsoVVVL_PFHT450_PFMET50 << std::endl;
  _out << "Mu15_IsoVVVL_PFHT450 = " << Mu15_IsoVVVL_PFHT450 << std::endl;
  _out << "Mu50_IsoVVVL_PFHT450 = " << Mu50_IsoVVVL_PFHT450 << std::endl;
  _out << "Mu15_IsoVVVL_PFHT600 = " << Mu15_IsoVVVL_PFHT600 << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight << std::endl;
  _out << "Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight = " << Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight << std::endl;
  _out << "Dimuon10_PsiPrime_Barrel_Seagulls = " << Dimuon10_PsiPrime_Barrel_Seagulls << std::endl;
  _out << "Dimuon20_Jpsi_Barrel_Seagulls = " << Dimuon20_Jpsi_Barrel_Seagulls << std::endl;
  _out << "Dimuon12_Upsilon_y1p4 = " << Dimuon12_Upsilon_y1p4 << std::endl;
  _out << "Dimuon14_Phi_Barrel_Seagulls = " << Dimuon14_Phi_Barrel_Seagulls << std::endl;
  _out << "Dimuon18_PsiPrime = " << Dimuon18_PsiPrime << std::endl;
  _out << "Dimuon25_Jpsi = " << Dimuon25_Jpsi << std::endl;
  _out << "Dimuon18_PsiPrime_noCorrL1 = " << Dimuon18_PsiPrime_noCorrL1 << std::endl;
  _out << "Dimuon24_Upsilon_noCorrL1 = " << Dimuon24_Upsilon_noCorrL1 << std::endl;
  _out << "Dimuon24_Phi_noCorrL1 = " << Dimuon24_Phi_noCorrL1 << std::endl;
  _out << "Dimuon25_Jpsi_noCorrL1 = " << Dimuon25_Jpsi_noCorrL1 << std::endl;
  _out << "DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8 = " << DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8 << std::endl;
  _out << "DiMu9_Ele9_CaloIdL_TrackIdL_DZ = " << DiMu9_Ele9_CaloIdL_TrackIdL_DZ << std::endl;
  _out << "DiMu9_Ele9_CaloIdL_TrackIdL = " << DiMu9_Ele9_CaloIdL_TrackIdL << std::endl;
  _out << "DoubleIsoMu20_eta2p1 = " << DoubleIsoMu20_eta2p1 << std::endl;
  _out << "TrkMu12_DoubleTrkMu5NoFiltersNoVtx = " << TrkMu12_DoubleTrkMu5NoFiltersNoVtx << std::endl;
  _out << "TrkMu16_DoubleTrkMu6NoFiltersNoVtx = " << TrkMu16_DoubleTrkMu6NoFiltersNoVtx << std::endl;
  _out << "TrkMu17_DoubleTrkMu8NoFiltersNoVtx = " << TrkMu17_DoubleTrkMu8NoFiltersNoVtx << std::endl;
  _out << "Mu8 = " << Mu8 << std::endl;
  _out << "Mu17 = " << Mu17 << std::endl;
  _out << "Mu19 = " << Mu19 << std::endl;
  _out << "Mu17_Photon30_IsoCaloId = " << Mu17_Photon30_IsoCaloId << std::endl;
  _out << "Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 = " << Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30 << std::endl;
  _out << "Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 = " << Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30 << std::endl;
  _out << "Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30 = " << Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30 << std::endl;
  _out << "Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 = " << Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30 << std::endl;
  _out << "Ele8_CaloIdM_TrackIdM_PFJet30 = " << Ele8_CaloIdM_TrackIdM_PFJet30 << std::endl;
  _out << "Ele17_CaloIdM_TrackIdM_PFJet30 = " << Ele17_CaloIdM_TrackIdM_PFJet30 << std::endl;
  _out << "Ele23_CaloIdM_TrackIdM_PFJet30 = " << Ele23_CaloIdM_TrackIdM_PFJet30 << std::endl;
  _out << "Ele50_CaloIdVT_GsfTrkIdT_PFJet165 = " << Ele50_CaloIdVT_GsfTrkIdT_PFJet165 << std::endl;
  _out << "Ele115_CaloIdVT_GsfTrkIdT = " << Ele115_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "Ele135_CaloIdVT_GsfTrkIdT = " << Ele135_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "Ele145_CaloIdVT_GsfTrkIdT = " << Ele145_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "Ele200_CaloIdVT_GsfTrkIdT = " << Ele200_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "Ele250_CaloIdVT_GsfTrkIdT = " << Ele250_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "Ele300_CaloIdVT_GsfTrkIdT = " << Ele300_CaloIdVT_GsfTrkIdT << std::endl;
  _out << "PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5 = " << PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5 << std::endl;
  _out << "PFHT330PT30_QuadPFJet_75_60_45_40 = " << PFHT330PT30_QuadPFJet_75_60_45_40 << std::endl;
  _out << "PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94 = " << PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94 << std::endl;
  _out << "PFHT400_SixPFJet32 = " << PFHT400_SixPFJet32 << std::endl;
  _out << "PFHT450_SixPFJet36_PFBTagDeepCSV_1p59 = " << PFHT450_SixPFJet36_PFBTagDeepCSV_1p59 << std::endl;
  _out << "PFHT450_SixPFJet36 = " << PFHT450_SixPFJet36 << std::endl;
  _out << "PFHT350 = " << PFHT350 << std::endl;
  _out << "PFHT350MinPFJet15 = " << PFHT350MinPFJet15 << std::endl;
  _out << "Photon60_R9Id90_CaloIdL_IsoL = " << Photon60_R9Id90_CaloIdL_IsoL << std::endl;
  _out << "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL = " << Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL << std::endl;
  _out << "Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 = " << Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15 << std::endl;
  _out << "ECALHT800 = " << ECALHT800 << std::endl;
  _out << "DiSC30_18_EIso_AND_HE_Mass70 = " << DiSC30_18_EIso_AND_HE_Mass70 << std::endl;
  _out << "Physics = " << Physics << std::endl;
  _out << "Physics_part0 = " << Physics_part0 << std::endl;
  _out << "Physics_part1 = " << Physics_part1 << std::endl;
  _out << "Physics_part2 = " << Physics_part2 << std::endl;
  _out << "Physics_part3 = " << Physics_part3 << std::endl;
  _out << "Physics_part4 = " << Physics_part4 << std::endl;
  _out << "Physics_part5 = " << Physics_part5 << std::endl;
  _out << "Physics_part6 = " << Physics_part6 << std::endl;
  _out << "Physics_part7 = " << Physics_part7 << std::endl;
  _out << "Random = " << Random << std::endl;
  _out << "ZeroBias = " << ZeroBias << std::endl;
  _out << "ZeroBias_Alignment = " << ZeroBias_Alignment << std::endl;
  _out << "ZeroBias_part0 = " << ZeroBias_part0 << std::endl;
  _out << "ZeroBias_part1 = " << ZeroBias_part1 << std::endl;
  _out << "ZeroBias_part2 = " << ZeroBias_part2 << std::endl;
  _out << "ZeroBias_part3 = " << ZeroBias_part3 << std::endl;
  _out << "ZeroBias_part4 = " << ZeroBias_part4 << std::endl;
  _out << "ZeroBias_part5 = " << ZeroBias_part5 << std::endl;
  _out << "ZeroBias_part6 = " << ZeroBias_part6 << std::endl;
  _out << "ZeroBias_part7 = " << ZeroBias_part7 << std::endl;
  _out << "AK4CaloJet30 = " << AK4CaloJet30 << std::endl;
  _out << "AK4CaloJet40 = " << AK4CaloJet40 << std::endl;
  _out << "AK4CaloJet50 = " << AK4CaloJet50 << std::endl;
  _out << "AK4CaloJet80 = " << AK4CaloJet80 << std::endl;
  _out << "AK4CaloJet100 = " << AK4CaloJet100 << std::endl;
  _out << "AK4CaloJet120 = " << AK4CaloJet120 << std::endl;
  _out << "AK4PFJet30 = " << AK4PFJet30 << std::endl;
  _out << "AK4PFJet50 = " << AK4PFJet50 << std::endl;
  _out << "AK4PFJet80 = " << AK4PFJet80 << std::endl;
  _out << "AK4PFJet100 = " << AK4PFJet100 << std::endl;
  _out << "AK4PFJet120 = " << AK4PFJet120 << std::endl;
  _out << "SinglePhoton10_Eta3p1ForPPRef = " << SinglePhoton10_Eta3p1ForPPRef << std::endl;
  _out << "SinglePhoton20_Eta3p1ForPPRef = " << SinglePhoton20_Eta3p1ForPPRef << std::endl;
  _out << "SinglePhoton30_Eta3p1ForPPRef = " << SinglePhoton30_Eta3p1ForPPRef << std::endl;
  _out << "Photon20_HoverELoose = " << Photon20_HoverELoose << std::endl;
  _out << "Photon30_HoverELoose = " << Photon30_HoverELoose << std::endl;
  _out << "EcalCalibration = " << EcalCalibration << std::endl;
  _out << "HcalCalibration = " << HcalCalibration << std::endl;
  _out << "L1UnpairedBunchBptxMinus = " << L1UnpairedBunchBptxMinus << std::endl;
  _out << "L1UnpairedBunchBptxPlus = " << L1UnpairedBunchBptxPlus << std::endl;
  _out << "L1NotBptxOR = " << L1NotBptxOR << std::endl;
  _out << "L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 = " << L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142 << std::endl;
  _out << "CDC_L2cosmic_5_er1p0 = " << CDC_L2cosmic_5_er1p0 << std::endl;
  _out << "CDC_L2cosmic_5p5_er1p0 = " << CDC_L2cosmic_5p5_er1p0 << std::endl;
  _out << "HcalNZS = " << HcalNZS << std::endl;
  _out << "HcalPhiSym = " << HcalPhiSym << std::endl;
  _out << "HcalIsolatedbunch = " << HcalIsolatedbunch << std::endl;
  _out << "IsoTrackHB = " << IsoTrackHB << std::endl;
  _out << "IsoTrackHE = " << IsoTrackHE << std::endl;
  _out << "ZeroBias_FirstCollisionAfterAbortGap = " << ZeroBias_FirstCollisionAfterAbortGap << std::endl;
  _out << "ZeroBias_IsolatedBunches = " << ZeroBias_IsolatedBunches << std::endl;
  _out << "ZeroBias_FirstCollisionInTrain = " << ZeroBias_FirstCollisionInTrain << std::endl;
  _out << "ZeroBias_LastCollisionInTrain = " << ZeroBias_LastCollisionInTrain << std::endl;
  _out << "ZeroBias_FirstBXAfterTrain = " << ZeroBias_FirstBXAfterTrain << std::endl;
  _out << "IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = " << IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140 = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140 << std::endl;
  _out << "MediumChargedIsoPFTau50_Trk30_eta2p1_1pr = " << MediumChargedIsoPFTau50_Trk30_eta2p1_1pr << std::endl;
  _out << "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr = " << MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr << std::endl;
  _out << "MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 = " << MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1 << std::endl;
  _out << "MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1 = " << MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1 << std::endl;
  _out << "MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1 = " << MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1 << std::endl;
  _out << "Ele16_Ele12_Ele8_CaloIdL_TrackIdL = " << Ele16_Ele12_Ele8_CaloIdL_TrackIdL << std::endl;
  _out << "Rsq0p35 = " << Rsq0p35 << std::endl;
  _out << "Rsq0p40 = " << Rsq0p40 << std::endl;
  _out << "RsqMR300_Rsq0p09_MR200 = " << RsqMR300_Rsq0p09_MR200 << std::endl;
  _out << "RsqMR320_Rsq0p09_MR200 = " << RsqMR320_Rsq0p09_MR200 << std::endl;
  _out << "RsqMR300_Rsq0p09_MR200_4jet = " << RsqMR300_Rsq0p09_MR200_4jet << std::endl;
  _out << "RsqMR320_Rsq0p09_MR200_4jet = " << RsqMR320_Rsq0p09_MR200_4jet << std::endl;
  _out << "IsoMu27_MET90 = " << IsoMu27_MET90 << std::endl;
  _out << "DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = " << DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg << std::endl;
  _out << "DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = " << DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg << std::endl;
  _out << "DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg = " << DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg << std::endl;
  _out << "DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg = " << DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg << std::endl;
  _out << "DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = " << DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg << std::endl;
  _out << "DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg = " << DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg << std::endl;
  _out << "DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = " << DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg << std::endl;
  _out << "DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg = " << DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg << std::endl;
  _out << "VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1 = " << VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1 << std::endl;
  _out << "VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1 = " << VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1 << std::endl;
  _out << "VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1 = " << VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1 << std::endl;
  _out << "Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 = " << Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50 << std::endl;
  _out << "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 = " << Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3 << std::endl;
  _out << "Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 = " << Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3 << std::endl;
  _out << "PFMET100_PFMHT100_IDTight_PFHT60 = " << PFMET100_PFMHT100_IDTight_PFHT60 << std::endl;
  _out << "PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 = " << PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60 << std::endl;
  _out << "PFMETTypeOne100_PFMHT100_IDTight_PFHT60 = " << PFMETTypeOne100_PFMHT100_IDTight_PFHT60 << std::endl;
  _out << "Mu18_Mu9_SameSign = " << Mu18_Mu9_SameSign << std::endl;
  _out << "Mu18_Mu9_SameSign_DZ = " << Mu18_Mu9_SameSign_DZ << std::endl;
  _out << "Mu18_Mu9 = " << Mu18_Mu9 << std::endl;
  _out << "Mu18_Mu9_DZ = " << Mu18_Mu9_DZ << std::endl;
  _out << "Mu20_Mu10_SameSign = " << Mu20_Mu10_SameSign << std::endl;
  _out << "Mu20_Mu10_SameSign_DZ = " << Mu20_Mu10_SameSign_DZ << std::endl;
  _out << "Mu20_Mu10 = " << Mu20_Mu10 << std::endl;
  _out << "Mu20_Mu10_DZ = " << Mu20_Mu10_DZ << std::endl;
  _out << "Mu23_Mu12_SameSign = " << Mu23_Mu12_SameSign << std::endl;
  _out << "Mu23_Mu12_SameSign_DZ = " << Mu23_Mu12_SameSign_DZ << std::endl;
  _out << "Mu23_Mu12 = " << Mu23_Mu12 << std::endl;
  _out << "Mu23_Mu12_DZ = " << Mu23_Mu12_DZ << std::endl;
  _out << "DoubleMu2_Jpsi_DoubleTrk1_Phi1p05 = " << DoubleMu2_Jpsi_DoubleTrk1_Phi1p05 << std::endl;
  _out << "DoubleMu2_Jpsi_DoubleTkMu0_Phi = " << DoubleMu2_Jpsi_DoubleTkMu0_Phi << std::endl;
  _out << "DoubleMu3_DCA_PFMET50_PFMHT60 = " << DoubleMu3_DCA_PFMET50_PFMHT60 << std::endl;
  _out << "TripleMu_5_3_3_Mass3p8_DCA = " << TripleMu_5_3_3_Mass3p8_DCA << std::endl;
  _out << "QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = " << QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 << std::endl;
  _out << "QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = " << QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 << std::endl;
  _out << "QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = " << QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 << std::endl;
  _out << "QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2 = " << QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2 << std::endl;
  _out << "QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2 = " << QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2 << std::endl;
  _out << "QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2 = " << QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2 << std::endl;
  _out << "QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2 = " << QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2 << std::endl;
  _out << "QuadPFJet98_83_71_15 = " << QuadPFJet98_83_71_15 << std::endl;
  _out << "QuadPFJet103_88_75_15 = " << QuadPFJet103_88_75_15 << std::endl;
  _out << "QuadPFJet105_88_76_15 = " << QuadPFJet105_88_76_15 << std::endl;
  _out << "QuadPFJet111_90_80_15 = " << QuadPFJet111_90_80_15 << std::endl;
  _out << "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17 = " << AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17 << std::endl;
  _out << "AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1 = " << AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1 << std::endl;
  _out << "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02 = " << AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02 << std::endl;
  _out << "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2 = " << AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2 << std::endl;
  _out << "AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 = " << AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4 << std::endl;
  _out << "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 = " << Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55 << std::endl;
  _out << "Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto = " << Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto << std::endl;
  _out << "Mu12_IP6_part0 = " << Mu12_IP6_part0 << std::endl;
  _out << "Mu12_IP6_part1 = " << Mu12_IP6_part1 << std::endl;
  _out << "Mu12_IP6_part2 = " << Mu12_IP6_part2 << std::endl;
  _out << "Mu12_IP6_part3 = " << Mu12_IP6_part3 << std::endl;
  _out << "Mu12_IP6_part4 = " << Mu12_IP6_part4 << std::endl;
  _out << "Mu9_IP5_part0 = " << Mu9_IP5_part0 << std::endl;
  _out << "Mu9_IP5_part1 = " << Mu9_IP5_part1 << std::endl;
  _out << "Mu9_IP5_part2 = " << Mu9_IP5_part2 << std::endl;
  _out << "Mu9_IP5_part3 = " << Mu9_IP5_part3 << std::endl;
  _out << "Mu9_IP5_part4 = " << Mu9_IP5_part4 << std::endl;
  _out << "Mu7_IP4_part0 = " << Mu7_IP4_part0 << std::endl;
  _out << "Mu7_IP4_part1 = " << Mu7_IP4_part1 << std::endl;
  _out << "Mu7_IP4_part2 = " << Mu7_IP4_part2 << std::endl;
  _out << "Mu7_IP4_part3 = " << Mu7_IP4_part3 << std::endl;
  _out << "Mu7_IP4_part4 = " << Mu7_IP4_part4 << std::endl;
  _out << "Mu9_IP4_part0 = " << Mu9_IP4_part0 << std::endl;
  _out << "Mu9_IP4_part1 = " << Mu9_IP4_part1 << std::endl;
  _out << "Mu9_IP4_part2 = " << Mu9_IP4_part2 << std::endl;
  _out << "Mu9_IP4_part3 = " << Mu9_IP4_part3 << std::endl;
  _out << "Mu9_IP4_part4 = " << Mu9_IP4_part4 << std::endl;
  _out << "Mu8_IP5_part0 = " << Mu8_IP5_part0 << std::endl;
  _out << "Mu8_IP5_part1 = " << Mu8_IP5_part1 << std::endl;
  _out << "Mu8_IP5_part2 = " << Mu8_IP5_part2 << std::endl;
  _out << "Mu8_IP5_part3 = " << Mu8_IP5_part3 << std::endl;
  _out << "Mu8_IP5_part4 = " << Mu8_IP5_part4 << std::endl;
  _out << "Mu8_IP6_part0 = " << Mu8_IP6_part0 << std::endl;
  _out << "Mu8_IP6_part1 = " << Mu8_IP6_part1 << std::endl;
  _out << "Mu8_IP6_part2 = " << Mu8_IP6_part2 << std::endl;
  _out << "Mu8_IP6_part3 = " << Mu8_IP6_part3 << std::endl;
  _out << "Mu8_IP6_part4 = " << Mu8_IP6_part4 << std::endl;
  _out << "Mu9_IP6_part0 = " << Mu9_IP6_part0 << std::endl;
  _out << "Mu9_IP6_part1 = " << Mu9_IP6_part1 << std::endl;
  _out << "Mu9_IP6_part2 = " << Mu9_IP6_part2 << std::endl;
  _out << "Mu9_IP6_part3 = " << Mu9_IP6_part3 << std::endl;
  _out << "Mu9_IP6_part4 = " << Mu9_IP6_part4 << std::endl;
  _out << "Mu8_IP3_part0 = " << Mu8_IP3_part0 << std::endl;
  _out << "Mu8_IP3_part1 = " << Mu8_IP3_part1 << std::endl;
  _out << "Mu8_IP3_part2 = " << Mu8_IP3_part2 << std::endl;
  _out << "Mu8_IP3_part3 = " << Mu8_IP3_part3 << std::endl;
  _out << "Mu8_IP3_part4 = " << Mu8_IP3_part4 << std::endl;
  _out << "QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 = " << QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1 << std::endl;
  _out << "TrkMu6NoFiltersNoVtx = " << TrkMu6NoFiltersNoVtx << std::endl;
  _out << "TrkMu16NoFiltersNoVtx = " << TrkMu16NoFiltersNoVtx << std::endl;
  _out << "DoubleTrkMu_16_6_NoFiltersNoVtx = " << DoubleTrkMu_16_6_NoFiltersNoVtx << std::endl;
}

/* BEGIN CUSTOM Triggers.cc.global */
/* END CUSTOM */
