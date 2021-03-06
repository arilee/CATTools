#include "CATTools/DataFormats/interface/SecVertex.h"

using namespace cat;

/// default constructor
SecVertex::SecVertex() {
  lxy_ = -9; l3D_ = -9 ; vProb_ = -9 ; dca_ = -9 ; dca2_ = -9; dca3_= -9; cxPtHypot_ = -9; cxPtAbs_ = -9;
  leptonID1_ = 0; leptonID2_ = 0;
  trackQuality1_ = 0; trackQuality2_ =0 ;
  isMCMatch_ = false;
}

SecVertex::SecVertex(reco::VertexCompositeCandidate & aSecVertex) : reco::VertexCompositeCandidate( aSecVertex ) {
  SecVertex();
}

/// destructor
SecVertex::~SecVertex() {
}
