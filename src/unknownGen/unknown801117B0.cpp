#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80111A54();
extern char lbl_804950CC[];
extern char lbl_804950E8[];
extern char lbl_80495AD8[];
extern char lbl_804964A0[];
extern char lbl_8055F0E4[8];
extern void *lbl_805621F4;
extern void *lbl_80563738;
extern void *lbl_8056373C;
void *fn_801117EC();
void *fn_80111828();
void fn_80111874();
void fn_8011189C();
void *fn_80111904();
void *fn_80111960();
void fn_8011199C();
void fn_801119C4();
void *fn_80111A34();
}
struct UnknownGenObject80111828 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801117B0(){
 if(!lbl_80563738) lbl_80563738=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563738;
}
void *fn_801117EC(){
 if(!lbl_80563738 || !(reinterpret_cast<unsigned int *>(lbl_80563738)[0x24/4]&4)) fn_80111874();
 return lbl_80563738;
}
void *fn_80111828(){
 UnknownGenObject80111828 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_804964A0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80111874(){
 fn_80066188((int)fn_8011189C);
}
void fn_8011189C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563738,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80111904,(int)lbl_804950CC,12,(int)fn_80111828,0,0,0);
}
void *fn_80111904(){return fn_801117EC();}
void *fn_80111924(){
 if(!lbl_8056373C) lbl_8056373C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056373C;
}
void *fn_80111960(){
 if(!lbl_8056373C || !(reinterpret_cast<unsigned int *>(lbl_8056373C)[0x24/4]&4)) fn_8011199C();
 return lbl_8056373C;
}
void fn_8011199C(){
 fn_80066188((int)fn_801119C4);
}
void fn_801119C4(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_8056373C,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80111A34,(int)lbl_804950E8,40,0,(int)fn_80111A54,0,(int)lbl_8055F0E4);
}
void *fn_80111A34(){return fn_80111960();}
}
#pragma pop
