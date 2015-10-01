//
//  direct_conflations.cpp
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

const char* const direct_conflations[] = {
"aging", "age",
"going", "go",
"goes", "go",
"lying", "lie",
"using", "use",
"owing", "owe",
"suing", "sue",
"dying", "die",
"tying", "tie",
"vying", "vie",
"aged", "age",
"used", "use",
"vied", "vie",
"cued", "cue",
"died", "die",
"eyed", "eye",
"hued", "hue",
"iced", "ice",
"lied", "lie",
"owed", "owe",
"sued", "sue",
"toed", "toe",
"tied", "tie",
"does", "do",
"doing", "do",
"fled", "flee",
"aeronautical", "aeronautics",
"mathematical", "mathematics",
"political", "politics",
"metaphysical", "metaphysics",
"cylindrical", "cylinder",
"nazism", "nazi",
"ambiguity", "ambiguous",
"barbarity", "barbarous",
"credulity", "credulous",
"generosity", "generous",
"spontaneity", "spontaneous",
"unanimity", "unanimous",
"voracity", "voracious",
"miscarriage", "miscarry"
};

const unsigned direct_conflations_size = sizeof(direct_conflations) / sizeof( *direct_conflations ) ;

}
