//
//  proper_nouns.cpp
//
//  Created by Anton Leuski on 8/7/15.
//  Copyright (c) 2015 Anton Leuski & ICT/USC. All rights reserved.
//

/*
	This data is taken from kstem 0.8 distribution.

                     Copyright 1990,1991 by the
                  Information Retrieval Laboratory,
                     University of Massachusetts,
                          Amherst MA. 01003
                         All Rights Reserved.

		Kstem is free software; you can redistribute it and/or modify it under
    the terms of the GNU Library General Public License as published by the 
    Free Software Foundation; either version 2 of the  License, or (at your 
    option) any later version.

    Kstem is distributed in the hope that it will be useful, but WITHOUT ANY 
    WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS 
    FOR A PARTICULAR PURPOSE.  See the GNU Library General Public License for 
    more details.

    The GNU Library General Public License is available at part of the Linux
    system, or by writing to the Free Software Foundation, Inc., 59 Temple Place,
    Suite 330, Boston, MA 02111-1307, USA. 
*/

#include "kstem_data.hpp"

namespace kstem {

const char* const proper_nouns[] = {
"aarhus",
"abrams",
"achilles",
"acropolis",
"adams",
"adonis",
"agnes",
"aires",
"alexander",
"alexis",
"alfred",
"algiers",
"alps",
"amadeus",
"ames",
"amos",
"andes",
"andrews",
"angeles",
"angus",
"annapolis",
"antares",
"antilles",
"aquarius",
"aquinas",
"archimedes",
"arcturus",
"ares",
"arkansas",
"artemis",
"asher",
"ashly",
"athens",
"atkins",
"atlantis",
"augustus",
"avis",
"ayers",
"bahamas",
"bangor",
"barbados",
"barger",
"barnabas",
"barnes",
"becker",
"bejing",
"bering",
"biggs",
"billings",
"boeing",
"boris",
"borroughs",
"brahms",
"brandeis",
"briggs",
"brussels",
"bruxelles",
"buenos",
"cairns",
"calais",
"camoros",
"camus",
"caracas",
"carlos",
"cassius",
"celts",
"cerberus",
"ceres",
"cervantes",
"chalker",
"chantilly",
"charles",
"chartres",
"cheops",
"chester",
"ching",
"christmas",
"cocos",
"collins",
"columbus",
"confucius",
"connally",
"conner",
"conners",
"connolly",
"coors",
"copernicus",
"cramer",
"cummings",
"curtis",
"cyclops",
"cygnus",
"cyprus",
"daedalus",
"dallas",
"damascus",
"daniels",
"davies",
"davis",
"decker",
"denning",
"dennis",
"descartes",
"dickens",
"dionysus",
"dobbs",
"dolores",
"doris",
"douglas",
"downs",
"dreyfus",
"dukakis",
"dulles",
"dumfries",
"ecclesiastes",
"edmonds",
"edwards",
"emily",
"erasmus",
"euphrates",
"evans",
"everglades",
"fairbanks",
"federales",
"fisher",
"fitzsimmons",
"fleming",
"forbes",
"fowler",
"frances",
"francis",
"goering",
"goodling",
"goths",
"grenadines",
"guiness",
"hades",
"harding",
"harris",
"hastings",
"hawkes",
"hawking",
"hayes",
"heights",
"hercules",
"himalayas",
"hippocrates",
"hobbs",
"holmes",
"honduras",
"hopkins",
"hughes",
"humphreys",
"illinois",
"indianapolis",
"inverness",
"iris",
"iroquois",
"irving",
"isaacs",
"italy",
"james",
"jarvis",
"jeffreys",
"jesus",
"jones",
"josephus",
"judas",
"julius",
"kansas",
"keynes",
"kipling",
"kiwanis",
"lansing",
"laos",
"leeds",
"levis",
"leviticus",
"lewis",
"louis",
"maccabees",
"madras",
"maimonides",
"maldive",
"massachusetts",
"matthews",
"mauritius",
"memphis",
"mercedes",
"midas",
"mingus",
"minneapolis",
"mohammed",
"moines",
"morris",
"moses",
"myers",
"myknos",
"nablus",
"nanjing",
"nantes",
"naples",
"neal",
"netherlands",
"nevis",
"nostradamus",
"oedipus",
"olympus",
"orleans",
"orly",
"papas",
"paris",
"parker",
"pauling",
"peking",
"pershing",
"peter",
"peters",
"philippines",
"phineas",
"pisces",
"pryor",
"pythagoras",
"queens",
"rabelais",
"ramses",
"reynolds",
"rhesus",
"rhodes",
"richards",
"robins",
"rodgers",
"rogers",
"rubens",
"sagittarius",
"seychelles",
"socrates",
"texas",
"thames",
"thomas",
"tiberias",
"tunis",
"venus",
"vilnius",
"wales",
"warner",
"wilkins",
"williams",
"wyoming",
"xmas",
"yonkers",
"zeus"
};

const unsigned proper_nouns_size = sizeof(proper_nouns) / sizeof( *proper_nouns ) ;

}
