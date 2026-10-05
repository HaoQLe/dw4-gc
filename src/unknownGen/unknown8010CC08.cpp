#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010D030();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80494624[];
extern char lbl_8049463C[];
extern char lbl_80497F38[];
extern char lbl_80497F9C[];
extern char lbl_80498064[];
extern char lbl_804980C8[];
extern char lbl_8055EEB0[8];
extern char lbl_8055EEB8[8];
extern char lbl_8055EEC0[8];
extern char lbl_8055EEC8[7];
extern void *lbl_805621F4;
extern void *lbl_80563574;
extern void *lbl_80563578;
extern void *lbl_8056357C;
void *fn_8010CC44();
void *fn_8010CC80();
void fn_8010CCF0();
void fn_8010CD18();
void *fn_8010CD84();
void *fn_8010CDE0();
void *fn_8010CE1C();
void fn_8010CE8C();
void fn_8010CEB4();
void *fn_8010CF20();
void *fn_8010CF40();
void fn_8010CF7C();
void fn_8010CFA4();
void *fn_8010D010();
}
struct UnknownGenObject8010CC80 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010CE1C {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8010CC08(){
 if(!lbl_80563574) lbl_80563574=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563574;
}
void *fn_8010CC44(){
 if(!lbl_80563574 || !(reinterpret_cast<unsigned int *>(lbl_80563574)[0x24/4]&4)) fn_8010CCF0();
 return lbl_80563574;
}
void *fn_8010CC80(){
 UnknownGenObject8010CC80 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804980C8;
 object.unknown00=lbl_80498064;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010CCF0(){
 fn_80066188((int)fn_8010CD18);
}
void fn_8010CD18(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563574,(int)fn_80029694,(int)fn_80023FDC,(int)fn_8010CD84,(int)lbl_80494624,20,(int)fn_8010CC80,0,0,(int)lbl_8055EEB0);
}
void *fn_8010CD84(){return fn_8010CC44();}
void *fn_8010CDA4(){
 if(!lbl_80563578) lbl_80563578=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563578;
}
void *fn_8010CDE0(){
 if(!lbl_80563578 || !(reinterpret_cast<unsigned int *>(lbl_80563578)[0x24/4]&4)) fn_8010CE8C();
 return lbl_80563578;
}
void *fn_8010CE1C(){
 UnknownGenObject8010CE1C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80497F9C;
 object.unknown00=lbl_80497F38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010CE8C(){
 fn_80066188((int)fn_8010CEB4);
}
void fn_8010CEB4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563578,(int)fn_8002907C,(int)fn_80024180,(int)fn_8010CF20,(int)lbl_8049463C,20,(int)fn_8010CE1C,0,0,(int)lbl_8055EEB8);
}
void *fn_8010CF20(){return fn_8010CDE0();}
void *fn_8010CF40(){
 if(!lbl_8056357C || !(reinterpret_cast<unsigned int *>(lbl_8056357C)[0x24/4]&4)) fn_8010CF7C();
 return lbl_8056357C;
}
void fn_8010CF7C(){
 fn_80066188((int)fn_8010CFA4);
}
void fn_8010CFA4(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_8056357C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010D010,(int)lbl_8055EEC8,12,0,(int)fn_8010D030,0,(int)lbl_8055EEC0);
}
void *fn_8010D010(){return fn_8010CF40();}
}
#pragma pop
