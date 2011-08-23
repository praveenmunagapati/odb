/***************************************************************************
                          main.cpp  -  description
                             -------------------
    begin                : Thu Mai 10 01:56:53 CEST 2005
    copyright            : (C) 1993..2005 by Manfred Morgner
    email                : manfred@morgner.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *                                                                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place Suite 330,                                            *
 *   Boston, MA  02111-1307, USA.                                          *
 *                                                                         *
 ***************************************************************************/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include "generic.h"

#include "odb.h"

using namespace odb;

int main (int argc, char * const argv[])
  {
  CODB odb;

//  CClass*  poClassAdr = odb.NewClass (_TEXT("Person"));
  CClass*  poClassWrd = odb.NewClass (_TEXT("Word"));

  for (int n=0; n < 40; n++)
    {
    CObject* poObject = odb.NewObject(_TEXT("Wort"), poClassWrd);
    poObject->AtomAdd( odb.Add(new CAtom(_TEXT("en"), _TEXT("Cinema"))) );
    poObject->AtomAdd( odb.Add(new CAtom(_TEXT("de"), _TEXT("Kino"))) );
    }

  odb.SaveXML("wb-40.odb");

  return 0;
  } // int main (int argc, char * const argv[])

