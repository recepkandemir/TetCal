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
// TETPrimaryMessenger.cc
// \file   MRCP_GEANT4/External/src/TETModelImport.cc
// \author Haegin Han
//

#ifndef SRC_TETPRIMARYMESSENGER_HH_
#define SRC_TETPRIMARYMESSENGER_HH_ 1

#include "globals.hh"
#include "G4UImessenger.hh"

class G4UIdirectory;
class G4UIcmdWithAString;
class PrimaryGeneratorAction_general;

class TETPrimaryMessenger: public G4UImessenger
{
public:
	TETPrimaryMessenger(PrimaryGeneratorAction_general* primary);
	virtual ~TETPrimaryMessenger();

	virtual void SetNewValue(G4UIcommand*, G4String);

private:
	PrimaryGeneratorAction_general* fPrimary;
	G4UIdirectory*             fExternalDir;
	G4UIcmdWithAString*        fBeamDirCmd;
	G4UIdirectory*             fInternalDir;
	G4UIcmdWithAString*        fSourceOrganCmd;
	G4UIcmdWithAString*        fSurfaceSourceCmd;
};

#endif
