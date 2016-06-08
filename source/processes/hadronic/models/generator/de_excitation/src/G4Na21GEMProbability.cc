//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4Na21GEMProbability.cc,v 1.1 2002/06/06 18:02:22 larazb Exp $
// GEANT4 tag $Name: geant4-04-01 $
//
// Hadronic Process: Nuclear De-excitations
// by V. Lara (Nov 1999)
//


#include "G4Na21GEMProbability.hh"

G4Na21GEMProbability::G4Na21GEMProbability() :
  G4GEMProbability(21,11,3.0/2.0) // A,Z,Spin
{

    ExcitEnergies.push_back(331.93*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(7.08*picosecond);

    ExcitEnergies.push_back(1716.0*keV);
    ExcitSpins.push_back(7.0/2.0);
    ExcitLifetimes.push_back(28.0e-3*picosecond);

    ExcitEnergies.push_back(2424.9*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(2.0e-3*picosecond);

    ExcitEnergies.push_back(2798.2*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(4.4E-6*eV));
    
    ExcitEnergies.push_back(2829.4*keV);
    ExcitSpins.push_back(9.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(50E-6*eV));
    
    ExcitEnergies.push_back(3544.0*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(15.5*eV));
    
    ExcitEnergies.push_back(3679.7*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(193.0*eV));
    
    ExcitEnergies.push_back(3863.1*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(2.6*eV));
    
    ExcitEnergies.push_back(4170.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(180.0*keV));
    
    ExcitEnergies.push_back(4294.0*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(3.93*keV));
    
    ExcitEnergies.push_back(4468.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(21.0*keV));
    
    ExcitEnergies.push_back(4980.0*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(200.0*keV));
    
    ExcitEnergies.push_back(5457.0*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(110.0*keV));
    
    ExcitEnergies.push_back(5770.0*keV);
    ExcitSpins.push_back(7.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(20.0*keV));
    
    ExcitEnergies.push_back(5815.0*keV);
    ExcitSpins.push_back(7.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(0.4*keV));
    
    ExcitEnergies.push_back(5828.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(25.0*keV));
    
    ExcitEnergies.push_back(6094.0*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(5.0*keV));
    
    ExcitEnergies.push_back(6512.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(220.0*keV));
    
    ExcitEnergies.push_back(6908.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(100.0*keV));
    
    ExcitEnergies.push_back(7194.0*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(320.0*keV));
    
    ExcitEnergies.push_back(7432.0*keV);
    ExcitSpins.push_back(5.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(300.0*keV));
    
    ExcitEnergies.push_back(8973.0*keV);
    ExcitSpins.push_back(3.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(1.2*keV));
    
    ExcitEnergies.push_back(9220.0*keV);
    ExcitSpins.push_back(1.0/2.0);
    ExcitLifetimes.push_back(hbar_Planck*log(2.0)/(2.3*keV));
    
}


G4Na21GEMProbability::G4Na21GEMProbability(const G4Na21GEMProbability &right)
{
  G4Exception("G4Na21GEMProbability::copy_constructor meant to not be accessable");
}




const G4Na21GEMProbability & G4Na21GEMProbability::
operator=(const G4Na21GEMProbability &right)
{
  G4Exception("G4Na21GEMProbability::operator= meant to not be accessable");
  return *this;
}


G4bool G4Na21GEMProbability::operator==(const G4Na21GEMProbability &right) const
{
  return false;
}

G4bool G4Na21GEMProbability::operator!=(const G4Na21GEMProbability &right) const
{
  return true;
}


