#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80284294();
void fn_80284758();
void fn_80285B24();
extern char lbl_80416910[];
extern char lbl_80416924[];
extern char lbl_80416990[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CAFD8[];
extern char lbl_804CB040[];
extern char lbl_804CB9E8[];
extern char lbl_804CBBEC[];
extern char lbl_804CBC50[];
extern char lbl_804CC018[];
extern void *lbl_80515C54;
extern void *lbl_80515C58;
extern void *lbl_80515C70;
extern void *lbl_80515C84;
extern void *lbl_80515CC0;
extern void *lbl_80515D38;
void *fn_802842C8();
void *fn_80284314();
void fn_80284388();
void fn_802843B0();
void *fn_80284424();
void *fn_80284444();
void fn_80284490();
void fn_802844B8();
void *fn_80284520();
void *fn_80284560();
void *fn_802845AC();
void fn_80284684();
void fn_802846AC();
void *fn_80284728();
void *fn_80284748();
}
struct UnknownGenObject80284314_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802845AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802845AC(){fn_8006665C(this);}
};
struct UnknownGenObject802845AC : UnknownGenRoot802845AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject802845AC(){unknown00=lbl_804CC018;}
};
extern "C" {
void *fn_802842C8(){
 if(!lbl_80515C54 || !(reinterpret_cast<unsigned int *>(lbl_80515C54)[0x24/4]&4)) fn_80284388();
 return lbl_80515C54;
}
void *fn_80284314(){
 UnknownGenObject80284314_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CBC50;
 object.unknown00=lbl_804CBBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284388(){
 fn_80066188((int)fn_802843B0);
}
void fn_802843B0(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C54,(int)fn_8002907C,(int)fn_80024180,(int)fn_80284424,(int)lbl_80416910,20,(int)fn_80284314,0,0,(int)lbl_804CAFD8);
}
void *fn_80284424(){return fn_802842C8();}
void *fn_80284444(){
 if(!lbl_80515C58 || !(reinterpret_cast<unsigned int *>(lbl_80515C58)[0x24/4]&4)) fn_80284490();
 return lbl_80515C58;
}
void fn_80284490(){
 fn_80066188((int)fn_802844B8);
}
void fn_802844B8(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515C58,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80284520,(int)lbl_80416924,12,0,0,0,0);
}
void *fn_80284520(){return fn_80284444();}
void *fn_80284540(){return lbl_80515C84;}
void *fn_80284550(){return lbl_80515D38;}
void *fn_80284560(){
 if(!lbl_80515C70 || !(reinterpret_cast<unsigned int *>(lbl_80515C70)[0x24/4]&4)) fn_80284684();
 return lbl_80515C70;
}
void *fn_802845AC(){
 UnknownGenObject802845AC object;
 object.unknown00=lbl_804CB9E8;
 object.unknown00=lbl_804CC018;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284684(){
 fn_80066188((int)fn_802846AC);
}
void fn_802846AC(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C70,(int)fn_80285B24,(int)fn_80284748,(int)fn_80284728,(int)lbl_80416990,16,(int)fn_802845AC,(int)fn_80284758,0,(int)lbl_804CB040);
}
void *fn_80284728(){return fn_80284560();}
void *fn_80284748(){return lbl_80515CC0;}
}
#pragma pop
