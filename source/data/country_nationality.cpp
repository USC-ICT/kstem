//
//  country_nationality.cpp
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

const char* const country_nationality[] = {
"afghan", "afghanistan",
"african", "africa",
"albanian", "albania",
"algerian", "algeria",
"american", "america",
"andorran", "andorra",
"angolan", "angola",
"arabian", "arabia",
"argentine", "argentina",
"armenian", "armenia",
"asian", "asia",
"australian", "australia",
"austrian", "austria",
"azerbaijani", "azerbaijan",
"azeri", "azerbaijan",
"bangladeshi", "bangladesh",
"belgian", "belgium",
"bermudan", "bermuda",
"bolivian", "bolivia",
"bosnian", "bosnia",
"botswanan", "botswana",
"brazilian", "brazil",
"british", "britain",
"bulgarian", "bulgaria",
"burmese", "burma",
"californian", "california",
"cambodian", "cambodia",
"canadian", "canada",
"chadian", "chad",
"chilean", "chile",
"chinese", "china",
"colombian", "colombia",
"croat", "croatia",
"croatian", "croatia",
"cuban", "cuba",
"cypriot", "cyprus",
"czechoslovakian", "czechoslovakia",
"danish", "denmark",
"egyptian", "egypt",
"equadorian", "equador",
"eritrean", "eritrea",
"estonian", "estonia",
"ethiopian", "ethiopia",
"european", "europe",
"fijian", "fiji",
"filipino", "philippines",
"finnish", "finland",
"french", "france",
"gambian", "gambia",
"georgian", "georgia",
"german", "germany",
"ghanian", "ghana",
"greek", "greece",
"grenadan", "grenada",
"guamian", "guam",
"guatemalan", "guatemala",
"guinean", "guinea",
"guyanan", "guyana",
"haitian", "haiti",
"hawaiian", "hawaii",
"holland", "dutch",
"honduran", "honduras",
"hungarian", "hungary",
"icelandic", "iceland",
"indonesian", "indonesia",
"iranian", "iran",
"iraqi", "iraq",
"iraqui", "iraq",
"irish", "ireland",
"israeli", "israel",
"italian", "italy",
"jamaican", "jamaica",
"japanese", "japan",
"jordanian", "jordan",
"kampuchean", "cambodia",
"kenyan", "kenya",
"korean", "korea",
"kuwaiti", "kuwait",
"lankan", "lanka",
"laotian", "laos",
"latvian", "latvia",
"lebanese", "lebanon",
"liberian", "liberia",
"libyan", "libya",
"lithuanian", "lithuania",
"macedonian", "macedonia",
"madagascan", "madagascar",
"malaysian", "malaysia",
"maltese", "malta",
"mauritanian", "mauritania",
"mexican", "mexico",
"micronesian", "micronesia",
"moldovan", "moldova",
"monacan", "monaco",
"mongolian", "mongolia",
"montenegran", "montenegro",
"moroccan", "morocco",
"myanmar", "burma",
"namibian", "namibia",
"nepalese", "nepal",
"nicaraguan", "nicaragua",
"nigerian", "nigeria",
"norwegian", "norway",
"omani", "oman",
"pakistani", "pakistan",
"panamanian", "panama",
"papuan", "papua",
"paraguayan", "paraguay",
"peruvian", "peru",
"portuguese", "portugal",
"romanian", "romania",
"rumania", "romania",
"rumanian", "romania",
"russian", "russia",
"rwandan", "rwanda",
"samoan", "samoa",
"scottish", "scotland",
"serb", "serbia",
"serbian", "serbia",
"siam", "thailand",
"siamese", "thailand",
"slovakia", "slovak",
"slovakian", "slovak",
"slovenian", "slovenia",
"somali", "somalia",
"somalian", "somalia",
"spanish", "spain",
"swedish", "sweden",
"swiss", "switzerland",
"syrian", "syria",
"taiwanese", "taiwan",
"tanzanian", "tanzania",
"texan", "texas",
"thai", "thailand",
"tunisian", "tunisia", 
"turkish", "turkey",
"ugandan", "uganda",
"ukrainian", "ukraine",
"uruguayan", "uruguay",
"uzbek", "uzbekistan",
"venezuelan", "venezuela",
"vietnamese", "viet",
"virginian", "virginia",
"yemeni", "yemen",
"yugoslav", "yugoslavia",
"yugoslavian", "yugoslavia",
"zambian", "zambia",
"zealander", "zealand",
"zimbabwean", "zimbabwe"
};

const unsigned country_nationality_size = sizeof(country_nationality) / sizeof( *country_nationality ) ;

}
