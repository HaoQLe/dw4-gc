#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_80135970();
void *fn_801420C0();
void fn_801465FC();
void fn_80146EE0();
void *fn_8014C1F8();
void fn_80152A24();
void fn_801537E0();
extern char lbl_804A01EC[];
extern char lbl_804A0204[];
extern char lbl_804A0210[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A85A0[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055FD48[7];
extern void *lbl_80564558;
extern void *lbl_8056455C;
extern void *lbl_80564560;
void *fn_80152664();
void fn_801526A0();
void fn_801526C8();
void *fn_8015272C();
void *fn_8015274C();
void fn_80152788();
void fn_801527B0();
void *fn_80152810();
void *fn_80152830();
void *fn_8015286C();
void fn_80152964();
void fn_8015298C();
void *fn_80152A04();
}
struct UnknownGenRoot8015286C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015286C(){fn_8006665C(this);}
};
struct UnknownGenObject8015286C : UnknownGenRoot8015286C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8015286C(){unknown00=lbl_804A85A0;}
};
extern "C" {
void *fn_80152664(){
 if(!lbl_80564558 || !(reinterpret_cast<unsigned int *>(lbl_80564558)[0x24/4]&4)) fn_801526A0();
 return lbl_80564558;
}
void fn_801526A0(){
 fn_80066188((int)fn_801526C8);
}
void fn_801526C8(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564558,(int)fn_80146EE0,(int)fn_8014C1F8,(int)fn_8015272C,(int)lbl_804A01EC,32,0,0,0,0);
}
void *fn_8015272C(){return fn_80152664();}
void *fn_8015274C(){
 if(!lbl_8056455C || !(reinterpret_cast<unsigned int *>(lbl_8056455C)[0x24/4]&4)) fn_80152788();
 return lbl_8056455C;
}
void fn_80152788(){
 fn_80066188((int)fn_801527B0);
}
void fn_801527B0(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056455C,(int)fn_801465FC,(int)fn_801420C0,(int)fn_80152810,(int)lbl_8055FD48,32,0,0,0,0);
}
void *fn_80152810(){return fn_8015274C();}
void *fn_80152830(){
 if(!lbl_80564560 || !(reinterpret_cast<unsigned int *>(lbl_80564560)[0x24/4]&4)) fn_80152964();
 return lbl_80564560;
}
void *fn_8015286C(){
 UnknownGenObject8015286C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A85A0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80152964(){
 fn_80066188((int)fn_8015298C);
}
void fn_8015298C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564560,(int)fn_801537E0,(int)fn_80135970,(int)fn_80152A04,(int)lbl_804A0210,40,(int)fn_8015286C,(int)fn_80152A24,0,(int)lbl_804A0204);
}
void *fn_80152A04(){return fn_80152830();}
}
#pragma pop
