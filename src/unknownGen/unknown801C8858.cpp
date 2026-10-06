#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800BB61C();
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void fn_801C9208();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804B1974[];
extern char lbl_804B1990[];
extern char lbl_804B19A8[];
extern char lbl_804B19BC[];
extern char lbl_804B19D4[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B5500[];
extern char lbl_804B6824[];
extern char lbl_804B6880[];
extern char lbl_804B68E4[];
extern char lbl_804B6948[];
extern char lbl_804B69AC[];
extern char lbl_80560868[8];
extern char lbl_80560870[8];
extern char lbl_80560878[8];
extern char lbl_80560880[8];
extern char lbl_80560888[8];
extern char lbl_80560890[8];
extern char lbl_80560898[8];
extern void *lbl_805621F4;
extern void *lbl_80565374;
extern void *lbl_80565378;
extern void *lbl_80565384;
extern void *lbl_80565388;
void *fn_801C8858();
void *fn_801C8894();
void fn_801C8904();
void fn_801C892C();
void *fn_801C8998();
void *fn_801C8A2C();
void *fn_801C8A68();
void fn_801C8C20();
void fn_801C8C48();
void *fn_801C8CBC();
void fn_801C8CDC();
void *fn_801C8DB0();
void *fn_801C8DEC();
void fn_801C8E5C();
void fn_801C8E84();
void *fn_801C8EF0();
void *fn_801C8F4C();
void *fn_801C8F88();
void fn_801C9148();
void fn_801C9170();
void *fn_801C91E8();
}
struct UnknownGenObject801C8894_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8A68 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8A68(){fn_8006665C(this);}
};
struct UnknownGenObject801C8A68_0 : UnknownGenRoot801C8A68 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8A68_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C8A68_1 : UnknownGenObject801C8A68_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C8A68_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801C8A68_2 : UnknownGenObject801C8A68_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8A68_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801C8A68 : UnknownGenObject801C8A68_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801C8A68(){unknown00=lbl_804B5500;}
};
struct UnknownGenObject801C8DEC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C8F88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C8F88(){fn_8006665C(this);}
};
struct UnknownGenObject801C8F88_0 : UnknownGenRoot801C8F88 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C8F88_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801C8F88 : UnknownGenObject801C8F88_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801C8F88(){unknown00=lbl_804B6824;}
};
extern "C" {
void *fn_801C8858(){
 if(!lbl_80565374 || !(reinterpret_cast<unsigned int *>(lbl_80565374)[0x24/4]&4)) fn_801C8904();
 return lbl_80565374;
}
void *fn_801C8894(){
 UnknownGenObject801C8894_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B69AC;
 object.unknown00=lbl_804B6948;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C8904(){
 fn_80066188((int)fn_801C892C);
}
void fn_801C892C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565374,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801C8998,(int)lbl_804B1974,20,(int)fn_801C8894,0,0,(int)lbl_80560868);
}
void *fn_801C8998(){return fn_801C8858();}
void *fn_801C89B8(void *object){
 fn_801C8C20();
 return fn_8006546C(lbl_80565378,object);
}
void *fn_801C89F0(){
 if(!lbl_80565378) lbl_80565378=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565378;
}
void *fn_801C8A2C(){
 if(!lbl_80565378 || !(reinterpret_cast<unsigned int *>(lbl_80565378)[0x24/4]&4)) fn_801C8C20();
 return lbl_80565378;
}
void *fn_801C8A68(){
 UnknownGenObject801C8A68 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B5500;
 object.unknown20.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C8C20(){
 fn_80066188((int)fn_801C8C48);
}
void fn_801C8C48(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565378,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C8CBC,(int)lbl_804B1990,40,(int)fn_801C8A68,(int)fn_801C8CDC,0,(int)lbl_80560870);
}
void *fn_801C8CBC(){return fn_801C8A2C();}
void fn_801C8CDC(){
 void *value0=lbl_80565378;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560878,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_80560880,lbl_80560888,lbl_80560890,value1);
}
void *fn_801C8D74(){
 if(!lbl_80565384) lbl_80565384=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565384;
}
void *fn_801C8DB0(){
 if(!lbl_80565384 || !(reinterpret_cast<unsigned int *>(lbl_80565384)[0x24/4]&4)) fn_801C8E5C();
 return lbl_80565384;
}
void *fn_801C8DEC(){
 UnknownGenObject801C8DEC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B68E4;
 object.unknown00=lbl_804B6880;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C8E5C(){
 fn_80066188((int)fn_801C8E84);
}
void fn_801C8E84(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565384,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C8EF0,(int)lbl_804B19A8,20,(int)fn_801C8DEC,0,0,(int)lbl_80560898);
}
void *fn_801C8EF0(){return fn_801C8DB0();}
void *fn_801C8F10(){
 if(!lbl_80565388) lbl_80565388=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565388;
}
void *fn_801C8F4C(){
 if(!lbl_80565388 || !(reinterpret_cast<unsigned int *>(lbl_80565388)[0x24/4]&4)) fn_801C9148();
 return lbl_80565388;
}
void *fn_801C8F88(){
 UnknownGenObject801C8F88 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B6824;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C9148(){
 fn_80066188((int)fn_801C9170);
}
void fn_801C9170(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565388,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801C91E8,(int)lbl_804B19D4,32,(int)fn_801C8F88,(int)fn_801C9208,0,(int)lbl_804B19BC);
}
void *fn_801C91E8(){return fn_801C8F4C();}
}
#pragma pop
