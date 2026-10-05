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
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_800CE2F8();
void fn_800D2544();
void *fn_800D26C4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8047E1F8[];
extern char lbl_804898FC[];
extern char lbl_80489908[];
extern char lbl_80489918[];
extern char lbl_80493CA8[];
extern char lbl_8055EB7C[8];
extern char lbl_8055EB84[8];
extern char lbl_8055EB8C[8];
extern void *lbl_805621F4;
extern void *lbl_80562F6C;
extern void *lbl_80562F70;
extern void *lbl_80562F74;
extern void *lbl_80562F78;
void *fn_800D20A4();
void *fn_800D20E0();
void fn_800D2150();
void fn_800D2178();
void *fn_800D21E4();
void *fn_800D2204();
void fn_800D2240();
void fn_800D2268();
void *fn_800D22CC();
void *fn_800D22EC();
void *fn_800D22F4();
void fn_800D2330();
void fn_800D2358();
void *fn_800D23BC();
void *fn_800D2450();
void fn_800D248C();
void fn_800D24B4();
void *fn_800D2524();
}
struct UnknownGenObject800D20E0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800D206C(void *object){
 fn_800D2150();
 return fn_8006546C(lbl_80562F6C,object);
}
void *fn_800D20A4(){
 if(!lbl_80562F6C || !(reinterpret_cast<unsigned int *>(lbl_80562F6C)[0x24/4]&4)) fn_800D2150();
 return lbl_80562F6C;
}
void *fn_800D20E0(){
 UnknownGenObject800D20E0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E1F8;
 object.unknown00=lbl_80493CA8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D2150(){
 fn_80066188((int)fn_800D2178);
}
void fn_800D2178(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80562F6C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D21E4,(int)lbl_804898FC,20,(int)fn_800D20E0,0,0,(int)lbl_8055EB7C);
}
void *fn_800D21E4(){return fn_800D20A4();}
void *fn_800D2204(){
 if(!lbl_80562F70 || !(reinterpret_cast<unsigned int *>(lbl_80562F70)[0x24/4]&4)) fn_800D2240();
 return lbl_80562F70;
}
void fn_800D2240(){
 fn_80066188((int)fn_800D2268);
}
void fn_800D2268(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F70,(int)fn_800D24B4,(int)fn_800D22EC,(int)fn_800D22CC,(int)lbl_80489908,92,0,0,0,0);
}
void *fn_800D22CC(){return fn_800D2204();}
void *fn_800D22EC(){return lbl_80562F78;}
void *fn_800D22F4(){
 if(!lbl_80562F74 || !(reinterpret_cast<unsigned int *>(lbl_80562F74)[0x24/4]&4)) fn_800D2330();
 return lbl_80562F74;
}
void fn_800D2330(){
 fn_80066188((int)fn_800D2358);
}
void fn_800D2358(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F74,(int)fn_800D24B4,(int)fn_800D22EC,(int)fn_800D23BC,(int)lbl_80489918,92,0,0,0,0);
}
void *fn_800D23BC(){return fn_800D22F4();}
void *fn_800D23DC(void *object){
 fn_800D248C();
 return fn_8006546C(lbl_80562F78,object);
}
void *fn_800D2414(){
 if(!lbl_80562F78) lbl_80562F78=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562F78;
}
void *fn_800D2450(){
 if(!lbl_80562F78 || !(reinterpret_cast<unsigned int *>(lbl_80562F78)[0x24/4]&4)) fn_800D248C();
 return lbl_80562F78;
}
void fn_800D248C(){
 fn_80066188((int)fn_800D24B4);
}
void fn_800D24B4(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F78,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800D2524,(int)lbl_8055EB8C,92,0,(int)fn_800D2544,(int)fn_800D26C4,(int)lbl_8055EB84);
}
void *fn_800D2524(){return fn_800D2450();}
}
#pragma pop
