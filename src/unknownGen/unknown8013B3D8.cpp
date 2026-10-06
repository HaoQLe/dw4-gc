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
void fn_8013B688();
void fn_80146870();
void *fn_80182E70();
extern char lbl_8049D9EC[];
extern char lbl_8049D9FC[];
extern char lbl_804A4980[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
extern void *lbl_805621F4;
extern void *lbl_80563EB8;
extern void *lbl_80564198;
void *fn_8013B434();
void *fn_8013B470();
void fn_8013B5C0();
void fn_8013B5E8();
void *fn_8013B660();
void *fn_8013B680();
}
struct UnknownGenRoot8013B470 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013B470(){fn_8006665C(this);}
};
struct UnknownGenObject8013B470 : UnknownGenRoot8013B470 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8013B470(){unknown00=lbl_804A4980;}
};
extern "C" {
void *fn_8013B3D8(){return fn_80182E70();}
void *fn_8013B3F8(){
 if(!lbl_80563EB8) lbl_80563EB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563EB8;
}
void *fn_8013B434(){
 if(!lbl_80563EB8 || !(reinterpret_cast<unsigned int *>(lbl_80563EB8)[0x24/4]&4)) fn_8013B5C0();
 return lbl_80563EB8;
}
void *fn_8013B470(){
 UnknownGenObject8013B470 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 object.unknown00=lbl_804A4980;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013B5C0(){
 fn_80066188((int)fn_8013B5E8);
}
void fn_8013B5E8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EB8,(int)fn_80146870,(int)fn_8013B680,(int)fn_8013B660,(int)lbl_8049D9FC,48,(int)fn_8013B470,(int)fn_8013B688,0,(int)lbl_8049D9EC);
}
void *fn_8013B660(){return fn_8013B434();}
void *fn_8013B680(){return lbl_80564198;}
}
#pragma pop
