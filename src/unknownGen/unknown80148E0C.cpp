#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void *fn_800D1DA4();
void fn_800D1F6C();
void fn_8012FC48();
void fn_801499C8();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804930AC[];
extern char lbl_8049EEA4[];
extern char lbl_8049EEBC[];
extern char lbl_8049EED0[];
extern char lbl_8049EEE0[];
extern char lbl_8049EEF8[];
extern char lbl_8049EF08[];
extern char lbl_8049EF14[];
extern char lbl_8049EF20[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
extern char lbl_804A903C[];
extern char lbl_804A90A0[];
extern char lbl_804A9160[];
extern char lbl_804A91BC[];
extern char lbl_804A9220[];
extern char lbl_804A9284[];
extern char lbl_804A92E8[];
extern char lbl_8055FAF8[8];
extern char lbl_8055FB00[8];
extern char lbl_8055FB08[4];
extern char lbl_8055FB10[4];
extern char lbl_8055FB14[4];
extern char lbl_8055FB18[4];
extern char lbl_8055FB1C[8];
extern char lbl_8055FB34[8];
extern char lbl_8055FB3C[8];
extern char lbl_8055FB44[8];
extern void *lbl_80564274;
extern void *lbl_80564278;
extern void *lbl_80564280;
extern void *lbl_8056428C;
extern void *lbl_80564290;
extern void *lbl_80564294;
extern void *lbl_80564298;
void *fn_80148E44();
void *fn_80148E80();
void fn_80148EF0();
void fn_80148F18();
void *fn_80148F84();
void *fn_80148FDC();
void *fn_80149018();
void fn_80149088();
void fn_801490B0();
void *fn_80149124();
void fn_80149144();
void *fn_801491E4();
void *fn_80149220();
void fn_80149260();
void fn_80149288();
void *fn_801492F8();
void fn_80149318();
void *fn_80149380();
void *fn_801493BC();
void fn_801494E8();
void fn_80149510();
void *fn_80149578();
void *fn_80149598();
void *fn_801495A0();
void fn_801495DC();
void fn_80149604();
void *fn_80149668();
void *fn_80149688();
void *fn_801496C8();
void *fn_80149704();
void fn_80149820();
void fn_80149848();
void *fn_801498B0();
void *fn_801498D0();
void fn_8014990C();
void fn_80149934();
void *fn_801499A8();
}
struct UnknownGenObject80148E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149018_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149220_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801493BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801493BC(){fn_8006665C(this);}
};
struct UnknownGenObject801493BC_0 : UnknownGenRoot801493BC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801493BC_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject801493BC_1 : UnknownGenObject801493BC_0 {
 inline ~UnknownGenObject801493BC_1(){unknown00=lbl_804A6B28;}
};
struct UnknownGenObject801493BC : UnknownGenObject801493BC_1 {
 char unknown14[4];
 inline ~UnknownGenObject801493BC(){unknown00=lbl_804A90A0;}
};
struct UnknownGenRoot80149704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80149704(){fn_8006665C(this);}
};
struct UnknownGenObject80149704_0 : UnknownGenRoot80149704 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80149704_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject80149704 : UnknownGenObject80149704_0 {
 char unknown14[4];
 inline ~UnknownGenObject80149704(){unknown00=lbl_804A903C;}
};
extern "C" {
void *fn_80148E0C(void *object){
 fn_80148EF0();
 return fn_8006546C(lbl_80564274,object);
}
void *fn_80148E44(){
 if(!lbl_80564274 || !(reinterpret_cast<unsigned int *>(lbl_80564274)[0x24/4]&4)) fn_80148EF0();
 return lbl_80564274;
}
void *fn_80148E80(){
 UnknownGenObject80148E80_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A92E8;
 object.unknown00=lbl_804A9284;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80148EF0(){
 fn_80066188((int)fn_80148F18);
}
void fn_80148F18(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564274,(int)fn_8002907C,(int)fn_80024180,(int)fn_80148F84,(int)lbl_8049EEA4,20,(int)fn_80148E80,0,0,(int)lbl_8055FAF8);
}
void *fn_80148F84(){return fn_80148E44();}
void *fn_80148FA4(void *object){
 fn_80149088();
 return fn_8006546C(lbl_80564278,object);
}
void *fn_80148FDC(){
 if(!lbl_80564278 || !(reinterpret_cast<unsigned int *>(lbl_80564278)[0x24/4]&4)) fn_80149088();
 return lbl_80564278;
}
void *fn_80149018(){
 UnknownGenObject80149018_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9220;
 object.unknown00=lbl_804A91BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149088(){
 fn_80066188((int)fn_801490B0);
}
void fn_801490B0(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564278,(int)fn_8002907C,(int)fn_80024180,(int)fn_80149124,(int)lbl_8049EEBC,24,(int)fn_80149018,(int)fn_80149144,0,(int)lbl_8055FB00);
}
void *fn_80149124(){return fn_80148FDC();}
void fn_80149144(){
 void *value0=lbl_80564278;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB08,1);
 fn_800659C0(value0,lbl_8055FB10,lbl_8055FB14,lbl_8055FB18,value1);
}
void *fn_801491AC(void *object){
 fn_80149260();
 return fn_8006546C(lbl_80564280,object);
}
void *fn_801491E4(){
 if(!lbl_80564280 || !(reinterpret_cast<unsigned int *>(lbl_80564280)[0x24/4]&4)) fn_80149260();
 return lbl_80564280;
}
void *fn_80149220(){
 UnknownGenObject80149220_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A9160;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149260(){
 fn_80066188((int)fn_80149288);
}
void fn_80149288(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564280,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801492F8,(int)lbl_8049EED0,24,(int)fn_80149220,(int)fn_80149318,0,0);
}
void *fn_801492F8(){return fn_801491E4();}
void fn_80149318(){
 void *value0=lbl_80564280;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FB1C,2);
 fn_800659C0(value0,lbl_8055FB34,lbl_8055FB3C,lbl_8055FB44,value1);
}
void *fn_80149380(){
 if(!lbl_8056428C || !(reinterpret_cast<unsigned int *>(lbl_8056428C)[0x24/4]&4)) fn_801494E8();
 return lbl_8056428C;
}
void *fn_801493BC(){
 UnknownGenObject801493BC object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A6B28;
 object.unknown00=lbl_804A90A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801494E8(){
 fn_80066188((int)fn_80149510);
}
void fn_80149510(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056428C,(int)fn_80149604,(int)fn_80149598,(int)fn_80149578,(int)lbl_8049EEE0,20,(int)fn_801493BC,0,0,0);
}
void *fn_80149578(){return fn_80149380();}
void *fn_80149598(){return lbl_80564290;}
void *fn_801495A0(){
 if(!lbl_80564290 || !(reinterpret_cast<unsigned int *>(lbl_80564290)[0x24/4]&4)) fn_801495DC();
 return lbl_80564290;
}
void fn_801495DC(){
 fn_80066188((int)fn_80149604);
}
void fn_80149604(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564290,(int)fn_80149934,(int)fn_80149688,(int)fn_80149668,(int)lbl_8049EEF8,20,0,0,0,0);
}
void *fn_80149668(){return fn_801495A0();}
void *fn_80149688(){return lbl_80564298;}
void *fn_80149690(void *object){
 fn_80149820();
 return fn_8006546C(lbl_80564294,object);
}
void *fn_801496C8(){
 if(!lbl_80564294 || !(reinterpret_cast<unsigned int *>(lbl_80564294)[0x24/4]&4)) fn_80149820();
 return lbl_80564294;
}
void *fn_80149704(){
 UnknownGenObject80149704 object;
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_804A6B8C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804A903C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80149820(){
 fn_80066188((int)fn_80149848);
}
void fn_80149848(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564294,(int)fn_80149934,(int)fn_80149688,(int)fn_801498B0,(int)lbl_8049EF08,20,(int)fn_80149704,0,0,0);
}
void *fn_801498B0(){return fn_801496C8();}
void *fn_801498D0(){
 if(!lbl_80564298 || !(reinterpret_cast<unsigned int *>(lbl_80564298)[0x24/4]&4)) fn_8014990C();
 return lbl_80564298;
}
void fn_8014990C(){
 fn_80066188((int)fn_80149934);
}
void fn_80149934(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564298,(int)fn_800D1F6C,(int)fn_800D1DA4,(int)fn_801499A8,(int)lbl_8049EF20,20,0,(int)fn_801499C8,0,(int)lbl_8049EF14);
}
void *fn_801499A8(){return fn_801498D0();}
}
#pragma pop
