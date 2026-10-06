#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B7DEC();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804ADF48[];
extern char lbl_804B81D8[];
extern char lbl_804B823C[];
extern char lbl_805603D4[8];
extern void *lbl_805621F4;
extern void *lbl_80564BE8;
extern void *lbl_80564BEC;
void *fn_801B7BBC();
void *fn_801B7BF8();
void fn_801B7C68();
void fn_801B7C90();
void *fn_801B7CFC();
}
struct UnknownGenObject801B7BF8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801B7B80(){
 if(!lbl_80564BE8) lbl_80564BE8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BE8;
}
void *fn_801B7BBC(){
 if(!lbl_80564BE8 || !(reinterpret_cast<unsigned int *>(lbl_80564BE8)[0x24/4]&4)) fn_801B7C68();
 return lbl_80564BE8;
}
void *fn_801B7BF8(){
 UnknownGenObject801B7BF8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B823C;
 object.unknown00=lbl_804B81D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7C68(){
 fn_80066188((int)fn_801B7C90);
}
void fn_801B7C90(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BE8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B7CFC,(int)lbl_804ADF48,20,(int)fn_801B7BF8,0,0,(int)lbl_805603D4);
}
void *fn_801B7CFC(){return fn_801B7BBC();}
void *fn_801B7D1C(){
 if(!lbl_80564BEC || !(reinterpret_cast<unsigned int *>(lbl_80564BEC)[0x24/4]&4)) fn_801B7DEC();
 return lbl_80564BEC;
}
}
#pragma pop
