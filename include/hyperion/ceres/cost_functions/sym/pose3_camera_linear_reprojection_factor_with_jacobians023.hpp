// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/linear_camera_cal.h>
#include <sym/pose3.h>

namespace sym_ceres {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose3_camera_linear_reprojection_factor
 *
 * Args:
 *     w_T_b: Pose3
 *     b_T_c: Pose3
 *     calibration: LinearCameraCal
 *     l_w: Matrix31
 *     pixel: Matrix21
 *     sqrt_info: Matrix22
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix21
 *     res_D_w_T_b: (2x7) jacobian (result_dim x storage_dim) of res (2) wrt arg w_T_b (7)
 * (row-major) res_D_calibration: (2x4) jacobian (result_dim x storage_dim) of res (2) wrt arg
 * calibration (4) (row-major) res_D_l_w: (2x3) jacobian (result_dim x storage_dim) of res (2) wrt
 * arg l_w (3) (row-major)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 2, 1> Pose3CameraLinearReprojectionFactorWithJacobians023(
    const sym::Pose3<Scalar>& w_T_b, const sym::Pose3<Scalar>& b_T_c,
    const sym::LinearCameraCal<Scalar>& calibration, const Eigen::Matrix<Scalar, 3, 1>& l_w,
    const Eigen::Matrix<Scalar, 2, 1>& pixel, const Eigen::Matrix<Scalar, 2, 2>& sqrt_info,
    const Scalar epsilon, Scalar* const res_D_w_T_b = nullptr,
    Scalar* const res_D_calibration = nullptr, Scalar* const res_D_l_w = nullptr) {
  // Total ops: 744

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _w_T_b = w_T_b.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _b_T_c = b_T_c.Data();
  const Eigen::Matrix<Scalar, 4, 1>& _calibration = calibration.Data();

  // Intermediate terms (257)
  const Scalar _tmp0 = _b_T_c[1] * _w_T_b[0];
  const Scalar _tmp1 = _b_T_c[2] * _w_T_b[3];
  const Scalar _tmp2 = _b_T_c[3] * _w_T_b[2];
  const Scalar _tmp3 = _b_T_c[0] * _w_T_b[1];
  const Scalar _tmp4 = _tmp0 + _tmp1 + _tmp2 - _tmp3;
  const Scalar _tmp5 = 2 * std::pow(_tmp4, Scalar(2));
  const Scalar _tmp6 = -_tmp5;
  const Scalar _tmp7 = _b_T_c[1] * _w_T_b[2];
  const Scalar _tmp8 = _b_T_c[2] * _w_T_b[1];
  const Scalar _tmp9 = _b_T_c[3] * _w_T_b[0];
  const Scalar _tmp10 = _b_T_c[0] * _w_T_b[3];
  const Scalar _tmp11 = _tmp10 - _tmp7 + _tmp8 + _tmp9;
  const Scalar _tmp12 = 2 * std::pow(_tmp11, Scalar(2));
  const Scalar _tmp13 = 1 - _tmp12;
  const Scalar _tmp14 = _tmp13 + _tmp6;
  const Scalar _tmp15 = _b_T_c[1] * _w_T_b[3];
  const Scalar _tmp16 = _b_T_c[2] * _w_T_b[0];
  const Scalar _tmp17 = _b_T_c[3] * _w_T_b[1];
  const Scalar _tmp18 = _b_T_c[0] * _w_T_b[2];
  const Scalar _tmp19 = _tmp15 - _tmp16 + _tmp17 + _tmp18;
  const Scalar _tmp20 = 2 * _tmp11;
  const Scalar _tmp21 = _tmp19 * _tmp20;
  const Scalar _tmp22 = _b_T_c[1] * _w_T_b[1];
  const Scalar _tmp23 = _b_T_c[2] * _w_T_b[2];
  const Scalar _tmp24 = _b_T_c[0] * _w_T_b[0];
  const Scalar _tmp25 = _b_T_c[3] * _w_T_b[3];
  const Scalar _tmp26 = -_tmp22 - _tmp23 - _tmp24 + _tmp25;
  const Scalar _tmp27 = 2 * _tmp4;
  const Scalar _tmp28 = _tmp26 * _tmp27;
  const Scalar _tmp29 = -_tmp28;
  const Scalar _tmp30 = _tmp21 + _tmp29;
  const Scalar _tmp31 = _tmp19 * _tmp27;
  const Scalar _tmp32 = _tmp20 * _tmp26;
  const Scalar _tmp33 = _tmp31 + _tmp32;
  const Scalar _tmp34 = std::pow(_w_T_b[0], Scalar(2));
  const Scalar _tmp35 = -2 * _tmp34;
  const Scalar _tmp36 = std::pow(_w_T_b[1], Scalar(2));
  const Scalar _tmp37 = -2 * _tmp36;
  const Scalar _tmp38 = 2 * _w_T_b[0];
  const Scalar _tmp39 = _tmp38 * _w_T_b[2];
  const Scalar _tmp40 = 2 * _w_T_b[1];
  const Scalar _tmp41 = _tmp40 * _w_T_b[3];
  const Scalar _tmp42 = -_tmp41;
  const Scalar _tmp43 = _tmp39 + _tmp42;
  const Scalar _tmp44 = _tmp38 * _w_T_b[3];
  const Scalar _tmp45 = _tmp40 * _w_T_b[2];
  const Scalar _tmp46 = _tmp44 + _tmp45;
  const Scalar _tmp47 =
      _b_T_c[4] * _tmp43 + _b_T_c[5] * _tmp46 + _b_T_c[6] * (_tmp35 + _tmp37 + 1) + _w_T_b[6];
  const Scalar _tmp48 = std::pow(_w_T_b[2], Scalar(2));
  const Scalar _tmp49 = 1 - 2 * _tmp48;
  const Scalar _tmp50 = _tmp40 * _w_T_b[0];
  const Scalar _tmp51 = 2 * _w_T_b[3];
  const Scalar _tmp52 = _tmp51 * _w_T_b[2];
  const Scalar _tmp53 = -_tmp52;
  const Scalar _tmp54 = _tmp50 + _tmp53;
  const Scalar _tmp55 = _tmp39 + _tmp41;
  const Scalar _tmp56 =
      _b_T_c[4] * (_tmp37 + _tmp49) + _b_T_c[5] * _tmp54 + _b_T_c[6] * _tmp55 + _w_T_b[4];
  const Scalar _tmp57 = _tmp50 + _tmp52;
  const Scalar _tmp58 = -_tmp44;
  const Scalar _tmp59 = _tmp45 + _tmp58;
  const Scalar _tmp60 =
      _b_T_c[4] * _tmp57 + _b_T_c[5] * (_tmp35 + _tmp49) + _b_T_c[6] * _tmp59 + _w_T_b[5];
  const Scalar _tmp61 = -_tmp14 * _tmp60 + _tmp14 * l_w(1, 0) - _tmp30 * _tmp56 +
                        _tmp30 * l_w(0, 0) - _tmp33 * _tmp47 + _tmp33 * l_w(2, 0);
  const Scalar _tmp62 = 2 * std::pow(_tmp19, Scalar(2));
  const Scalar _tmp63 = -_tmp62;
  const Scalar _tmp64 = _tmp13 + _tmp63;
  const Scalar _tmp65 = _tmp11 * _tmp27;
  const Scalar _tmp66 = 2 * _tmp19;
  const Scalar _tmp67 = _tmp26 * _tmp66;
  const Scalar _tmp68 = _tmp65 + _tmp67;
  const Scalar _tmp69 = -_tmp32;
  const Scalar _tmp70 = _tmp31 + _tmp69;
  const Scalar _tmp71 = -_tmp47 * _tmp64 - _tmp56 * _tmp68 - _tmp60 * _tmp70 + _tmp64 * l_w(2, 0) +
                        _tmp68 * l_w(0, 0) + _tmp70 * l_w(1, 0);
  const Scalar _tmp72 = std::max<Scalar>(_tmp71, epsilon);
  const Scalar _tmp73 = Scalar(1.0) / (_tmp72);
  const Scalar _tmp74 = _calibration[1] * _tmp73;
  const Scalar _tmp75 = _calibration[3] + _tmp61 * _tmp74 - pixel(1, 0);
  const Scalar _tmp76 = _tmp6 + _tmp63 + 1;
  const Scalar _tmp77 = -_tmp67;
  const Scalar _tmp78 = _tmp65 + _tmp77;
  const Scalar _tmp79 = _tmp21 + _tmp28;
  const Scalar _tmp80 = -_tmp47 * _tmp78 - _tmp56 * _tmp76 - _tmp60 * _tmp79 + _tmp76 * l_w(0, 0) +
                        _tmp78 * l_w(2, 0) + _tmp79 * l_w(1, 0);
  const Scalar _tmp81 = _calibration[0] * _tmp73;
  const Scalar _tmp82 = _calibration[2] + _tmp80 * _tmp81 - pixel(0, 0);
  const Scalar _tmp83 = std::max<Scalar>(0, (((_tmp71) > 0) - ((_tmp71) < 0)));
  const Scalar _tmp84 = (Scalar(1) / Scalar(2)) * _tmp8;
  const Scalar _tmp85 = (Scalar(1) / Scalar(2)) * _tmp10;
  const Scalar _tmp86 = -_tmp85;
  const Scalar _tmp87 = -Scalar(1) / Scalar(2) * _tmp7;
  const Scalar _tmp88 = (Scalar(1) / Scalar(2)) * _tmp9;
  const Scalar _tmp89 = _tmp87 - _tmp88;
  const Scalar _tmp90 = _tmp84 + _tmp86 + _tmp89;
  const Scalar _tmp91 = _tmp20 * _tmp90;
  const Scalar _tmp92 = (Scalar(1) / Scalar(2)) * _tmp22;
  const Scalar _tmp93 = (Scalar(1) / Scalar(2)) * _tmp24;
  const Scalar _tmp94 = (Scalar(1) / Scalar(2)) * _tmp23;
  const Scalar _tmp95 = (Scalar(1) / Scalar(2)) * _tmp25;
  const Scalar _tmp96 = _tmp94 + _tmp95;
  const Scalar _tmp97 = _tmp92 - _tmp93 + _tmp96;
  const Scalar _tmp98 = 2 * _tmp26;
  const Scalar _tmp99 = _tmp97 * _tmp98;
  const Scalar _tmp100 = (Scalar(1) / Scalar(2)) * _tmp15;
  const Scalar _tmp101 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp102 = -_tmp101;
  const Scalar _tmp103 = -Scalar(1) / Scalar(2) * _tmp16;
  const Scalar _tmp104 = (Scalar(1) / Scalar(2)) * _tmp17;
  const Scalar _tmp105 = _tmp103 - _tmp104;
  const Scalar _tmp106 = _tmp100 + _tmp102 + _tmp105;
  const Scalar _tmp107 = (Scalar(1) / Scalar(2)) * _tmp1;
  const Scalar _tmp108 = -_tmp107;
  const Scalar _tmp109 = (Scalar(1) / Scalar(2)) * _tmp2;
  const Scalar _tmp110 = (Scalar(1) / Scalar(2)) * _tmp0;
  const Scalar _tmp111 = -Scalar(1) / Scalar(2) * _tmp3;
  const Scalar _tmp112 = -_tmp110 + _tmp111;
  const Scalar _tmp113 = _tmp108 + _tmp109 + _tmp112;
  const Scalar _tmp114 = _tmp106 * _tmp66 + _tmp113 * _tmp27;
  const Scalar _tmp115 = _tmp114 + _tmp91 + _tmp99;
  const Scalar _tmp116 = 4 * _tmp11;
  const Scalar _tmp117 = -_tmp116 * _tmp97;
  const Scalar _tmp118 = 4 * _tmp4;
  const Scalar _tmp119 = -_tmp106 * _tmp118;
  const Scalar _tmp120 = _tmp117 + _tmp119;
  const Scalar _tmp121 = _tmp27 * _tmp90;
  const Scalar _tmp122 = _tmp106 * _tmp98;
  const Scalar _tmp123 = _tmp113 * _tmp20 + _tmp66 * _tmp97;
  const Scalar _tmp124 = -_tmp121 - _tmp122 + _tmp123;
  const Scalar _tmp125 = -_tmp50;
  const Scalar _tmp126 = _b_T_c[5] * _tmp55 + _b_T_c[6] * (_tmp125 + _tmp52);
  const Scalar _tmp127 = -_tmp36;
  const Scalar _tmp128 = std::pow(_w_T_b[3], Scalar(2));
  const Scalar _tmp129 = -_tmp128;
  const Scalar _tmp130 = _b_T_c[5] * _tmp59 + _b_T_c[6] * (_tmp127 + _tmp129 + _tmp34 + _tmp48);
  const Scalar _tmp131 = -_tmp34;
  const Scalar _tmp132 = _tmp131 + _tmp48;
  const Scalar _tmp133 = _tmp127 + _tmp128;
  const Scalar _tmp134 = -_tmp45;
  const Scalar _tmp135 = _b_T_c[5] * (_tmp132 + _tmp133) + _b_T_c[6] * (_tmp134 + _tmp58);
  const Scalar _tmp136 = 4 * _tmp19;
  const Scalar _tmp137 = -_tmp113 * _tmp136;
  const Scalar _tmp138 = _tmp117 + _tmp137;
  const Scalar _tmp139 = _tmp66 * _tmp90;
  const Scalar _tmp140 = _tmp113 * _tmp98;
  const Scalar _tmp141 = _tmp106 * _tmp20 + _tmp27 * _tmp97;
  const Scalar _tmp142 = _tmp139 + _tmp140 + _tmp141;
  const Scalar _tmp143 = _tmp114 - _tmp91 - _tmp99;
  const Scalar _tmp144 = (Scalar(1) / Scalar(2)) *
                         ((((_tmp71 - epsilon) > 0) - ((_tmp71 - epsilon) < 0)) + 1) /
                         std::pow(_tmp72, Scalar(2));
  const Scalar _tmp145 = _tmp144 * (-_tmp126 * _tmp68 - _tmp130 * _tmp70 - _tmp135 * _tmp64 -
                                    _tmp138 * _tmp47 + _tmp138 * l_w(2, 0) - _tmp142 * _tmp56 +
                                    _tmp142 * l_w(0, 0) - _tmp143 * _tmp60 + _tmp143 * l_w(1, 0));
  const Scalar _tmp146 = _calibration[1] * _tmp61;
  const Scalar _tmp147 =
      -_tmp145 * _tmp146 + _tmp74 * (-_tmp115 * _tmp47 + _tmp115 * l_w(2, 0) - _tmp120 * _tmp60 +
                                     _tmp120 * l_w(1, 0) - _tmp124 * _tmp56 + _tmp124 * l_w(0, 0) -
                                     _tmp126 * _tmp30 - _tmp130 * _tmp14 - _tmp135 * _tmp33);
  const Scalar _tmp148 = _calibration[0] * _tmp80;
  const Scalar _tmp149 = -_tmp139 - _tmp140 + _tmp141;
  const Scalar _tmp150 = _tmp119 + _tmp137;
  const Scalar _tmp151 = _tmp121 + _tmp122 + _tmp123;
  const Scalar _tmp152 =
      -_tmp145 * _tmp148 + _tmp81 * (-_tmp126 * _tmp76 - _tmp130 * _tmp79 - _tmp135 * _tmp78 -
                                     _tmp149 * _tmp47 + _tmp149 * l_w(2, 0) - _tmp150 * _tmp56 +
                                     _tmp150 * l_w(0, 0) - _tmp151 * _tmp60 + _tmp151 * l_w(1, 0));
  const Scalar _tmp153 = _tmp83 * (_tmp147 * sqrt_info(0, 1) + _tmp152 * sqrt_info(0, 0));
  const Scalar _tmp154 = 2 * _w_T_b[2];
  const Scalar _tmp155 = -_tmp109;
  const Scalar _tmp156 = _tmp107 + _tmp112 + _tmp155;
  const Scalar _tmp157 = -_tmp116 * _tmp156;
  const Scalar _tmp158 = -_tmp92 + _tmp93 + _tmp96;
  const Scalar _tmp159 = -_tmp136 * _tmp158;
  const Scalar _tmp160 = _tmp157 + _tmp159;
  const Scalar _tmp161 = -_tmp100;
  const Scalar _tmp162 = _tmp101 + _tmp105 + _tmp161;
  const Scalar _tmp163 = _tmp162 * _tmp20;
  const Scalar _tmp164 = _tmp156 * _tmp98;
  const Scalar _tmp165 = -_tmp84;
  const Scalar _tmp166 = _tmp165 + _tmp86 + _tmp87 + _tmp88;
  const Scalar _tmp167 = 2 * _tmp166;
  const Scalar _tmp168 = _tmp158 * _tmp27 + _tmp167 * _tmp19;
  const Scalar _tmp169 = -_tmp163 - _tmp164 + _tmp168;
  const Scalar _tmp170 = _tmp162 * _tmp66;
  const Scalar _tmp171 = _tmp158 * _tmp98;
  const Scalar _tmp172 = _tmp11 * _tmp167 + _tmp156 * _tmp27;
  const Scalar _tmp173 = _tmp170 + _tmp171 + _tmp172;
  const Scalar _tmp174 = -_tmp48;
  const Scalar _tmp175 = _tmp174 + _tmp34;
  const Scalar _tmp176 = -_tmp39;
  const Scalar _tmp177 = _b_T_c[4] * (_tmp176 + _tmp42) + _b_T_c[6] * (_tmp133 + _tmp175);
  const Scalar _tmp178 = _b_T_c[4] * (_tmp134 + _tmp44) + _b_T_c[6] * _tmp57;
  const Scalar _tmp179 = _tmp129 + _tmp36;
  const Scalar _tmp180 = _b_T_c[4] * (_tmp175 + _tmp179) + _b_T_c[6] * _tmp43;
  const Scalar _tmp181 = _tmp144 * (-_tmp160 * _tmp47 + _tmp160 * l_w(2, 0) - _tmp169 * _tmp60 +
                                    _tmp169 * l_w(1, 0) - _tmp173 * _tmp56 + _tmp173 * l_w(0, 0) -
                                    _tmp177 * _tmp68 - _tmp178 * _tmp70 - _tmp180 * _tmp64);
  const Scalar _tmp182 = -_tmp118 * _tmp166;
  const Scalar _tmp183 = _tmp157 + _tmp182;
  const Scalar _tmp184 = _tmp163 + _tmp164 + _tmp168;
  const Scalar _tmp185 = _tmp162 * _tmp27;
  const Scalar _tmp186 = _tmp167 * _tmp26;
  const Scalar _tmp187 = _tmp156 * _tmp66 + _tmp158 * _tmp20;
  const Scalar _tmp188 = -_tmp185 - _tmp186 + _tmp187;
  const Scalar _tmp189 =
      -_tmp146 * _tmp181 + _tmp74 * (-_tmp14 * _tmp178 - _tmp177 * _tmp30 - _tmp180 * _tmp33 -
                                     _tmp183 * _tmp60 + _tmp183 * l_w(1, 0) - _tmp184 * _tmp47 +
                                     _tmp184 * l_w(2, 0) - _tmp188 * _tmp56 + _tmp188 * l_w(0, 0));
  const Scalar _tmp190 = -_tmp170 - _tmp171 + _tmp172;
  const Scalar _tmp191 = _tmp159 + _tmp182;
  const Scalar _tmp192 = _tmp185 + _tmp186 + _tmp187;
  const Scalar _tmp193 =
      -_tmp148 * _tmp181 + _tmp81 * (-_tmp177 * _tmp76 - _tmp178 * _tmp79 - _tmp180 * _tmp78 -
                                     _tmp190 * _tmp47 + _tmp190 * l_w(2, 0) - _tmp191 * _tmp56 +
                                     _tmp191 * l_w(0, 0) - _tmp192 * _tmp60 + _tmp192 * l_w(1, 0));
  const Scalar _tmp194 = _tmp83 * (_tmp189 * sqrt_info(0, 1) + _tmp193 * sqrt_info(0, 0));
  const Scalar _tmp195 = _b_T_c[4] * _tmp46 + _b_T_c[5] * (_tmp176 + _tmp41);
  const Scalar _tmp196 = _tmp108 + _tmp110 + _tmp111 + _tmp155;
  const Scalar _tmp197 = _tmp196 * _tmp66;
  const Scalar _tmp198 = _tmp165 + _tmp85 + _tmp89;
  const Scalar _tmp199 = _tmp198 * _tmp98;
  const Scalar _tmp200 = _tmp92 + _tmp93 - _tmp94 + _tmp95;
  const Scalar _tmp201 = _tmp102 + _tmp103 + _tmp104 + _tmp161;
  const Scalar _tmp202 = _tmp20 * _tmp200 + _tmp201 * _tmp27;
  const Scalar _tmp203 = _tmp197 + _tmp199 + _tmp202;
  const Scalar _tmp204 = -_tmp116 * _tmp201;
  const Scalar _tmp205 = -_tmp136 * _tmp198;
  const Scalar _tmp206 = _tmp204 + _tmp205;
  const Scalar _tmp207 = _tmp196 * _tmp20;
  const Scalar _tmp208 = _tmp201 * _tmp98;
  const Scalar _tmp209 = _tmp198 * _tmp27 + _tmp200 * _tmp66;
  const Scalar _tmp210 = -_tmp207 - _tmp208 + _tmp209;
  const Scalar _tmp211 = _b_T_c[4] * _tmp54 + _b_T_c[5] * (_tmp132 + _tmp179);
  const Scalar _tmp212 =
      _b_T_c[4] * (_tmp128 + _tmp131 + _tmp174 + _tmp36) + _b_T_c[5] * (_tmp125 + _tmp53);
  const Scalar _tmp213 = -_tmp195 * _tmp64 - _tmp203 * _tmp56 + _tmp203 * l_w(0, 0) -
                         _tmp206 * _tmp47 + _tmp206 * l_w(2, 0) - _tmp210 * _tmp60 +
                         _tmp210 * l_w(1, 0) - _tmp211 * _tmp68 - _tmp212 * _tmp70;
  const Scalar _tmp214 = _tmp144 * _tmp148;
  const Scalar _tmp215 = -_tmp197 - _tmp199 + _tmp202;
  const Scalar _tmp216 = _tmp196 * _tmp27;
  const Scalar _tmp217 = _tmp200 * _tmp98;
  const Scalar _tmp218 = _tmp198 * _tmp20 + _tmp201 * _tmp66;
  const Scalar _tmp219 = _tmp216 + _tmp217 + _tmp218;
  const Scalar _tmp220 = -_tmp118 * _tmp200;
  const Scalar _tmp221 = _tmp205 + _tmp220;
  const Scalar _tmp222 =
      -_tmp213 * _tmp214 + _tmp81 * (-_tmp195 * _tmp78 - _tmp211 * _tmp76 - _tmp212 * _tmp79 -
                                     _tmp215 * _tmp47 + _tmp215 * l_w(2, 0) - _tmp219 * _tmp60 +
                                     _tmp219 * l_w(1, 0) - _tmp221 * _tmp56 + _tmp221 * l_w(0, 0));
  const Scalar _tmp223 = _tmp144 * _tmp146;
  const Scalar _tmp224 = _tmp204 + _tmp220;
  const Scalar _tmp225 = _tmp207 + _tmp208 + _tmp209;
  const Scalar _tmp226 = -_tmp216 - _tmp217 + _tmp218;
  const Scalar _tmp227 =
      -_tmp213 * _tmp223 + _tmp74 * (-_tmp14 * _tmp212 - _tmp195 * _tmp33 - _tmp211 * _tmp30 -
                                     _tmp224 * _tmp60 + _tmp224 * l_w(1, 0) - _tmp225 * _tmp47 +
                                     _tmp225 * l_w(2, 0) - _tmp226 * _tmp56 + _tmp226 * l_w(0, 0));
  const Scalar _tmp228 = _tmp83 * (_tmp222 * sqrt_info(0, 0) + _tmp227 * sqrt_info(0, 1));
  const Scalar _tmp229 = _tmp83 * (_tmp147 * sqrt_info(1, 1) + _tmp152 * sqrt_info(1, 0));
  const Scalar _tmp230 = _tmp83 * (_tmp189 * sqrt_info(1, 1) + _tmp193 * sqrt_info(1, 0));
  const Scalar _tmp231 = _tmp83 * (_tmp222 * sqrt_info(1, 0) + _tmp227 * sqrt_info(1, 1));
  const Scalar _tmp232 = -_tmp65;
  const Scalar _tmp233 = _tmp232 + _tmp77;
  const Scalar _tmp234 = -_tmp21;
  const Scalar _tmp235 = -_tmp223 * _tmp233 + _tmp74 * (_tmp234 + _tmp28);
  const Scalar _tmp236 = _tmp5 - 1;
  const Scalar _tmp237 = -_tmp214 * _tmp233 + _tmp81 * (_tmp236 + _tmp62);
  const Scalar _tmp238 = -_tmp31;
  const Scalar _tmp239 = _tmp238 + _tmp32;
  const Scalar _tmp240 = -_tmp214 * _tmp239 + _tmp81 * (_tmp234 + _tmp29);
  const Scalar _tmp241 = -_tmp223 * _tmp239 + _tmp74 * (_tmp12 + _tmp236);
  const Scalar _tmp242 = _tmp12 + _tmp62 - 1;
  const Scalar _tmp243 = -_tmp214 * _tmp242 + _tmp81 * (_tmp232 + _tmp67);
  const Scalar _tmp244 = -_tmp223 * _tmp242 + _tmp74 * (_tmp238 + _tmp69);
  const Scalar _tmp245 = _tmp83 * sqrt_info(0, 0);
  const Scalar _tmp246 = _tmp73 * _tmp80;
  const Scalar _tmp247 = _tmp83 * sqrt_info(1, 0);
  const Scalar _tmp248 = _tmp83 * sqrt_info(0, 1);
  const Scalar _tmp249 = _tmp61 * _tmp73;
  const Scalar _tmp250 = _tmp83 * sqrt_info(1, 1);
  const Scalar _tmp251 = -_tmp223 * _tmp68 + _tmp30 * _tmp74;
  const Scalar _tmp252 = -_tmp214 * _tmp68 + _tmp76 * _tmp81;
  const Scalar _tmp253 = -_tmp214 * _tmp70 + _tmp79 * _tmp81;
  const Scalar _tmp254 = _tmp14 * _tmp74 - _tmp223 * _tmp70;
  const Scalar _tmp255 = -_tmp214 * _tmp64 + _tmp78 * _tmp81;
  const Scalar _tmp256 = -_tmp223 * _tmp64 + _tmp33 * _tmp74;

  // Output terms (4)
  Eigen::Matrix<Scalar, 2, 1> _res;

  _res(0, 0) = _tmp83 * (_tmp75 * sqrt_info(0, 1) + _tmp82 * sqrt_info(0, 0));
  _res(1, 0) = _tmp83 * (_tmp75 * sqrt_info(1, 1) + _tmp82 * sqrt_info(1, 0));

  if (res_D_w_T_b != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 7, Eigen::RowMajor>> _res_D_w_T_b{res_D_w_T_b};

    _res_D_w_T_b(0, 0) = _tmp153 * _tmp51 - _tmp154 * _tmp194 + _tmp228 * _tmp40;
    _res_D_w_T_b(1, 0) = -_tmp154 * _tmp230 + _tmp229 * _tmp51 + _tmp231 * _tmp40;
    _res_D_w_T_b(0, 1) = _tmp153 * _tmp154 + _tmp194 * _tmp51 - _tmp228 * _tmp38;
    _res_D_w_T_b(1, 1) = _tmp154 * _tmp229 + _tmp230 * _tmp51 - _tmp231 * _tmp38;
    _res_D_w_T_b(0, 2) = -_tmp153 * _tmp40 + _tmp194 * _tmp38 + _tmp228 * _tmp51;
    _res_D_w_T_b(1, 2) = -_tmp229 * _tmp40 + _tmp230 * _tmp38 + _tmp231 * _tmp51;
    _res_D_w_T_b(0, 3) = -_tmp153 * _tmp38 - _tmp154 * _tmp228 - _tmp194 * _tmp40;
    _res_D_w_T_b(1, 3) = -_tmp154 * _tmp231 - _tmp229 * _tmp38 - _tmp230 * _tmp40;
    _res_D_w_T_b(0, 4) = _tmp83 * (_tmp235 * sqrt_info(0, 1) + _tmp237 * sqrt_info(0, 0));
    _res_D_w_T_b(1, 4) = _tmp83 * (_tmp235 * sqrt_info(1, 1) + _tmp237 * sqrt_info(1, 0));
    _res_D_w_T_b(0, 5) = _tmp83 * (_tmp240 * sqrt_info(0, 0) + _tmp241 * sqrt_info(0, 1));
    _res_D_w_T_b(1, 5) = _tmp83 * (_tmp240 * sqrt_info(1, 0) + _tmp241 * sqrt_info(1, 1));
    _res_D_w_T_b(0, 6) = _tmp83 * (_tmp243 * sqrt_info(0, 0) + _tmp244 * sqrt_info(0, 1));
    _res_D_w_T_b(1, 6) = _tmp83 * (_tmp243 * sqrt_info(1, 0) + _tmp244 * sqrt_info(1, 1));
  }

  if (res_D_calibration != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 4, Eigen::RowMajor>> _res_D_calibration{res_D_calibration};

    _res_D_calibration(0, 0) = _tmp245 * _tmp246;
    _res_D_calibration(1, 0) = _tmp246 * _tmp247;
    _res_D_calibration(0, 1) = _tmp248 * _tmp249;
    _res_D_calibration(1, 1) = _tmp249 * _tmp250;
    _res_D_calibration(0, 2) = _tmp245;
    _res_D_calibration(1, 2) = _tmp247;
    _res_D_calibration(0, 3) = _tmp248;
    _res_D_calibration(1, 3) = _tmp250;
  }

  if (res_D_l_w != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 2, 3, Eigen::RowMajor>> _res_D_l_w{res_D_l_w};

    _res_D_l_w(0, 0) = _tmp83 * (_tmp251 * sqrt_info(0, 1) + _tmp252 * sqrt_info(0, 0));
    _res_D_l_w(1, 0) = _tmp83 * (_tmp251 * sqrt_info(1, 1) + _tmp252 * sqrt_info(1, 0));
    _res_D_l_w(0, 1) = _tmp83 * (_tmp253 * sqrt_info(0, 0) + _tmp254 * sqrt_info(0, 1));
    _res_D_l_w(1, 1) = _tmp83 * (_tmp253 * sqrt_info(1, 0) + _tmp254 * sqrt_info(1, 1));
    _res_D_l_w(0, 2) = _tmp83 * (_tmp255 * sqrt_info(0, 0) + _tmp256 * sqrt_info(0, 1));
    _res_D_l_w(1, 2) = _tmp83 * (_tmp255 * sqrt_info(1, 0) + _tmp256 * sqrt_info(1, 1));
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_ceres
