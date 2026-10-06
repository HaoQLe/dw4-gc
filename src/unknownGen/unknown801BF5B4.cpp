#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
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
void fn_80066B08();
void fn_801AA6DC();
void fn_801AA950();
void *fn_801B0404();
void *fn_801B47CC();
void *fn_801B7354();
void fn_801B76A8();
void *fn_801BBBF0();
void *fn_801BF368();
void fn_801BF3A4();
void fn_801BFE30();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF4E0[];
extern char lbl_804AF510[];
extern char lbl_804AF520[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B73D4[];
extern char lbl_804B7430[];
extern char lbl_804B7494[];
extern char lbl_805605F0[8];
extern char lbl_805605F8[4];
extern char lbl_805605FC[4];
extern char lbl_80560600[4];
extern char lbl_80560604[4];
extern char lbl_80560608[8];
extern char lbl_80560610[8];
extern char lbl_80560618[4];
extern char lbl_8056061C[4];
extern char lbl_80560620[4];
extern char lbl_80560624[4];
extern char lbl_80560628[8];
extern char lbl_80560630[8];
extern void *lbl_805621F4;
extern void *lbl_80564EC8;
extern void *lbl_80564ED0;
extern void *lbl_80564ED8;
extern void *lbl_80564EDC;
void fn_801BF5DC();
void *fn_801BF650();
void fn_801BF670();
void *fn_801BF76C();
void *fn_801BF7A8();
void fn_801BF910();
void fn_801BF938();
void *fn_801BF9A8();
void fn_801BF9C8();
void *fn_801BFADC();
void *fn_801BFB18();
void fn_801BFB88();
void fn_801BFBB0();
void *fn_801BFC1C();
void *fn_801BFCB0();
void *fn_801BFCEC();
void fn_801BFD74();
void fn_801BFD9C();
void *fn_801BFE10();
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){fn_8006665C(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801BFB18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){fn_8006665C(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=lbl_804B73D4;}
};
extern "C" {
void fn_801BF5B4(){
 fn_80066188((int)fn_801BF5DC);
}
void fn_801BF5DC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EC8,(int)fn_801AA950,(int)fn_801B0404,(int)fn_801BF650,(int)lbl_804AF4E0,40,(int)fn_801BF3A4,(int)fn_801BF670,0,(int)lbl_805605F0);
}
void *fn_801BF650(){return fn_801BF368();}
void fn_801BF670(){
 void *value0=lbl_80564EC8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805605F8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B47CC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 fn_800659C0(value0,lbl_805605FC,lbl_80560600,lbl_80560604,value1);
}
void *fn_801BF6F8(void *object){
 fn_801BF910();
 return fn_8006546C(lbl_80564ED0,object);
}
void *fn_801BF730(){
 if(!lbl_80564ED0) lbl_80564ED0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED0;
}
void *fn_801BF76C(){
 if(!lbl_80564ED0 || !(reinterpret_cast<unsigned int *>(lbl_80564ED0)[0x24/4]&4)) fn_801BF910();
 return lbl_80564ED0;
}
void *fn_801BF7A8(){
 UnknownGenObject801BF7A8 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BF910(){
 fn_80066188((int)fn_801BF938);
}
void fn_801BF938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED0,(int)fn_801B76A8,(int)fn_801BBBF0,(int)fn_801BF9A8,(int)lbl_80560610,32,(int)fn_801BF7A8,(int)fn_801BF9C8,0,(int)lbl_80560608);
}
void *fn_801BF9A8(){return fn_801BF76C();}
void fn_801BF9C8(){
 void *value0=lbl_80564ED0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560618,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B7354();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+36)=3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=2;
 fn_800659C0(value0,lbl_8056061C,lbl_80560620,lbl_80560624,value1);
}
void *fn_801BFA68(void *object){
 fn_801BFB88();
 return fn_8006546C(lbl_80564ED8,object);
}
void *fn_801BFAA0(){
 if(!lbl_80564ED8) lbl_80564ED8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564ED8;
}
void *fn_801BFADC(){
 if(!lbl_80564ED8 || !(reinterpret_cast<unsigned int *>(lbl_80564ED8)[0x24/4]&4)) fn_801BFB88();
 return lbl_80564ED8;
}
void *fn_801BFB18(){
 UnknownGenObject801BFB18_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7494;
 object.unknown00=lbl_804B7430;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFB88(){
 fn_80066188((int)fn_801BFBB0);
}
void fn_801BFBB0(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564ED8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801BFC1C,(int)lbl_804AF510,20,(int)fn_801BFB18,0,0,(int)lbl_80560628);
}
void *fn_801BFC1C(){return fn_801BFADC();}
void *fn_801BFC3C(void *object){
 fn_801BFD74();
 return fn_8006546C(lbl_80564EDC,object);
}
void *fn_801BFC74(){
 if(!lbl_80564EDC) lbl_80564EDC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564EDC;
}
void *fn_801BFCB0(){
 if(!lbl_80564EDC || !(reinterpret_cast<unsigned int *>(lbl_80564EDC)[0x24/4]&4)) fn_801BFD74();
 return lbl_80564EDC;
}
void *fn_801BFCEC(){
 UnknownGenObject801BFCEC object;
 object.unknown00=lbl_804B73D4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BFD74(){
 fn_80066188((int)fn_801BFD9C);
}
void fn_801BFD9C(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EDC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801BFE10,(int)lbl_804AF520,28,(int)fn_801BFCEC,(int)fn_801BFE30,0,(int)lbl_80560630);
}
void *fn_801BFE10(){return fn_801BFCB0();}
}
#pragma pop
