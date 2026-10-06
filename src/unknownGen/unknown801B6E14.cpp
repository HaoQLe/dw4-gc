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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801B773C();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_804ADD3C[];
extern char lbl_804ADD50[];
extern char lbl_804ADD68[];
extern char lbl_804ADD78[];
extern char lbl_804ADE50[];
extern char lbl_804B4038[];
extern char lbl_804B82A0[];
extern char lbl_804B8304[];
extern char lbl_804B8368[];
extern char lbl_804B83CC[];
extern char lbl_804B8430[];
extern char lbl_804B8494[];
extern char lbl_804B84F8[];
extern char lbl_80560394[8];
extern char lbl_8056039C[8];
extern char lbl_805603A4[8];
extern char lbl_805603AC[8];
extern char lbl_805603BC[7];
extern void *lbl_805621F4;
extern void *lbl_80564BB0;
extern void *lbl_80564BB4;
extern void *lbl_80564BB8;
extern void *lbl_80564BBC;
extern void *lbl_80564BC0;
void *fn_801B6E14();
void *fn_801B6E50();
void fn_801B6EC0();
void fn_801B6EE8();
void *fn_801B6F54();
void *fn_801B6FE8();
void *fn_801B7024();
void fn_801B7094();
void fn_801B70BC();
void *fn_801B7128();
void *fn_801B71BC();
void *fn_801B71F8();
void fn_801B7268();
void fn_801B7290();
void *fn_801B72FC();
void *fn_801B7390();
void *fn_801B73CC();
void fn_801B743C();
void fn_801B7464();
void *fn_801B74D0();
void *fn_801B752C();
void *fn_801B7568();
void fn_801B7680();
void fn_801B76A8();
void *fn_801B771C();
}
struct UnknownGenObject801B6E50_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B7024_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B71F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801B73CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B7568 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B7568(){fn_8006665C(this);}
};
struct UnknownGenObject801B7568_0 : UnknownGenRoot801B7568 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B7568_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B7568 : UnknownGenObject801B7568_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject801B7568(){unknown00=lbl_804B4038;}
};
extern "C" {
void *fn_801B6E14(){
 if(!lbl_80564BB0 || !(reinterpret_cast<unsigned int *>(lbl_80564BB0)[0x24/4]&4)) fn_801B6EC0();
 return lbl_80564BB0;
}
void *fn_801B6E50(){
 UnknownGenObject801B6E50_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B84F8;
 object.unknown00=lbl_804B8494;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B6EC0(){
 fn_80066188((int)fn_801B6EE8);
}
void fn_801B6EE8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B6F54,(int)lbl_804ADD3C,20,(int)fn_801B6E50,0,0,(int)lbl_80560394);
}
void *fn_801B6F54(){return fn_801B6E14();}
void *fn_801B6F74(void *object){
 fn_801B7094();
 return fn_8006546C(lbl_80564BB4,object);
}
void *fn_801B6FAC(){
 if(!lbl_80564BB4) lbl_80564BB4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BB4;
}
void *fn_801B6FE8(){
 if(!lbl_80564BB4 || !(reinterpret_cast<unsigned int *>(lbl_80564BB4)[0x24/4]&4)) fn_801B7094();
 return lbl_80564BB4;
}
void *fn_801B7024(){
 UnknownGenObject801B7024_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B8430;
 object.unknown00=lbl_804B83CC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7094(){
 fn_80066188((int)fn_801B70BC);
}
void fn_801B70BC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB4,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801B7128,(int)lbl_804ADD50,20,(int)fn_801B7024,0,0,(int)lbl_8056039C);
}
void *fn_801B7128(){return fn_801B6FE8();}
void *fn_801B7148(void *object){
 fn_801B7268();
 return fn_8006546C(lbl_80564BB8,object);
}
void *fn_801B7180(){
 if(!lbl_80564BB8) lbl_80564BB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BB8;
}
void *fn_801B71BC(){
 if(!lbl_80564BB8 || !(reinterpret_cast<unsigned int *>(lbl_80564BB8)[0x24/4]&4)) fn_801B7268();
 return lbl_80564BB8;
}
void *fn_801B71F8(){
 UnknownGenObject801B71F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B84F8;
 object.unknown00=lbl_804B8368;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7268(){
 fn_80066188((int)fn_801B7290);
}
void fn_801B7290(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BB8,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B72FC,(int)lbl_804ADD68,20,(int)fn_801B71F8,0,0,(int)lbl_805603A4);
}
void *fn_801B72FC(){return fn_801B71BC();}
void *fn_801B731C(void *object){
 fn_801B743C();
 return fn_8006546C(lbl_80564BBC,object);
}
void *fn_801B7354(){
 if(!lbl_80564BBC) lbl_80564BBC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BBC;
}
void *fn_801B7390(){
 if(!lbl_80564BBC || !(reinterpret_cast<unsigned int *>(lbl_80564BBC)[0x24/4]&4)) fn_801B743C();
 return lbl_80564BBC;
}
void *fn_801B73CC(){
 UnknownGenObject801B73CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B8304;
 object.unknown00=lbl_804B82A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B743C(){
 fn_80066188((int)fn_801B7464);
}
void fn_801B7464(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BBC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801B74D0,(int)lbl_804ADD78,20,(int)fn_801B73CC,0,0,(int)lbl_805603AC);
}
void *fn_801B74D0(){return fn_801B7390();}
void *fn_801B74F0(){
 if(!lbl_80564BC0) lbl_80564BC0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564BC0;
}
void *fn_801B752C(){
 if(!lbl_80564BC0 || !(reinterpret_cast<unsigned int *>(lbl_80564BC0)[0x24/4]&4)) fn_801B7680();
 return lbl_80564BC0;
}
void *fn_801B7568(){
 UnknownGenObject801B7568 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B7680(){
 fn_80066188((int)fn_801B76A8);
}
void fn_801B76A8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564BC0,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_801B771C,(int)lbl_805603BC,28,(int)fn_801B7568,(int)fn_801B773C,0,(int)lbl_804ADE50);
}
void *fn_801B771C(){return fn_801B752C();}
}
#pragma pop
