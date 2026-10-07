#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80053650(void *,int);
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
void fn_801AB354();
void *fn_801ABB34();
void fn_801C19D0();
void *fn_801C1E2C();
void *fn_801CE580();
extern char lbl_804AFA10[];
extern char lbl_804AFA4C[];
extern char lbl_804AFA58[];
extern char lbl_804B4C5C[];
extern char lbl_804B4CE4[];
extern char lbl_804BA150[];
extern char lbl_80560674[8];
extern char lbl_8056067C[8];
extern char lbl_80560684[8];
extern char lbl_8056068C[8];
extern char lbl_80560694[8];
extern void *lbl_80564F78;
extern void *lbl_80564F84;
void *fn_801C157C();
void *fn_801C15B8();
void fn_801C164C();
void fn_801C1674();
void *fn_801C16E8();
void fn_801C1708();
void *fn_801C17D4();
void *fn_801C1810();
void fn_801C1910();
void fn_801C1938();
void *fn_801C19B0();
}
struct UnknownGenRoot801C15B8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C15B8(){fn_8006665C(this);}
};
struct UnknownGenObject801C15B8 : UnknownGenRoot801C15B8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject801C15B8(){unknown00=lbl_804B4C5C;}
};
struct UnknownGenRoot801C1810 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C1810(){fn_8006665C(this);}
};
struct UnknownGenObject801C1810 : UnknownGenRoot801C1810 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801C1810(){unknown00=lbl_804B4CE4;}
};
extern "C" {
void *fn_801C1524(){return fn_801CE580();}
void *fn_801C1544(void *object){
 fn_801C164C();
 return fn_8006546C(lbl_80564F78,object);
}
void *fn_801C157C(){
 if(!lbl_80564F78 || !(reinterpret_cast<unsigned int *>(lbl_80564F78)[0x24/4]&4)) fn_801C164C();
 return lbl_80564F78;
}
void *fn_801C15B8(){
 UnknownGenObject801C15B8 object;
 object.unknown00=lbl_804BA150;
 object.unknown00=lbl_804B4C5C;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C164C(){
 fn_80066188((int)fn_801C1674);
}
void fn_801C1674(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F78,(int)fn_801AB354,(int)fn_801ABB34,(int)fn_801C16E8,(int)lbl_804AFA10,16,(int)fn_801C15B8,(int)fn_801C1708,0,(int)lbl_80560674);
}
void *fn_801C16E8(){return fn_801C157C();}
void fn_801C1708(){
 void *value0=lbl_80564F78;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8056067C,2);
 void *value2=fn_800658E4(value0,value1);
 fn_80053650(value2,-1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_801C1E2C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 fn_800659C0(value0,lbl_80560684,lbl_8056068C,lbl_80560694,value1);
}
void *fn_801C179C(void *object){
 fn_801C1910();
 return fn_8006546C(lbl_80564F84,object);
}
void *fn_801C17D4(){
 if(!lbl_80564F84 || !(reinterpret_cast<unsigned int *>(lbl_80564F84)[0x24/4]&4)) fn_801C1910();
 return lbl_80564F84;
}
void *fn_801C1810(){
 UnknownGenObject801C1810 object;
 object.unknown00=lbl_804B4CE4;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C1910(){
 fn_80066188((int)fn_801C1938);
}
void fn_801C1938(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C19B0,(int)lbl_804AFA58,20,(int)fn_801C1810,(int)fn_801C19D0,0,(int)lbl_804AFA4C);
}
void *fn_801C19B0(){return fn_801C17D4();}
}
#pragma pop
