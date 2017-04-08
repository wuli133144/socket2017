
#ifdef  ENUM_INFO
#define PARAM_INFO(mode,str,function) mode,
#endif


#ifdef  MODESTR_INFO
#define PARAM_INFO(mode,str,function) str,
#endif


#ifdef  FUNCTION_INFO
#define PARAM_INFO(mode,str,function) function,
#endif

#ifdef PARAM_INFO
  PARAM_INFO(_MODEA,"A",g_chk_paramA)
  PARAM_INFO(_MODEB,"B",g_chk_paramB)
  PARAM_INFO(_MODEC,"C",g_chk_paramC)

#undef  PARAM_INFO

#endif