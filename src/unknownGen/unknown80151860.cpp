#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_8013A878();
void fn_80151D58();
void fn_80151EF8();
extern char lbl_804A00C4[];
extern char lbl_804A00F0[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804A8224[];
extern char lbl_804A82BC[];
extern char lbl_804A8358[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern char lbl_8055F71C[4];
extern char lbl_8055FCEC[4];
extern char lbl_8055FCF0[4];
extern char lbl_8055FCF4[4];
extern char lbl_8055FCF8[4];
extern char lbl_8055FCFC[8];
extern void *lbl_8056451C;
extern void *lbl_80564524;
extern void *lbl_80564530;
void *fn_80151860();
void *fn_8015189C();
void fn_80151A1C();
void fn_80151A44();
void *fn_80151AB4();
void fn_80151AD4();
void *fn_80151B50();
void *fn_80151B8C();
void fn_80151C94();
void fn_80151CBC();
void *fn_80151D30();
void *fn_80151D50();
}
struct UnknownGenRoot8015189C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015189C(){fn_8006665C(this);}
};
struct UnknownGenObject8015189C_0 : UnknownGenRoot8015189C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015189C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015189C_1 : UnknownGenObject8015189C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015189C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015189C : UnknownGenObject8015189C_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8015189C(){unknown00=lbl_804A8224;}
};
struct UnknownGenRoot80151B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151B8C(){fn_8006665C(this);}
};
struct UnknownGenObject80151B8C_0 : UnknownGenRoot80151B8C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151B8C_0(){unknown00=lbl_804A8358;}
};
struct UnknownGenObject80151B8C : UnknownGenObject80151B8C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80151B8C(){unknown00=lbl_804A82BC;}
};
extern "C" {
void *fn_80151860(){
 if(!lbl_8056451C || !(reinterpret_cast<unsigned int *>(lbl_8056451C)[0x24/4]&4)) fn_80151A1C();
 return lbl_8056451C;
}
void *fn_8015189C(){
 UnknownGenObject8015189C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A8224;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80151A1C(){
 fn_80066188((int)fn_80151A44);
}
void fn_80151A44(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056451C,(int)fn_8013A878,(int)fn_8012FEB0,(int)fn_80151AB4,(int)lbl_804A00C4,48,(int)fn_8015189C,(int)fn_80151AD4,0,0);
}
void *fn_80151AB4(){return fn_80151860();}
void fn_80151AD4(){
 void *value0=lbl_8056451C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FCEC,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80071694(value2,lbl_8055F71C);
 fn_800659C0(value0,lbl_8055FCF0,lbl_8055FCF4,lbl_8055FCF8,value1);
}
void *fn_80151B50(){
 if(!lbl_80564524 || !(reinterpret_cast<unsigned int *>(lbl_80564524)[0x24/4]&4)) fn_80151C94();
 return lbl_80564524;
}
void *fn_80151B8C(){
 UnknownGenObject80151B8C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A8358;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A82BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80151C94(){
 fn_80066188((int)fn_80151CBC);
}
void fn_80151CBC(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564524,(int)fn_80151EF8,(int)fn_80151D50,(int)fn_80151D30,(int)lbl_804A00F0,40,(int)fn_80151B8C,(int)fn_80151D58,0,(int)lbl_8055FCFC);
}
void *fn_80151D30(){return fn_80151B50();}
void *fn_80151D50(){return lbl_80564530;}
}
#pragma pop
