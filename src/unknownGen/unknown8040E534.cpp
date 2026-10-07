#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8011BFA4(void *,void *);
void fn_80410044(void *,int);
void fn_80410158(void *);
void fn_804105C4(void *);
extern void *lbl_8055C94C;
extern void *lbl_8055C964;
}
struct UnknownGenL8040E544_8 {
 int m08;
 int m0C;
 int m10;
};
struct UnknownGenL8040E598_8 {
 int m08;
 int m0C;
 int m10;
};
struct UnknownGenL8040E5E8_8 {
 int m08;
 int m0C;
 int m10;
};
extern "C" {
void fn_8040E534(){}
void fn_8040E538(){}
void fn_8040E53C(){}
void fn_8040E540(){}
void fn_8040E544(int p0){
 UnknownGenL8040E544_8 local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+244)=(void *)1;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8055C964;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),&local0);
}
void fn_8040E598(int p0){
 UnknownGenL8040E598_8 local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+244)=(void *)0;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8055C964;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),&local0);
}
void fn_8040E5E8(int p0){
 UnknownGenL8040E5E8_8 local0;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20))+212)=(void *)1;
 local0.m08=(int)2;
 local0.m0C=(int)0;
 local0.m10=(int)(int)lbl_8055C94C;
 fn_8011BFA4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20),&local0);
}
void fn_8040E63C(){}
void fn_8040E640(){}
void fn_8040E644(){}
void fn_8040E648(){}
void fn_8040E64C(){}
void fn_8040E650(int p0){
 fn_80410044(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136),0);
}
void fn_8040E678(int p0){
 fn_80410158(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136));
}
void fn_8040E69C(int p0){
 fn_804105C4(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+136));
}
}
#pragma pop
