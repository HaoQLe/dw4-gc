#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_80135970();
void *fn_801420C0();
void fn_801465FC();
void fn_80146EE0();
void *fn_8014C1F8();
void fn_80152CE4();
void fn_8015349C();
void fn_801537E0();
extern char lbl_804A01EC[];
extern char lbl_804A0204[];
extern char lbl_804A0210[];
extern char lbl_804A0220[];
extern char lbl_804A022C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A85A0[];
extern char lbl_804A86D0[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055FD48[7];
extern char lbl_8055FD50[8];
extern char lbl_8055FD58[8];
extern char lbl_8055FD60[8];
extern char lbl_8055FD68[8];
extern void *lbl_805622A4;
extern void *lbl_80564558;
extern void *lbl_8056455C;
extern void *lbl_80564560;
extern void *lbl_8056456C;
extern void *lbl_8056458C;
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
void fn_80152A24();
void *fn_80152AC8();
void *fn_80152B04();
void fn_80152C1C();
void fn_80152C44();
void *fn_80152CBC();
void *fn_80152CDC();
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
struct UnknownGenRoot80152B04 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152B04(){fn_8006665C(this);}
};
struct UnknownGenObject80152B04_0 : UnknownGenRoot80152B04 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152B04_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152B04_1 : UnknownGenObject80152B04_0 {
 inline ~UnknownGenObject80152B04_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152B04 : UnknownGenObject80152B04_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152B04(){unknown00=lbl_804A86D0;}
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
void fn_80152A24(){
 void *value0=lbl_80564560;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD50,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=lbl_805622A4;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055FD58,lbl_8055FD60,lbl_8055FD68,value1);
}
void *fn_80152AC8(){
 if(!lbl_8056456C || !(reinterpret_cast<unsigned int *>(lbl_8056456C)[0x24/4]&4)) fn_80152C1C();
 return lbl_8056456C;
}
void *fn_80152B04(){
 UnknownGenObject80152B04 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=lbl_804A86D0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80152C1C(){
 fn_80066188((int)fn_80152C44);
}
void fn_80152C44(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056456C,(int)fn_8015349C,(int)fn_80152CDC,(int)fn_80152CBC,(int)lbl_804A022C,40,(int)fn_80152B04,(int)fn_80152CE4,0,(int)lbl_804A0220);
}
void *fn_80152CBC(){return fn_80152AC8();}
void *fn_80152CDC(){return lbl_8056458C;}
}
#pragma pop
