#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010CFA4();
void fn_8010E6E4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804948C4[];
extern char lbl_804948E0[];
extern char lbl_80495AD8[];
extern char lbl_80495E2C[];
extern char lbl_804979F8[];
extern char lbl_80497A5C[];
extern char lbl_8055EF7C[8];
extern char lbl_8055EF84[8];
extern void *lbl_805621F4;
extern void *lbl_8056357C;
extern void *lbl_805635E8;
extern void *lbl_805635EC;
void *fn_8010E438();
void *fn_8010E474();
void fn_8010E4E4();
void fn_8010E50C();
void *fn_8010E578();
void *fn_8010E598();
void *fn_8010E5D4();
void fn_8010E620();
void fn_8010E648();
void *fn_8010E6BC();
void *fn_8010E6DC();
}
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8010E3FC(){
 if(!lbl_805635E8) lbl_805635E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635E8;
}
void *fn_8010E438(){
 if(!lbl_805635E8 || !(reinterpret_cast<unsigned int *>(lbl_805635E8)[0x24/4]&4)) fn_8010E4E4();
 return lbl_805635E8;
}
void *fn_8010E474(){
 UnknownGenObject8010E474_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80497A5C;
 object.unknown00=lbl_804979F8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010E4E4(){
 fn_80066188((int)fn_8010E50C);
}
void fn_8010E50C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635E8,(int)fn_8002907C,(int)fn_80024180,(int)fn_8010E578,(int)lbl_804948C4,20,(int)fn_8010E474,0,0,(int)lbl_8055EF7C);
}
void *fn_8010E578(){return fn_8010E438();}
void *fn_8010E598(){
 if(!lbl_805635EC || !(reinterpret_cast<unsigned int *>(lbl_805635EC)[0x24/4]&4)) fn_8010E620();
 return lbl_805635EC;
}
void *fn_8010E5D4(){
 UnknownGenObject8010E5D4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_80495E2C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010E620(){
 fn_80066188((int)fn_8010E648);
}
void fn_8010E648(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635EC,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_8010E6BC,(int)lbl_804948E0,16,(int)fn_8010E5D4,(int)fn_8010E6E4,0,(int)lbl_8055EF84);
}
void *fn_8010E6BC(){return fn_8010E598();}
void *fn_8010E6DC(){return lbl_8056357C;}
}
#pragma pop
