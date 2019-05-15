//
//  KStem.mm
//  kstem
//
//  Created by Anton Leuski on 5/15/19.
//  Copyright © 2019 Anton Leuski. All rights reserved.
//

#import "KStem.h"

extern "C" {
  void read_dict_info(void);
  void stem(char *term, char *stem);
}

struct Kstemmer {
  Kstemmer() {
    read_dict_info();
  }
  inline void stem(const char* inString, char* outStem) {
    ::stem((char*)inString, outStem);
  }
};

@interface KStemmer ()
@property (assign) Kstemmer stemmer;
@end

@implementation KStemmer
- (NSString*)stem:(NSString*)string {
  const char* input = [string cStringUsingEncoding:NSASCIIStringEncoding];
  if (!input) { return string; }
  char* output = (char*)malloc(strlen(input)+10);
  if (!output) { return string; }
  self->_stemmer.stem(input, output);
  if (strcmp(input, output)) {
    auto length = strlen(output);
    return [[NSString alloc] initWithBytesNoCopy:output 
                                          length:length 
                                        encoding:NSASCIIStringEncoding 
                                    freeWhenDone:YES];
  }
  free(output);
  return string;
}
@end
