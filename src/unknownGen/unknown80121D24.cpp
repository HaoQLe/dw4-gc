#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *fn_80024D1C();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_8012200C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80498CAC[];
extern char lbl_80498CBC[];
extern char lbl_8049A820[];
extern char lbl_8049A880[];
extern char lbl_8049A8E0[];
extern char lbl_8049A944[];
extern char lbl_8055F3F0[8];
extern void *lbl_805621F4;
extern void *lbl_80563A08;
extern void *lbl_80563A0C;
void *fn_80121D60();
void *fn_80121D9C();
void fn_80121E0C();
void fn_80121E34();
void *fn_80121EA0();
void *fn_80121EC0();
void *fn_80121EFC();
void fn_80121F54();
void fn_80121F7C();
void *fn_80121FEC();
}
struct UnknownGenObject80121D9C {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80121EFC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80121D24(){
 if(!lbl_80563A08) lbl_80563A08=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563A08;
}
void *fn_80121D60(){
 if(!lbl_80563A08 || !(reinterpret_cast<unsigned int *>(lbl_80563A08)[0x24/4]&4)) fn_80121E0C();
 return lbl_80563A08;
}
void *fn_80121D9C(){
 UnknownGenObject80121D9C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049A944;
 object.unknown00=lbl_8049A8E0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80121E0C(){
 fn_80066188((int)fn_80121E34);
}
void fn_80121E34(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A08,(int)fn_8002907C,(int)fn_80024180,(int)fn_80121EA0,(int)lbl_80498CAC,20,(int)fn_80121D9C,0,0,(int)lbl_8055F3F0);
}
void *fn_80121EA0(){return fn_80121D60();}
void *fn_80121EC0(){
 if(!lbl_80563A0C || !(reinterpret_cast<unsigned int *>(lbl_80563A0C)[0x24/4]&4)) fn_80121F54();
 return lbl_80563A0C;
}
void *fn_80121EFC(){
 UnknownGenObject80121EFC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049A880;
 object.unknown00=lbl_8049A820;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80121F54(){
 fn_80066188((int)fn_80121F7C);
}
void fn_80121F7C(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A0C,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121FEC,(int)lbl_80498CBC,20,(int)fn_80121EFC,(int)fn_8012200C,0,0);
}
void *fn_80121FEC(){return fn_80121EC0();}
}
#pragma pop
