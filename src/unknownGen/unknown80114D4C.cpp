#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void *fn_80033638();
void fn_80033A14();
void fn_80037938();
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void *fn_801151EC();
extern char lbl_80471914[];
extern char lbl_80472FA0[];
extern char lbl_80474018[];
extern char lbl_804956FC[];
extern char lbl_80495710[];
extern char lbl_80496D74[];
extern char lbl_80496E68[];
extern char lbl_80496EC8[];
extern char lbl_8055F25C[6];
extern char lbl_8055F264[8];
extern void *lbl_805621F4;
extern void *lbl_80563844;
extern char lbl_80563848[4];
extern void *lbl_8056384C;
extern void *lbl_80563850;
void *fn_80114D88();
void *fn_80114DC4();
void fn_80114E1C();
void fn_80114E44();
void *fn_80114EB4();
void fn_80114ED4();
void *fn_80114F90();
void *fn_80114FCC();
void fn_801150A0();
void fn_801150C8();
void *fn_80115134();
}
struct UnknownGenObject80114DC4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80114FCC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80114FCC(){fn_800638E0(this);}
};
struct UnknownGenObject80114FCC_0 : UnknownGenRoot80114FCC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80114FCC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80114FCC_1 : UnknownGenObject80114FCC_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject80114FCC_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject80114FCC : UnknownGenObject80114FCC_1 {
 char unknown38[8];
 inline ~UnknownGenObject80114FCC(){unknown00=lbl_80496D74;}
};
extern "C" {
void *fn_80114D4C(){
 if(!lbl_80563844) lbl_80563844=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563844;
}
void *fn_80114D88(){
 if(!lbl_80563844 || !(reinterpret_cast<unsigned int *>(lbl_80563844)[0x24/4]&4)) fn_80114E1C();
 return lbl_80563844;
}
void *fn_80114DC4(){
 UnknownGenObject80114DC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80496EC8;
 object.unknown00=lbl_80496E68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80114E1C(){
 fn_80066188((int)fn_80114E44);
}
void fn_80114E44(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_80563844,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80114EB4,(int)lbl_804956FC,20,(int)fn_80114DC4,(int)fn_80114ED4,0,0);
}
void *fn_80114EB4(){return fn_80114D88();}
void fn_80114ED4(){
 void *meta=lbl_80563844;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F25C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_801151EC();
 field->unknown38=0;
 field->unknown1C=lbl_80563848;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *fn_80114F90(){
 if(!lbl_8056384C || !(reinterpret_cast<unsigned int *>(lbl_8056384C)[0x24/4]&4)) fn_801150A0();
 return lbl_8056384C;
}
void *fn_80114FCC(){
 UnknownGenObject80114FCC object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=lbl_80496D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801150A0(){
 fn_80066188((int)fn_801150C8);
}
void fn_801150C8(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_8056384C,(int)fn_80037938,(int)fn_80033638,(int)fn_80115134,(int)lbl_80495710,56,(int)fn_80114FCC,0,0,(int)lbl_8055F264);
}
void *fn_80115134(){return fn_80114F90();}
void fn_80115154(){
 if(!lbl_80563850){
  void *object=(lbl_80563850=fn_8006546C(lbl_8056384C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563850));
   reinterpret_cast<short *>(lbl_80563850)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563850);
  }
 }
}
}
#pragma pop
