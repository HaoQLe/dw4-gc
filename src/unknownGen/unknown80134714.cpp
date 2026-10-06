#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80134974();
void fn_80145C0C();
extern char lbl_8049C76C[];
extern char lbl_8049C778[];
extern char lbl_804A361C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern void *lbl_80563C40;
extern void *lbl_80564164;
void *fn_80134714();
void *fn_80134750();
void fn_801348AC();
void fn_801348D4();
void *fn_8013494C();
void *fn_8013496C();
}
struct UnknownGenRoot80134750 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80134750(){fn_8006665C(this);}
};
struct UnknownGenObject80134750 : UnknownGenRoot80134750 {
 char unknown04[28];
 UnknownGenString unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80134750(){unknown00=lbl_804A361C;}
};
extern "C" {
void *fn_80134714(){
 if(!lbl_80563C40 || !(reinterpret_cast<unsigned int *>(lbl_80563C40)[0x24/4]&4)) fn_801348AC();
 return lbl_80563C40;
}
void *fn_80134750(){
 UnknownGenObject80134750 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A361C;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801348AC(){
 fn_80066188((int)fn_801348D4);
}
void fn_801348D4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563C40,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_8013494C,(int)lbl_8049C778,48,(int)fn_80134750,(int)fn_80134974,0,(int)lbl_8049C76C);
}
void *fn_8013494C(){return fn_80134714();}
void *fn_8013496C(){return lbl_80564164;}
}
#pragma pop
