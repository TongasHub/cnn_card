#include "tensor.h"



const float conv0_activation_99per = 3.466181516647339;
const float conv1_activation_99per = 7.8704609870910645;
const float conv2_activation_99per = 14.721277723312408;


const float conv0_kernel_data[] = {
    0.725426  ,  1.3791285 , -0.9170304 ,  1.0277331 ,  1.6213977 ,
    0.11924043,  0.7610935 ,  1.0245485 ,  1.5988867 , -0.22061627,
    1.1487229 , -0.9349341 ,  0.14820372, -1.5151786 ,  1.6517029 ,
   -1.2972614
};

const struct float_4tensor conv0_kernel = {
    .data=(float*) conv0_kernel_data,
    .s0=2, // rows
    .s1=2, // cols
    .s2=1, // input channels
    .s3=4  // filters
};

const float conv0_bias_data[] = {
    -0.47952893,  0.00482019, -0.38126057,  0.3688425
};

const struct float_4tensor conv0_bias = {
    .data=(float*) conv0_bias_data,
    .s0=4, // channels
    .s1=1,
    .s2=1,
    .s3=1 
};

const float conv1_kernel_data[] = {
    7.27378011e-01,  9.45881903e-01, -7.18327522e-01,  1.03769243e+00,
    9.22698140e-01, -1.27145927e-02, -4.23858732e-01, -1.73859015e-01,
   -1.02740204e+00, -5.38816392e-01, -2.44815856e-01,  1.14176989e-01,
    3.23992759e-01,  2.21838737e+00, -1.10039902e+00,  4.98762399e-01,
   -5.02348661e-01,  2.69528985e-01, -6.66497946e-02,  1.25165731e-01,
   -6.57751858e-02,  3.90281111e-01, -5.45669757e-02, -3.91329706e-01,
   -1.40814837e-02,  2.38467261e-01,  8.55961382e-01, -4.63857085e-01,
    6.35963202e-01, -7.48987854e-01,  6.51141942e-01, -8.07598382e-02,
    7.61195242e-01,  5.70850372e-01,  2.89167285e-01, -5.62624156e-01,
    5.43100595e-01,  6.69088423e-01, -1.35173187e-01, -3.05877086e-02,
    2.51700610e-01,  1.36761116e-02, -7.20835030e-02, -2.78448522e-01,
   -1.28859147e-01,  8.79536510e-01, -3.62039745e-01,  7.80136287e-01,
    2.32537091e-01,  6.51939869e-01, -8.38572621e-01, -3.08774233e-01,
   -4.61221814e-01, -5.10588229e-01,  3.01796675e-01, -2.57512897e-01,
   -5.31473696e-01, -1.35203093e-01,  1.11851776e+00,  7.03275919e-01,
   -3.87381047e-01, -9.40764666e-01,  9.34496701e-01,  1.37888467e+00,
    6.63259327e-01,  3.48918319e-01, -4.91846263e-01,  6.95647299e-01,
   -6.02173448e-01, -3.60446423e-01, -1.07453310e+00, -2.60248408e-02,
    4.86567058e-02, -3.01601470e-01,  2.48051398e-02,  1.03620398e+00,
    4.19825137e-01,  5.71770966e-01,  8.52137208e-01,  4.22806233e-01,
    6.73667967e-01, -6.30349576e-01,  5.75746417e-01, -3.19797769e-02,
   -7.09236026e-01,  5.53001702e-01, -5.69183171e-01,  2.35598803e-01,
   -1.00926030e+00,  4.59792554e-01,  3.35738182e-01, -1.34079802e+00,
    4.19106513e-01,  3.79200369e-01,  6.05197740e-04, -1.92318484e-01,
    3.12143266e-01,  5.88343084e-01,  6.78760409e-01,  1.09794095e-01,
   -1.80441514e-01, -3.88830155e-01,  1.78531423e-01, -2.17308775e-01,
   -4.96841282e-01, -1.79255351e-01,  3.33479732e-01, -5.70767522e-01,
   -3.50368947e-01,  4.00049627e-01, -1.00258052e-01, -1.15573084e+00,
    1.04165411e+00, -1.20223537e-01,  3.77631634e-01, -1.93088010e-01,
    5.43556511e-01, -8.90018821e-01,  6.64935172e-01, -5.73938608e-01,
   -1.26290575e-01, -4.75888461e-01,  2.49203116e-01,  8.91269863e-01,
   -5.69439292e-01,  7.07258582e-01, -1.16973972e+00,  6.57007575e-01
};

const struct float_4tensor conv1_kernel = {
    .data=(float*) conv1_kernel_data,
    .s0=2, // rows
    .s1=2, // cols
    .s2=4, // input channels
    .s3=8  // filters
};

const float conv1_bias_data[] = {
    -0.71694434,  0.5879869 ,  0.41589046, -0.26058558,  0.33541515,
     0.03733891,  0.69916207,  0.6821877
};

const struct float_4tensor conv1_bias = {
    .data=(float*) conv1_bias_data,
    .s0=8, // channels
    .s1=1,
    .s2=1,
    .s3=1 
};

const float conv2_kernel_data[] = {
     3.23861659e-01, -1.14964835e-01,  2.73489416e-01, -4.33384269e-01,
    -2.96469897e-01,  4.47184533e-01,  6.99415147e-01,  2.40417421e-01,
     2.47769147e-01, -3.50662500e-01,  1.55082062e-01, -8.29928741e-02,
     9.69010964e-02, -1.35069026e-03,  1.22994587e-01,  1.02689743e-01,
     1.18634351e-01,  1.06989585e-01,  4.21575159e-01,  7.29155447e-03,
     5.77412367e-01,  6.23286605e-01,  5.53427823e-02, -1.66943848e-01,
    -6.11527525e-02,  5.41200042e-01,  5.89374959e-01, -8.27713385e-02,
     4.62702692e-01, -9.29501057e-02,  1.10795721e-01, -6.54509068e-02,
     8.06078315e-02,  7.00826198e-02, -2.58187205e-01,  7.21641108e-02,
    -7.16605723e-01,  1.74956888e-01, -3.45779181e-01, -8.76430273e-01,
     5.69121301e-01,  7.80043244e-01, -2.33807459e-01,  5.07344827e-02,
     7.62725174e-02, -3.32387328e-01, -3.43931437e-01, -1.74866304e-01,
    -9.98417661e-02, -8.54190812e-02, -3.05374086e-01,  3.85465980e-01,
    -1.87926412e-01, -4.19424847e-02,  8.20891023e-01,  7.73276687e-01,
    -3.66041623e-02,  9.01280642e-01, -2.97862530e-01,  3.75160605e-01,
    -1.19499278e+00, -8.50528896e-01,  3.48373443e-01,  5.14738619e-01,
     3.87936175e-01,  9.63066816e-02,  3.58960211e-01,  2.48332620e-01,
     4.56640661e-01,  6.39505237e-02,  3.81607354e-01,  5.75650215e-01,
     4.94763613e-01,  5.28940439e-01,  2.31644183e-01,  2.35878348e-01,
     6.74376369e-01,  6.59106612e-01, -3.16406190e-01, -1.75161242e-01,
     4.52372096e-02,  7.21094668e-01, -3.79954547e-01,  2.69889116e-01,
     2.99677432e-01, -3.41197103e-01,  7.24474728e-01, -2.10964397e-01,
    -2.38803744e-01, -9.30561960e-01,  3.76081288e-01,  7.81883150e-02,
    -1.12124121e+00, -2.36141920e-01, -6.53181911e-01, -4.17930186e-01,
     7.26744115e-01, -3.07791471e-01, -2.46739432e-01,  4.35281366e-01,
    -2.12727472e-01, -9.58491683e-01,  6.24571383e-01, -4.86249506e-01,
    -4.13629919e-01, -6.61011398e-01, -6.99253678e-01,  5.03129184e-01,
    -1.01799622e-01, -6.06434107e-01, -4.68390316e-01, -6.68481588e-01,
     1.39447004e-01,  2.51288444e-01, -1.84876233e-01,  1.83361486e-01,
     3.56419325e-01, -4.51236039e-01, -3.16116214e-02, -1.72845498e-01,
    -2.78168678e-01, -2.96688229e-01,  1.58948619e-02, -6.41403615e-01,
     6.39575660e-01,  4.48156416e-01,  4.86733943e-01, -5.17129719e-01,
     3.38740945e-01,  1.93931967e-01,  8.66526663e-02,  3.01030967e-02,
     8.29052702e-02,  2.30929181e-01,  4.99128878e-01,  4.27889168e-01,
    -7.57392943e-02,  4.28542882e-01, -2.63963938e-01, -1.58279926e-01,
     1.19204216e-01,  6.60043135e-02,  1.46381453e-01,  3.61352205e-01,
    -4.59316485e-02,  2.38526687e-01,  5.71963072e-01, -1.20822325e-01,
     4.77870256e-01,  8.83367211e-02,  3.58043946e-02,  1.20482698e-01,
    -1.42486796e-01,  3.81498069e-01,  5.78147173e-02,  5.84850490e-01,
     5.45429349e-01,  4.67866600e-01, -1.58522815e-01,  5.05065143e-01,
    -6.80175900e-01,  3.82867038e-01, -3.42211306e-01,  8.56617987e-01,
     1.00314438e+00,  6.64253294e-01,  3.76752734e-01,  1.74422100e-01,
     8.19534898e-01, -9.25264731e-02,  6.40566409e-01,  2.76342213e-01,
    -4.30643499e-01,  4.89038169e-01,  1.01891553e+00,  1.99234664e-01,
     3.73239130e-01, -2.21900761e-01, -1.92492619e-01, -1.09952241e-02,
    -9.36340451e-01, -4.81557310e-01,  6.56069160e-01,  5.37743680e-02,
     5.37962057e-02,  1.40397981e-01, -1.93874821e-01,  6.91032052e-01,
    -2.14934990e-01, -3.21188755e-02,  3.19440991e-01, -1.48069724e-01,
    -1.01812851e+00, -1.33804902e-01,  3.83647531e-01, -5.30639887e-01,
    -6.84802607e-02,  1.89892456e-01, -3.19903344e-01,  1.16869605e+00,
     2.66951382e-01,  1.02309501e+00,  3.54730040e-01,  2.29576021e-01,
     1.80393236e-03,  3.39350849e-01,  5.28332293e-02,  4.87335622e-01,
     3.62076461e-01, -7.64777958e-02, -2.59622950e-02, -7.87904799e-01,
    -2.60378480e-01, -4.91553158e-01,  1.06897391e-01, -1.71652824e-01,
     3.08432817e-01, -2.40252689e-01, -2.39237756e-01,  5.93629479e-01,
    -5.46442866e-01, -2.71394141e-02, -5.54675311e-02, -1.78575262e-01,
    -2.28969440e-01,  1.67011499e-01,  2.39623543e-02, -1.26146245e+00,
    -6.53540671e-01, -6.15423918e-01, -2.77966708e-01, -8.40562344e-01,
     2.05049887e-01, -6.23400688e-01, -1.56266582e+00, -6.32008135e-01,
    -7.79935360e-01, -7.90426075e-01, -2.35260352e-01, -7.34706521e-01,
    -2.33961925e-01, -5.77857375e-01, -4.08172488e-01,  3.01927272e-02,
    -6.90510049e-02, -3.80513251e-01,  4.85501319e-01,  2.87308216e-01,
    -2.32717440e-01, -1.18314099e+00,  2.42379859e-01, -4.73789990e-01,
    -9.61048663e-01, -6.49407655e-02, -2.48477057e-01,  1.05620110e-02,
     3.95000666e-01, -2.26278231e-01,  6.48959517e-01,  1.42514884e-01,
     9.71985459e-02, -6.41469238e-03,  1.78120255e-01,  1.77978501e-01,
     3.20112407e-01,  1.99011073e-01,  6.22676015e-01,  5.53777814e-01,
    -1.33554339e-01,  5.49179018e-01,  4.28481430e-01,  1.18462052e-02,
    -1.54814690e-01,  2.42102250e-01, -8.27632368e-01, -9.52834308e-01,
     4.28131521e-01,  5.77297688e-01, -6.93761334e-02,  3.64851266e-01,
    -8.30854010e-03,  1.77205443e-01, -3.53179097e-01, -3.44959080e-01,
    -1.77638698e-02, -4.48457330e-01, -1.52231660e-02, -2.19437465e-01,
    -7.56761312e-01,  2.66374171e-01, -3.43115121e-01,  1.83529705e-01,
    -4.90146160e-01,  2.30538785e-01, -2.37212051e-02, -4.24844325e-02,
    -4.11352608e-03, -7.99483061e-01,  2.36093342e-01, -7.10983634e-01,
    -1.75199762e-01, -7.67092526e-01, -8.26085210e-01,  2.17585880e-02,
    -6.45636678e-01,  1.11641788e+00,  3.15270394e-01,  3.14075202e-01,
     3.35371763e-01, -4.51883882e-01,  5.42030632e-01, -3.15560400e-01,
    -2.84710735e-01,  5.73561847e-01,  5.19804060e-01,  2.79327095e-01,
     7.30177283e-01,  2.22401887e-01, -3.96524370e-01, -5.56246117e-02,
     8.30383301e-01, -5.38908541e-01, -3.36404264e-01, -1.20125338e-01,
    -3.85153472e-01,  5.98906726e-02,  7.91248400e-03, -3.18307728e-01,
     3.45969230e-01, -2.20793173e-01, -3.37973177e-01,  1.10818475e-01,
    -3.17951515e-02,  2.43907705e-01, -1.45047590e-01, -2.59039015e-01,
    -2.12912127e-01,  7.98201501e-01, -2.32933015e-01, -2.30281398e-01,
    -1.89995795e-01, -4.28938121e-02, -4.73581403e-01, -4.44371313e-01,
     1.07527852e-01, -3.44950646e-01,  2.79823482e-01, -7.97914922e-01,
    -8.85775626e-01,  1.86725974e-01,  1.06445000e-01,  7.38418847e-02,
    -5.19450128e-01,  8.83378237e-02,  3.78908455e-01,  5.71785748e-01,
     2.41755351e-01, -3.01890709e-02,  7.86602199e-01, -3.26961845e-01,
    -1.87078878e-01, -1.78249687e-01,  3.76875907e-01, -1.63886160e-01,
     3.38739723e-01,  1.81276053e-01,  2.70008743e-01, -6.58255398e-01,
    -8.20914507e-01,  3.98741104e-02,  9.97341052e-02,  4.43912344e-03,
    -4.50677752e-01,  6.73100233e-01,  4.00038093e-01, -2.80064911e-01,
    -9.19904351e-01, -1.81600258e-01,  2.41146535e-01, -8.14303696e-01,
    -1.38001227e+00, -2.91711211e-01, -3.14810812e-01,  3.43275934e-01,
    -3.02745908e-01,  2.24683762e-01,  3.16107184e-01, -1.16736382e-01,
     5.46744227e-01,  2.92139333e-02,  2.83001214e-01,  3.29024106e-01,
     2.21361727e-01,  5.37465632e-01,  3.82996619e-01,  4.71970767e-01,
    -1.28242388e-01,  2.31699366e-02,  1.33533686e-01,  9.95718300e-01,
    -8.84666145e-02,  2.85113513e-01, -1.85848951e-01,  2.46780291e-01,
    -8.16836417e-01,  2.17128739e-01,  3.35041732e-01,  4.33218867e-01,
     9.36891884e-02, -1.93417743e-01,  3.84184599e-01, -5.79681516e-01,
    -7.76341632e-02,  1.88590392e-01,  2.83880413e-01, -4.66514975e-01,
     3.18100959e-01, -1.25440314e-01, -1.10774979e-01, -5.70127726e-01,
    -2.25260884e-01,  1.57201104e-03, -1.77178651e-01,  1.81770012e-01,
    -2.52370417e-01,  3.20139170e-01,  3.54356885e-01, -1.26864249e-02,
    -2.92744875e-01, -9.19087410e-01, -3.64056617e-01, -5.66513576e-02,
    -8.89010802e-02,  1.37333915e-01,  3.18475515e-01, -7.84243584e-01,
     1.02705754e-01, -4.93327290e-01, -3.85112725e-02, -9.56661478e-02,
    -3.84664148e-01,  2.63614923e-01,  1.43083379e-01,  1.95006669e-01,
     3.85485440e-01, -2.26475030e-01, -1.68652445e-01,  1.29130036e-01,
    -2.06599221e-01, -1.52661145e-01, -1.94487557e-01,  1.57625571e-01,
     9.94294286e-01, -3.95746976e-01,  1.38678640e-01,  5.96135974e-01,
     5.17903447e-01,  3.64417732e-01,  1.10924384e-02,  4.93953258e-01,
    -7.51012489e-02,  6.06283784e-01,  4.33347583e-01, -5.99697791e-02,
    -3.94113153e-01, -5.17602324e-01, -2.99087048e-01, -4.69190747e-01,
     1.90356344e-01, -7.16161251e-01, -8.20117652e-01, -6.69082776e-02,
    -5.93206644e-01,  1.66678637e-01, -2.90639829e-02, -9.54190671e-01,
    -4.52975869e-01, -2.55445570e-01, -3.43150377e-01,  3.16684395e-01,
     8.96355510e-01, -7.75253400e-02,  5.03433585e-01,  1.36878714e-01,
     1.11473344e-01, -1.34664830e-02, -1.67165086e-01, -7.59777188e-01,
    -1.65910089e+00, -1.67466417e-01,  3.62648994e-01, -5.71529031e-01,
     3.14845026e-01, -2.04518914e-01, -1.19733071e+00, -3.34315509e-01,
    -4.63952452e-01,  3.82178843e-01, -3.85188133e-01, -5.31224310e-01,
     1.79875329e-01, -2.26661563e-01, -5.57975590e-01,  6.10979915e-01,
     3.16181421e-01,  4.28805575e-02,  3.40611935e-01, -2.91970134e-01,
     1.44419909e-01,  8.40575278e-01,  7.58307815e-01, -1.24240637e+00
};

const struct float_4tensor conv2_kernel = {
    .data=(float*) conv2_kernel_data,
    .s0=2, // rows
    .s1=2, // cols
    .s2=8, // input channels
    .s3=16  // filters
};

const float conv2_bias_data[] = {
    -0.9932012 ,  0.7382205 , -1.1240276 , -0.17397024,  0.49086875,
    -0.19987378, -0.27599102, -0.0121414 , -0.4968169 ,  0.00395971,
    -0.40004584,  0.20181172, -0.5202136 , -0.50954354,  0.0102934 ,
     0.26657885
};

const struct float_4tensor conv2_bias = {
    .data=(float*) conv2_bias_data,
    .s0=16, // channels
    .s1=1,
    .s2=1,
    .s3=1 
};

const float dense_kernel_data[] = {
    -0.83960456,  0.19276161, -0.6516487 ,  0.58073187,  0.8809782 ,
    -0.19721672, -0.7706567 ,  0.24139214,  0.09156837,  1.0134032 ,
    -0.80731326,  0.22475286, -0.45592448, -0.8114214 , -0.6149736 ,
     0.7058    ,  0.49973786,  0.6961818 ,  0.6696165 , -1.5401654 ,
    -0.03712799,  0.14859608,  1.1001315 , -1.2117448 , -0.5655154 ,
    -0.22047481, -0.21379043,  0.5482302 ,  0.06175999, -1.3887627 ,
    -0.9614345 , -0.6491538 , -0.78515285, -0.17361808, -0.9029241 ,
     0.8398335 , -0.15483056,  0.07114238, -0.3013683 , -0.32277304,
     0.2331746 ,  0.5330044 ,  0.2117948 ,  1.2236348 ,  0.86173016,
    -0.37394926, -0.41088736, -0.5172179 ,  0.82984847,  0.09649578,
     0.35214788,  0.6599633 , -0.40643334, -0.7613639 , -0.22025885,
    -0.32842168,  0.5196468 ,  0.46605024,  0.41934952, -1.0067512 ,
     0.72975904, -0.5682072 , -0.19975613,  0.41365075,  0.37000197,
     0.8825513 ,  0.3661467 ,  1.074506  ,  0.32708085,  1.2502303 ,
     0.03993157,  0.3009259 , -1.0418994 , -1.0485594 , -1.0081837 ,
     0.14162217, -0.09343989,  0.02638404,  0.63109505, -0.57888997,
    -0.07659687, -0.7403495 ,  0.9252516 , -1.3009382 ,  0.45175907,
    -0.6220688 ,  0.7774292 ,  0.39113414, -0.19171053, -0.6475278 ,
     0.2877077 , -1.0716772 , -0.4110631 ,  0.74558234,  0.02564711,
    -0.16148423, -1.0258807 , -0.4600068 , -1.1377205 , -0.15540329,
     0.10244057, -0.29883784,  0.8046092 , -0.3369884 , -0.7511536 ,
     0.10630678, -0.06639931,  0.1824477 , -0.11648313, -0.5484425 ,
     0.46969822,  0.9551896 ,  0.24020508, -0.32730016, -0.13939773,
    -0.574537  ,  1.175291  ,  0.4326561 , -0.10717505, -0.88536936,
     0.90378517,  0.20681494, -0.3857713 , -1.0081033 ,  1.1679721 ,
     0.9837077 , -0.37689158, -0.6864073 ,  0.13275966, -0.571121  ,
    -0.10510273,  1.3209739 , -1.0376924 , -0.59198326,  0.22577463,
     0.10932555, -0.330451  ,  0.91890234, -0.10834443, -0.24120307,
    -0.6533182 ,  0.25406158,  0.24831468,  0.73570657,  0.5486903 ,
     0.25472152,  1.2872449 , -0.85320455, -0.33045655,  0.12238619,
     0.07209632,  1.0779041 ,  0.34863773, -0.1462247 , -0.7689912 ,
    -0.8378165 , -1.2461573 ,  0.19862805, -0.75369066, -0.4863001
};

const struct float_4tensor dense_kernel = {
    .data=(float*) dense_kernel_data,
    .s0=10, // input channels
    .s1=16, // units
    .s2=1,
    .s3=1
};

const float dense_bias_data[] = {
     0.33879644,  0.5005194 ,  0.47052455,  0.09496455,  0.0743339 ,
    -0.7524616 ,  0.25328198, -0.15340249, -0.8011218 ,  0.09212416
};

const struct float_4tensor dense_bias = {
    .data=(float*) dense_bias_data,
    .s0=10, // channels
    .s1=1,
    .s2=1,
    .s3=1 
};
