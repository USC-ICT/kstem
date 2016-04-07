//
//  kstem_data.hpp
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

#ifndef __kstem_kstem_data_hpp__
#define __kstem_kstem_data_hpp__

namespace kstem {

extern const char* const country_nationality[];
extern const unsigned country_nationality_size;

extern const char* const dict_supplement[];
extern const unsigned dict_supplement_size;

extern const char* const direct_conflations[];
extern const unsigned direct_conflations_size;

extern const char* const e_exception_words[];
extern const unsigned e_exception_words_size;

extern const char* const head_word_list[];
extern const unsigned head_word_list_size;

extern const char* const proper_nouns[];
extern const unsigned proper_nouns_size;

}

#endif // __kstem_kstem_data_hpp__
