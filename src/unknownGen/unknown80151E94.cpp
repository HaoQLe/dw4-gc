#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013496C();
void *fn_80135250();
void fn_8013A878();
void fn_80145C0C();
void fn_801525F4();
void fn_801AB9F0();
extern char lbl_804A0104[];
extern char lbl_804A0110[];
extern char lbl_804A0124[];
extern char lbl_804A0144[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A83F4[];
extern char lbl_804A848C[];
extern char lbl_804AAF48[];
extern char lbl_8055FD0C[8];
extern char lbl_8055FD14[8];
extern char lbl_8055FD1C[8];
extern char lbl_8055FD24[8];
extern char lbl_8055FD2C[8];
extern char lbl_8055FD34[4];
extern char lbl_8055FD38[4];
extern char lbl_8055FD3C[4];
extern char lbl_8055FD40[4];
extern char lbl_8055FD44[4];
extern void *lbl_805622A4;
extern void *lbl_80564530;
extern void *lbl_8056453C;
extern void *lbl_80564540;
extern void *lbl_80564548;
void *fn_80151E94();
void fn_80151ED0();
void fn_80151EF8();
void *fn_80151F68();
void fn_80151F88();
void *fn_80152018();
void fn_80152054();
void fn_8015207C();
void *fn_801520E0();
void *fn_80152100();
void *fn_8015213C();
void fn_8015227C();
void fn_801522A4();
void *fn_80152314();
void fn_80152334();
void *fn_801523C0();
void *fn_801523FC();
void fn_8015253C();
void fn_80152564();
void *fn_801525D4();
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
struct UnknownGenRoot801523FC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801523FC(){fn_8006665C(this);}
};
struct UnknownGenObject801523FC_0 : UnknownGenRoot801523FC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801523FC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801523FC_1 : UnknownGenObject801523FC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801523FC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801523FC : UnknownGenObject801523FC_1 {
 char unknown2C[12];
 inline ~UnknownGenObject801523FC(){unknown00=lbl_804A848C;}
};
extern "C" {
void *fn_80151E94(){
 if(!lbl_80564530 || !(reinterpret_cast<unsigned int *>(lbl_80564530)[0x24/4]&4)) fn_80151ED0();
 return lbl_80564530;
}
void fn_80151ED0(){
 fn_80066188((int)fn_80151EF8);
}
void fn_80151EF8(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564530,(int)fn_8015207C,(int)fn_80135250,(int)fn_80151F68,(int)lbl_804A0104,40,0,(int)fn_80151F88,0,(int)lbl_8055FD0C);
}
void *fn_80151F68(){return fn_80151E94();}
void fn_80151F88(){
 void *value0=lbl_80564530;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD14,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=lbl_805622A4;
 fn_800659C0(value0,lbl_8055FD1C,lbl_8055FD24,lbl_8055FD2C,value1);
}
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
void fn_80152334(){
 void *value0=lbl_80564540;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD34,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055FD44);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_801AB9F0;
 fn_800659C0(value0,lbl_8055FD38,lbl_8055FD3C,lbl_8055FD40,value1);
}
void *fn_801523C0(){
 if(!lbl_80564548 || !(reinterpret_cast<unsigned int *>(lbl_80564548)[0x24/4]&4)) fn_8015253C();
 return lbl_80564548;
}
void *fn_801523FC(){
 UnknownGenObject801523FC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A848C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8015253C(){
 fn_80066188((int)fn_80152564);
}
void fn_80152564(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564548,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_801525D4,(int)lbl_804A0144,56,(int)fn_801523FC,(int)fn_801525F4,0,0);
}
void *fn_801525D4(){return fn_801523C0();}
}
#pragma pop
