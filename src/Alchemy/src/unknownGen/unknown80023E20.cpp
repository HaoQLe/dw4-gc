#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80024334();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_8003AF84();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
extern char lbl_804633A8[];
extern char lbl_804633C4[];
extern char lbl_80472FA0[];
extern char lbl_80476BB4[];
extern char lbl_80476C18[];
extern char lbl_80476C7C[];
extern char lbl_80476CE0[];
extern char lbl_80476D44[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_8055D080[8];
extern char lbl_8055D088[8];
extern void *lbl_80561530;
extern void *lbl_80561534;
extern void *lbl_80561538;
extern void *lbl_80561708;
extern void *lbl_80561730;
extern void *lbl_805621F4;
void *fn_80023E7C();
void *fn_80023EB8();
void fn_80023F28();
void fn_80023F50();
void *fn_80023FBC();
void *fn_80023FDC();
void *fn_80024020();
void *fn_8002405C();
void fn_800240CC();
void fn_800240F4();
void *fn_80024160();
void *fn_80024180();
}
struct UnknownGenObject80023EB8 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8002405C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80023E20(){return fn_8003AF84();}
void *fn_80023E40(){
 if(!lbl_80561530) lbl_80561530=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561530;
}
void *fn_80023E7C(){
 if(!lbl_80561530 || !(reinterpret_cast<unsigned int *>(lbl_80561530)[0x24/4]&4)) fn_80023F28();
 return lbl_80561530;
}
void *fn_80023EB8(){
 UnknownGenObject80023EB8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_80476D44;
 object.unknown00=lbl_80476CE0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80023F28(){
 fn_80066188((int)fn_80023F50);
}
void fn_80023F50(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561530,(int)fn_80029694,(int)fn_80023FDC,(int)fn_80023FBC,(int)lbl_804633A8,20,(int)fn_80023EB8,0,0,(int)lbl_8055D080);
}
void *fn_80023FBC(){return fn_80023E7C();}
void *fn_80023FDC(){return lbl_80561730;}
void *fn_80023FE4(){
 if(!lbl_80561534) lbl_80561534=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561534;
}
void *fn_80024020(){
 if(!lbl_80561534 || !(reinterpret_cast<unsigned int *>(lbl_80561534)[0x24/4]&4)) fn_800240CC();
 return lbl_80561534;
}
void *fn_8002405C(){
 UnknownGenObject8002405C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80476C18;
 object.unknown00=lbl_80476BB4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800240CC(){
 fn_80066188((int)fn_800240F4);
}
void fn_800240F4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561534,(int)fn_8002907C,(int)fn_80024180,(int)fn_80024160,(int)lbl_804633C4,20,(int)fn_8002405C,0,0,(int)lbl_8055D088);
}
void *fn_80024160(){return fn_80024020();}
void *fn_80024180(){return lbl_80561708;}
void *fn_80024188(void *object){
 fn_80024334();
 return fn_8006546C(lbl_80561538,object);
}
void *fn_800241C0(){
 if(!lbl_80561538 || !(reinterpret_cast<unsigned int *>(lbl_80561538)[0x24/4]&4)) fn_80024334();
 return lbl_80561538;
}
}
#pragma pop
