#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010D6A0();
void fn_8010F2AC();
void fn_80111654();
extern char lbl_804949F0[];
extern char lbl_80494A34[];
extern char lbl_80496040[];
extern char lbl_80497940[];
extern char lbl_8049799C[];
extern char lbl_80497E78[];
extern char lbl_8055EFBC[4];
extern char lbl_8055EFC0[4];
extern char lbl_8055EFC4[4];
extern char lbl_8055EFC8[4];
extern char lbl_8055EFCC[4];
extern char lbl_8055EFD8[4];
extern char lbl_8055EFDC[4];
extern char lbl_8055EFE0[4];
extern char lbl_8055EFE4[8];
extern char lbl_8055EFEC[8];
extern void *lbl_805621F4;
extern void *lbl_80563618;
extern void *lbl_80563628;
extern void *lbl_80563638;
void *fn_8010ECE0();
void *fn_8010ED1C();
void fn_8010EDB4();
void fn_8010EDDC();
void *fn_8010EE4C();
void *fn_8010EE6C();
void fn_8010EE74();
void *fn_8010EEF0();
void *fn_8010EF2C();
void fn_8010EFD4();
void fn_8010EFFC();
void *fn_8010F06C();
void fn_8010F08C();
void *fn_8010F130();
void *fn_8010F16C();
void fn_8010F1F4();
void fn_8010F21C();
void *fn_8010F28C();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){fn_8006665C(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=lbl_8049799C;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){fn_8006665C(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=lbl_80496040;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=lbl_80497E78;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=lbl_80497940;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){fn_8006665C(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=lbl_80496040;}
};
extern "C" {
void *fn_8010ECA4(){
 if(!lbl_80563618) lbl_80563618=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563618;
}
void *fn_8010ECE0(){
 if(!lbl_80563618 || !(reinterpret_cast<unsigned int *>(lbl_80563618)[0x24/4]&4)) fn_8010EDB4();
 return lbl_80563618;
}
void *fn_8010ED1C(){
 UnknownGenObject8010ED1C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_8049799C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010EDB4(){
 fn_80066188((int)fn_8010EDDC);
}
void fn_8010EDDC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563618,(int)fn_8010F21C,(int)fn_8010EE6C,(int)fn_8010EE4C,(int)lbl_804949F0,16,(int)fn_8010ED1C,(int)fn_8010EE74,0,0);
}
void *fn_8010EE4C(){return fn_8010ECE0();}
void *fn_8010EE6C(){return lbl_80563638;}
void fn_8010EE74(){
 void *value0=lbl_80563618;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EFBC,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 fn_800659C0(value0,lbl_8055EFC0,lbl_8055EFC4,lbl_8055EFC8,value1);
}
void *fn_8010EEF0(){
 if(!lbl_80563628 || !(reinterpret_cast<unsigned int *>(lbl_80563628)[0x24/4]&4)) fn_8010EFD4();
 return lbl_80563628;
}
void *fn_8010EF2C(){
 UnknownGenObject8010EF2C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 object.unknown00=lbl_80497E78;
 object.unknown00=lbl_80497940;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010EFD4(){
 fn_80066188((int)fn_8010EFFC);
}
void fn_8010EFFC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563628,(int)fn_80111654,(int)fn_8010D6A0,(int)fn_8010F06C,(int)lbl_80494A34,40,(int)fn_8010EF2C,(int)fn_8010F08C,0,0);
}
void *fn_8010F06C(){return fn_8010EEF0();}
void fn_8010F08C(){
 void *value0=lbl_80563628;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EFCC,1);
 fn_800659C0(value0,lbl_8055EFD8,lbl_8055EFDC,lbl_8055EFE0,value1);
}
void *fn_8010F0F4(){
 if(!lbl_80563638) lbl_80563638=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563638;
}
void *fn_8010F130(){
 if(!lbl_80563638 || !(reinterpret_cast<unsigned int *>(lbl_80563638)[0x24/4]&4)) fn_8010F1F4();
 return lbl_80563638;
}
void *fn_8010F16C(){
 UnknownGenObject8010F16C object;
 object.unknown00=lbl_80496040;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010F1F4(){
 fn_80066188((int)fn_8010F21C);
}
void fn_8010F21C(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563638,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010F28C,(int)lbl_8055EFEC,12,(int)fn_8010F16C,(int)fn_8010F2AC,0,(int)lbl_8055EFE4);
}
void *fn_8010F28C(){return fn_8010F130();}
}
#pragma pop
