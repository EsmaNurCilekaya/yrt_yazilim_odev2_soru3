#ifndef enstr
#define enstr
#endif

enum AccelRange{
  A_range_2G,
  A_range_4G,
  A_range_8G,
  A_range_16G,
};

enum AccelBandwidth{
  A_bandwith_7_81,
  A_bandwith_15_63,
  A_bandwith_31_25,
  A_bandwith_62_5,
  A_bandwith_125,
  A_bandwith_250,
  A_bandwith_500,
  A_bandwith_1000,
};

enum AccelMod{
  A_mod_normal,
  A_mod_suspend,
  A_mod_LowPower1,
  A_mod_standby,
  A_mod_LowPower2,
  A_mod_DeepSuspend,
};
