#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_80022CD8();
void fn_8002A6D8();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80075A2C(void *);
extern char lbl_804631A4[];
extern char lbl_804631C0[];
extern char lbl_80470950[];
extern char lbl_80470A44[];
extern char lbl_80471914[];
extern char lbl_80476E6C[];
extern char lbl_8055CF58[8];
extern char lbl_8055CF60[4];
extern char lbl_8055CF64[4];
extern char lbl_8055CF68[4];
extern char lbl_8055CF6C[4];
extern char lbl_8055CF70[8];
extern void *lbl_805614BC;
extern void *lbl_805614C4;
extern void *lbl_805614C8;
extern void *lbl_805614D0;
extern void *lbl_805614D4;
extern void *lbl_805621F4;
void *fn_80022E60();
void *fn_80022E9C();
void fn_80022F34();
void fn_80022F5C();
void *fn_80022FD0();
void *fn_80022FF0();
void fn_80022FF8();
void *fn_80023144();
void *fn_80023180();
void fn_8002320C();
void fn_80023234();
void *fn_800232A0();
}
struct UnknownGenObject80022E9C {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80022E9C(){unknown00=lbl_80470950;unknown00=lbl_80476E6C;unknown00=lbl_80471914;}
};
struct UnknownGenObject80023180 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80023180(){unknown00=lbl_80470A44;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_80022E28(void *object){
 fn_80022F34();
 return fn_8006546C(lbl_805614C4,object);
}
void *fn_80022E60(){
 if(!lbl_805614C4 || !(reinterpret_cast<unsigned int *>(lbl_805614C4)[0x24/4]&4)) fn_80022F34();
 return lbl_805614C4;
}
void *fn_80022E9C(){
 UnknownGenObject80022E9C object;
 fn_80075A2C(&object);
 object.unknown00=lbl_80470950;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80022F34(){
 fn_80066188((int)fn_80022F5C);
}
void fn_80022F5C(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805614C4,(int)fn_80022CD8,(int)fn_80022FF0,(int)fn_80022FD0,(int)lbl_804631A4,56,(int)fn_80022E9C,(int)fn_80022FF8,0,(int)lbl_8055CF58);
}
void *fn_80022FD0(){return fn_80022E60();}
void *fn_80022FF0(){return lbl_805614BC;}
void fn_80022FF8(){
 void *meta=lbl_805614C4;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055CF60,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055CF64,lbl_8055CF68,lbl_8055CF6C,field);
}
void fn_80023074(){
 if(!lbl_805614C8){
  void *object=(lbl_805614C8=fn_8006546C(lbl_805614C4,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614C8));
   reinterpret_cast<short *>(lbl_805614C8)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614C8);
  }
 }
}
void *fn_8002310C(void *object){
 fn_8002320C();
 return fn_8006546C(lbl_805614D0,object);
}
void *fn_80023144(){
 if(!lbl_805614D0 || !(reinterpret_cast<unsigned int *>(lbl_805614D0)[0x24/4]&4)) fn_8002320C();
 return lbl_805614D0;
}
void *fn_80023180(){
 UnknownGenObject80023180 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80470A44;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002320C(){
 fn_80066188((int)fn_80023234);
}
void fn_80023234(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805614D0,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_800232A0,(int)lbl_804631C0,52,(int)fn_80023180,0,0,(int)lbl_8055CF70);
}
void *fn_800232A0(){return fn_80023144();}
void fn_800232C0(){
 if(!lbl_805614D4){
  void *object=(lbl_805614D4=fn_8006546C(lbl_805614D0,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614D4));
   reinterpret_cast<short *>(lbl_805614D4)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614D4);
  }
 }
}
}
#pragma pop
