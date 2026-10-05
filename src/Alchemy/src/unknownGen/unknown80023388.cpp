#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_80023234();
void fn_800237D8();
void *fn_80029E64(void *);
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
void fn_80066B08();
extern char lbl_804631D8[];
extern char lbl_80470A44[];
extern char lbl_80470B38[];
extern char lbl_80471914[];
extern char lbl_8055CF78[8];
extern char lbl_8055CF80[4];
extern char lbl_8055CF84[4];
extern char lbl_8055CF88[4];
extern char lbl_8055CF8C[4];
extern char lbl_8055CF90[8];
extern void *lbl_805614D0;
extern void *lbl_805614D8;
extern void *lbl_805614DC;
extern void *lbl_805614E4;
extern void *lbl_805621F4;
extern void *lbl_805622A4;
void *fn_800233C0();
void *fn_800233FC();
void fn_80023498();
void fn_800234C0();
void *fn_80023534();
void *fn_80023554();
void fn_8002355C();
void *fn_800236E4();
void fn_80023720();
void fn_80023748();
void *fn_800237B0();
void *fn_800237D0();
}
struct UnknownGenObject800233FC {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject800233FC(){unknown00=lbl_80470B38;unknown00=lbl_80470A44;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_80023388(void *object){
 fn_80023498();
 return fn_8006546C(lbl_805614D8,object);
}
void *fn_800233C0(){
 if(!lbl_805614D8 || !(reinterpret_cast<unsigned int *>(lbl_805614D8)[0x24/4]&4)) fn_80023498();
 return lbl_805614D8;
}
void *fn_800233FC(){
 UnknownGenObject800233FC object;
 fn_800638E0(&object);
 object.unknown00=lbl_80470A44;
 object.unknown00=lbl_80470B38;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80023498(){
 fn_80066188((int)fn_800234C0);
}
void fn_800234C0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805614D8,(int)fn_80023234,(int)fn_80023554,(int)fn_80023534,(int)lbl_804631D8,56,(int)fn_800233FC,(int)fn_8002355C,0,(int)lbl_8055CF78);
}
void *fn_80023534(){return fn_800233C0();}
void *fn_80023554(){return lbl_805614D0;}
void fn_8002355C(){
 void *meta=lbl_805614D8;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055CF80,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055CF84,lbl_8055CF88,lbl_8055CF8C,field);
}
void fn_800235D8(){
 if(!lbl_805614DC){
  void *object=(lbl_805614DC=fn_8006546C(lbl_805614D8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805614DC));
   reinterpret_cast<short *>(lbl_805614DC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805614DC);
  }
 }
}
void *fn_80023670(void *object){
 fn_80023720();
 return fn_8006546C(lbl_805614E4,object);
}
void *fn_800236A8(){
 if(!lbl_805614E4) lbl_805614E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805614E4;
}
void *fn_800236E4(){
 if(!lbl_805614E4 || !(reinterpret_cast<unsigned int *>(lbl_805614E4)[0x24/4]&4)) fn_80023720();
 return lbl_805614E4;
}
void fn_80023720(){
 fn_80066188((int)fn_80023748);
}
void fn_80023748(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805614E4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_800237B0,(int)lbl_8055CF90,8,0,(int)fn_800237D8,0,0);
}
void *fn_800237B0(){return fn_800236E4();}
void *fn_800237D0(){return lbl_805622A4;}
}
#pragma pop
