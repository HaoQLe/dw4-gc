#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013496C();
void fn_8013A878();
void fn_80145C0C();
void fn_80152334();
extern char lbl_804A0110[];
extern char lbl_804A0124[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A83F4[];
extern char lbl_804AAF48[];
extern void *lbl_8056453C;
extern void *lbl_80564540;
void *fn_80152018();
void fn_80152054();
void fn_8015207C();
void *fn_801520E0();
void *fn_80152100();
void *fn_8015213C();
void fn_8015227C();
void fn_801522A4();
void *fn_80152314();
}
struct UnknownGenRoot8015213C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015213C(){fn_8006665C(this);}
};
struct UnknownGenObject8015213C_0 : UnknownGenRoot8015213C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015213C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015213C_1 : UnknownGenObject8015213C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015213C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015213C : UnknownGenObject8015213C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject8015213C(){unknown00=lbl_804A83F4;}
};
extern "C" {
void *fn_80152018(){
 if(!lbl_8056453C || !(reinterpret_cast<unsigned int *>(lbl_8056453C)[0x24/4]&4)) fn_80152054();
 return lbl_8056453C;
}
void fn_80152054(){
 fn_80066188((int)fn_8015207C);
}
void fn_8015207C(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_8056453C,(int)fn_80145C0C,(int)fn_8013496C,(int)fn_801520E0,(int)lbl_804A0110,32,0,0,0,0);
}
void *fn_801520E0(){return fn_80152018();}
void *fn_80152100(){
 if(!lbl_80564540 || !(reinterpret_cast<unsigned int *>(lbl_80564540)[0x24/4]&4)) fn_8015227C();
 return lbl_80564540;
}
void *fn_8015213C(){
 UnknownGenObject8015213C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A83F4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8015227C(){
 fn_80066188((int)fn_801522A4);
}
void fn_801522A4(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564540,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80152314,(int)lbl_804A0124,48,(int)fn_8015213C,(int)fn_80152334,0,0);
}
void *fn_80152314(){return fn_80152100();}
}
#pragma pop
