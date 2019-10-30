//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/// \file hadronic/Hadr03/src/PhysicsList.cc
/// \brief Implementation of the PhysicsList class
//
// $Id: PhysicsList.cc 70268 2013-05-28 14:17:50Z maire $


#include "TETPhysicsList.hh"

#include "G4SystemOfUnits.hh"
#include "G4UnitsTable.hh"

#include "HadronElasticPhysicsHP.hh"
#include "G4HadronPhysicsFTFP_BERT_HP.hh"
#include "G4IonPhysics.hh"
//#include "G4IonINCLXXPhysics.hh"
#include "GammaPhysics.hh"

#include "G4EmLivermorePhysics.hh"
#include "G4DecayPhysics.hh"
#include "G4RadioactiveDecayPhysics.hh"


TETPhysicsList::TETPhysicsList()
:G4VModularPhysicsList()
{
  G4int verb = 0;
  SetVerboseLevel(verb);

  // EM physics
  RegisterPhysics(new G4EmLivermorePhysics());

  // Decay
  RegisterPhysics(new G4DecayPhysics());

  // Radioactive decay
  RegisterPhysics(new G4RadioactiveDecayPhysics());
}


TETPhysicsList::~TETPhysicsList()
{ }


void TETPhysicsList::SetCuts()
{
  SetCutValue(1*mm, "proton");
  SetCutValue(1*mm, "e-");
  SetCutValue(1*mm, "e+");
  SetCutValue(1*mm, "gamma");
}
