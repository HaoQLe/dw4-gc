#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035694();
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void fn_8013A9EC();
void *fn_8013AFE4();
void fn_8014E324();
extern char lbl_8049F9F0[];
extern char lbl_8049FA28[];
extern char lbl_804A46AC[];
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A736C[];
extern char lbl_804A7404[];
extern char lbl_804AAF48[];
extern char lbl_8055FBE0[8];
extern char lbl_8055FBE8[8];
extern char lbl_8055FBF8[8];
extern char lbl_8055FC00[8];
extern char lbl_8055FC08[8];
extern void *lbl_8056441C;
extern void *lbl_80564428;
void *fn_8014DD9C();
void *fn_8014DDD8();
void fn_8014DF58();
void fn_8014DF80();
void *fn_8014DFF4();
void fn_8014E014();
void *fn_8014E0B8();
void *fn_8014E0F4();
void fn_8014E26C();
void fn_8014E294();
void *fn_8014E304();
}
struct UnknownGenRoot8014DDD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014DDD8(){fn_8006665C(this);}
};
struct UnknownGenObject8014DDD8_0 : UnknownGenRoot8014DDD8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014DDD8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014DDD8_1 : UnknownGenObject8014DDD8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014DDD8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014DDD8 : UnknownGenObject8014DDD8_1 {
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014DDD8(){unknown00=lbl_804A736C;}
};
struct UnknownGenRoot8014E0F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E0F4(){fn_8006665C(this);}
};
struct UnknownGenObject8014E0F4_0 : UnknownGenRoot8014E0F4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014E0F4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014E0F4_1 : UnknownGenObject8014E0F4_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject8014E0F4_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject8014E0F4 : UnknownGenObject8014E0F4_1 {
 char unknown30[24];
 inline ~UnknownGenObject8014E0F4(){unknown00=lbl_804A7404;}
};
extern "C" {
void *fn_8014DD9C(){
 if(!lbl_8056441C || !(reinterpret_cast<unsigned int *>(lbl_8056441C)[0x24/4]&4)) fn_8014DF58();
 return lbl_8056441C;
}
void *fn_8014DDD8(){
 UnknownGenObject8014DDD8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A736C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014DF58(){
 fn_80066188((int)fn_8014DF80);
}
void fn_8014DF80(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056441C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_8014DFF4,(int)lbl_8049F9F0,52,(int)fn_8014DDD8,(int)fn_8014E014,0,(int)lbl_8055FBE0);
}
void *fn_8014DFF4(){return fn_8014DD9C();}
void fn_8014E014(){
 void *value0=lbl_8056441C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FBE8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80035694();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 fn_800659C0(value0,lbl_8055FBF8,lbl_8055FC00,lbl_8055FC08,value1);
}
void *fn_8014E0B8(){
 if(!lbl_80564428 || !(reinterpret_cast<unsigned int *>(lbl_80564428)[0x24/4]&4)) fn_8014E26C();
 return lbl_80564428;
}
void *fn_8014E0F4(){
 UnknownGenObject8014E0F4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A7404;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014E26C(){
 fn_80066188((int)fn_8014E294);
}
void fn_8014E294(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564428,(int)fn_8013A9EC,(int)fn_8013AFE4,(int)fn_8014E304,(int)lbl_8049FA28,72,(int)fn_8014E0F4,(int)fn_8014E324,0,0);
}
void *fn_8014E304(){return fn_8014E0B8();}
}
#pragma pop
