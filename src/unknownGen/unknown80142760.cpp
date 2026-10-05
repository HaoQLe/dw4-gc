#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013B680();
void fn_801428E8();
void fn_80146870();
extern char lbl_8049E28C[];
extern char lbl_804A60D8[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
extern void *lbl_805621F4;
extern void *lbl_80564088;
void *fn_8014279C();
void *fn_801427D8();
void fn_80142830();
void fn_80142858();
void *fn_801428C8();
}
struct UnknownGenObject801427D8 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80142760(){
 if(!lbl_80564088) lbl_80564088=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564088;
}
void *fn_8014279C(){
 if(!lbl_80564088 || !(reinterpret_cast<unsigned int *>(lbl_80564088)[0x24/4]&4)) fn_80142830();
 return lbl_80564088;
}
void *fn_801427D8(){
 UnknownGenObject801427D8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A60D8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142830(){
 fn_80066188((int)fn_80142858);
}
void fn_80142858(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564088,(int)fn_80146870,(int)fn_8013B680,(int)fn_801428C8,(int)lbl_8049E28C,36,(int)fn_801427D8,(int)fn_801428E8,0,0);
}
void *fn_801428C8(){return fn_8014279C();}
}
#pragma pop
