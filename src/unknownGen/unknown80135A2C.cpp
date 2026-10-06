#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void fn_80135C8C();
void fn_8013B97C();
extern char lbl_8049C948[];
extern char lbl_804A39B0[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F614[8];
extern void *lbl_80563CA0;
void *fn_80135A64();
void *fn_80135AA0();
void fn_80135BD0();
void fn_80135BF8();
void *fn_80135C6C();
}
struct UnknownGenRoot80135AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135AA0(){fn_8006665C(this);}
};
struct UnknownGenObject80135AA0_0 : UnknownGenRoot80135AA0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135AA0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135AA0 : UnknownGenObject80135AA0_0 {
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80135AA0(){unknown00=lbl_804A39B0;}
};
extern "C" {
void *fn_80135A2C(void *object){
 fn_80135BD0();
 return fn_8006546C(lbl_80563CA0,object);
}
void *fn_80135A64(){
 if(!lbl_80563CA0 || !(reinterpret_cast<unsigned int *>(lbl_80563CA0)[0x24/4]&4)) fn_80135BD0();
 return lbl_80563CA0;
}
void *fn_80135AA0(){
 UnknownGenObject80135AA0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A39B0;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80135BD0(){
 fn_80066188((int)fn_80135BF8);
}
void fn_80135BF8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563CA0,(int)fn_8013B97C,(int)fn_801308D0,(int)fn_80135C6C,(int)lbl_8049C948,48,(int)fn_80135AA0,(int)fn_80135C8C,0,(int)lbl_8055F614);
}
void *fn_80135C6C(){return fn_80135A64();}
}
#pragma pop
