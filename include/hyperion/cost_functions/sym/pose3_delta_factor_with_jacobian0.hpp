// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

#include <sym/pose3.h>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: pose3_delta_factor
 *
 * Args:
 *     x: Pose3
 *     y: Pose3
 *     sqrt_info: Matrix66
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix61
 *     res_D_x: (6x6) jacobian of res (6) wrt arg x (6)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 6, 1> Pose3DeltaFactorWithJacobian0(
    const sym::Pose3<Scalar>& x, const sym::Pose3<Scalar>& y,
    const Eigen::Matrix<Scalar, 6, 6>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr) {
  // Total ops: 542

  // Input arrays
  const Eigen::Matrix<Scalar, 7, 1>& _x = x.Data();
  const Eigen::Matrix<Scalar, 7, 1>& _y = y.Data();

  // Intermediate terms (99)
  const Scalar _tmp0 = _x[3] * _y[1];
  const Scalar _tmp1 = _x[2] * _y[0];
  const Scalar _tmp2 = _x[1] * _y[3];
  const Scalar _tmp3 = _x[0] * _y[2];
  const Scalar _tmp4 = _tmp0 - _tmp1 - _tmp2 + _tmp3;
  const Scalar _tmp5 = _x[2] * _y[2];
  const Scalar _tmp6 = _x[1] * _y[1];
  const Scalar _tmp7 = _x[0] * _y[0];
  const Scalar _tmp8 = -_tmp5 - _tmp6 - _tmp7;
  const Scalar _tmp9 = _x[3] * _y[3];
  const Scalar _tmp10 =
      2 * std::min<Scalar>(0, (((-_tmp8 + _tmp9) > 0) - ((-_tmp8 + _tmp9) < 0))) + 1;
  const Scalar _tmp11 = 2 * _tmp10;
  const Scalar _tmp12 = 1 - epsilon;
  const Scalar _tmp13 = std::min<Scalar>(_tmp12, std::fabs(_tmp8 - _tmp9));
  const Scalar _tmp14 = std::acos(_tmp13) / std::sqrt(Scalar(1 - std::pow(_tmp13, Scalar(2))));
  const Scalar _tmp15 = _tmp11 * _tmp14;
  const Scalar _tmp16 = _tmp15 * _tmp4;
  const Scalar _tmp17 = _x[3] * _y[0];
  const Scalar _tmp18 = _x[2] * _y[1];
  const Scalar _tmp19 = _x[1] * _y[2];
  const Scalar _tmp20 = _x[0] * _y[3];
  const Scalar _tmp21 = _tmp17 + _tmp18 - _tmp19 - _tmp20;
  const Scalar _tmp22 = _tmp15 * _tmp21;
  const Scalar _tmp23 = _x[3] * _y[2];
  const Scalar _tmp24 = _x[2] * _y[3];
  const Scalar _tmp25 = _x[1] * _y[0];
  const Scalar _tmp26 = _x[0] * _y[1];
  const Scalar _tmp27 = _tmp23 - _tmp24 + _tmp25 - _tmp26;
  const Scalar _tmp28 = _tmp15 * _tmp27;
  const Scalar _tmp29 = -_x[4] + _y[4];
  const Scalar _tmp30 = -_x[6] + _y[6];
  const Scalar _tmp31 = -_x[5] + _y[5];
  const Scalar _tmp32 = _tmp11 * sqrt_info(4, 0);
  const Scalar _tmp33 = _tmp27 * sqrt_info(5, 2);
  const Scalar _tmp34 = _tmp5 + _tmp6 + _tmp7 + _tmp9;
  const Scalar _tmp35 = std::fabs(_tmp34);
  const Scalar _tmp36 = std::min<Scalar>(_tmp12, _tmp35);
  const Scalar _tmp37 = 1 - std::pow(_tmp36, Scalar(2));
  const Scalar _tmp38 = std::acos(_tmp36);
  const Scalar _tmp39 = _tmp38 / std::sqrt(_tmp37);
  const Scalar _tmp40 = _tmp39 * (-Scalar(1) / Scalar(2) * _tmp5 - Scalar(1) / Scalar(2) * _tmp6 -
                                  Scalar(1) / Scalar(2) * _tmp7 - Scalar(1) / Scalar(2) * _tmp9);
  const Scalar _tmp41 = _tmp11 * _tmp40;
  const Scalar _tmp42 = (Scalar(1) / Scalar(2)) * _tmp17;
  const Scalar _tmp43 = (Scalar(1) / Scalar(2)) * _tmp18;
  const Scalar _tmp44 = (Scalar(1) / Scalar(2)) * _tmp19;
  const Scalar _tmp45 = (Scalar(1) / Scalar(2)) * _tmp20;
  const Scalar _tmp46 = _tmp42 + _tmp43 - _tmp44 - _tmp45;
  const Scalar _tmp47 = _tmp10 * ((((_tmp12 - _tmp35) > 0) - ((_tmp12 - _tmp35) < 0)) + 1) *
                        (((_tmp34) > 0) - ((_tmp34) < 0));
  const Scalar _tmp48 = _tmp47 / _tmp37;
  const Scalar _tmp49 = _tmp46 * _tmp48;
  const Scalar _tmp50 = _tmp27 * _tmp49;
  const Scalar _tmp51 = _tmp4 * sqrt_info(0, 1);
  const Scalar _tmp52 = (Scalar(1) / Scalar(2)) * _tmp23;
  const Scalar _tmp53 = (Scalar(1) / Scalar(2)) * _tmp24;
  const Scalar _tmp54 = (Scalar(1) / Scalar(2)) * _tmp25;
  const Scalar _tmp55 = (Scalar(1) / Scalar(2)) * _tmp26;
  const Scalar _tmp56 = _tmp52 - _tmp53 + _tmp54 - _tmp55;
  const Scalar _tmp57 = _tmp11 * _tmp39;
  const Scalar _tmp58 = _tmp56 * _tmp57;
  const Scalar _tmp59 = _tmp36 * _tmp38 * _tmp47 / (_tmp37 * std::sqrt(_tmp37));
  const Scalar _tmp60 = _tmp46 * _tmp59;
  const Scalar _tmp61 = _tmp21 * _tmp60;
  const Scalar _tmp62 = _tmp21 * _tmp49;
  const Scalar _tmp63 = _tmp27 * _tmp60;
  const Scalar _tmp64 = (Scalar(1) / Scalar(2)) * _tmp0;
  const Scalar _tmp65 = (Scalar(1) / Scalar(2)) * _tmp1;
  const Scalar _tmp66 = (Scalar(1) / Scalar(2)) * _tmp2;
  const Scalar _tmp67 = (Scalar(1) / Scalar(2)) * _tmp3;
  const Scalar _tmp68 = _tmp57 * (-_tmp64 + _tmp65 + _tmp66 - _tmp67);
  const Scalar _tmp69 = _tmp4 * _tmp49;
  const Scalar _tmp70 = _tmp21 * sqrt_info(1, 0);
  const Scalar _tmp71 = _tmp4 * _tmp60;
  const Scalar _tmp72 = _tmp21 * sqrt_info(3, 0);
  const Scalar _tmp73 = _tmp27 * sqrt_info(3, 2);
  const Scalar _tmp74 = _tmp27 * sqrt_info(4, 2);
  const Scalar _tmp75 = _tmp21 * sqrt_info(4, 0);
  const Scalar _tmp76 = _tmp46 * _tmp57;
  const Scalar _tmp77 = -_tmp52 + _tmp53 - _tmp54 + _tmp55;
  const Scalar _tmp78 = _tmp57 * _tmp77;
  const Scalar _tmp79 = _tmp64 - _tmp65 - _tmp66 + _tmp67;
  const Scalar _tmp80 = _tmp59 * _tmp79;
  const Scalar _tmp81 = _tmp27 * _tmp80;
  const Scalar _tmp82 = _tmp48 * _tmp79;
  const Scalar _tmp83 = _tmp21 * _tmp80;
  const Scalar _tmp84 = _tmp27 * _tmp82;
  const Scalar _tmp85 = _tmp21 * _tmp82;
  const Scalar _tmp86 = _tmp4 * _tmp82;
  const Scalar _tmp87 = _tmp4 * _tmp80;
  const Scalar _tmp88 = _tmp32 * _tmp39;
  const Scalar _tmp89 = _tmp56 * _tmp59;
  const Scalar _tmp90 = _tmp21 * _tmp89;
  const Scalar _tmp91 = _tmp48 * _tmp56;
  const Scalar _tmp92 = _tmp21 * _tmp91;
  const Scalar _tmp93 = _tmp27 * _tmp89;
  const Scalar _tmp94 = _tmp57 * _tmp79;
  const Scalar _tmp95 = _tmp27 * _tmp91;
  const Scalar _tmp96 = _tmp57 * (-_tmp42 - _tmp43 + _tmp44 + _tmp45);
  const Scalar _tmp97 = _tmp4 * _tmp89;
  const Scalar _tmp98 = _tmp4 * _tmp91;

  // Output terms (2)
  Eigen::Matrix<Scalar, 6, 1> _res;

  _res(0, 0) = _tmp16 * sqrt_info(0, 1) + _tmp22 * sqrt_info(0, 0) + _tmp28 * sqrt_info(0, 2) +
               _tmp29 * sqrt_info(0, 3) + _tmp30 * sqrt_info(0, 5) + _tmp31 * sqrt_info(0, 4);
  _res(1, 0) = _tmp16 * sqrt_info(1, 1) + _tmp22 * sqrt_info(1, 0) + _tmp28 * sqrt_info(1, 2) +
               _tmp29 * sqrt_info(1, 3) + _tmp30 * sqrt_info(1, 5) + _tmp31 * sqrt_info(1, 4);
  _res(2, 0) = _tmp16 * sqrt_info(2, 1) + _tmp22 * sqrt_info(2, 0) + _tmp28 * sqrt_info(2, 2) +
               _tmp29 * sqrt_info(2, 3) + _tmp30 * sqrt_info(2, 5) + _tmp31 * sqrt_info(2, 4);
  _res(3, 0) = _tmp16 * sqrt_info(3, 1) + _tmp22 * sqrt_info(3, 0) + _tmp28 * sqrt_info(3, 2) +
               _tmp29 * sqrt_info(3, 3) + _tmp30 * sqrt_info(3, 5) + _tmp31 * sqrt_info(3, 4);
  _res(4, 0) = _tmp14 * _tmp21 * _tmp32 + _tmp16 * sqrt_info(4, 1) + _tmp28 * sqrt_info(4, 2) +
               _tmp29 * sqrt_info(4, 3) + _tmp30 * sqrt_info(4, 5) + _tmp31 * sqrt_info(4, 4);
  _res(5, 0) = _tmp15 * _tmp33 + _tmp16 * sqrt_info(5, 1) + _tmp22 * sqrt_info(5, 0) +
               _tmp29 * sqrt_info(5, 3) + _tmp30 * sqrt_info(5, 5) + _tmp31 * sqrt_info(5, 4);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 6, 6>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp41 * sqrt_info(0, 0) - _tmp49 * _tmp51 - _tmp50 * sqrt_info(0, 2) +
                     _tmp51 * _tmp60 + _tmp58 * sqrt_info(0, 1) + _tmp61 * sqrt_info(0, 0) -
                     _tmp62 * sqrt_info(0, 0) + _tmp63 * sqrt_info(0, 2) + _tmp68 * sqrt_info(0, 2);
    _res_D_x(1, 0) = _tmp41 * sqrt_info(1, 0) - _tmp49 * _tmp70 - _tmp50 * sqrt_info(1, 2) +
                     _tmp58 * sqrt_info(1, 1) + _tmp60 * _tmp70 + _tmp63 * sqrt_info(1, 2) +
                     _tmp68 * sqrt_info(1, 2) - _tmp69 * sqrt_info(1, 1) + _tmp71 * sqrt_info(1, 1);
    _res_D_x(2, 0) = _tmp41 * sqrt_info(2, 0) - _tmp50 * sqrt_info(2, 2) +
                     _tmp58 * sqrt_info(2, 1) + _tmp61 * sqrt_info(2, 0) -
                     _tmp62 * sqrt_info(2, 0) + _tmp63 * sqrt_info(2, 2) +
                     _tmp68 * sqrt_info(2, 2) - _tmp69 * sqrt_info(2, 1) + _tmp71 * sqrt_info(2, 1);
    _res_D_x(3, 0) = _tmp41 * sqrt_info(3, 0) - _tmp50 * sqrt_info(3, 2) +
                     _tmp58 * sqrt_info(3, 1) + _tmp60 * _tmp72 + _tmp60 * _tmp73 -
                     _tmp62 * sqrt_info(3, 0) + _tmp68 * sqrt_info(3, 2) -
                     _tmp69 * sqrt_info(3, 1) + _tmp71 * sqrt_info(3, 1);
    _res_D_x(4, 0) = _tmp32 * _tmp40 - _tmp49 * _tmp74 + _tmp58 * sqrt_info(4, 1) +
                     _tmp60 * _tmp74 + _tmp60 * _tmp75 - _tmp62 * sqrt_info(4, 0) +
                     _tmp68 * sqrt_info(4, 2) - _tmp69 * sqrt_info(4, 1) + _tmp71 * sqrt_info(4, 1);
    _res_D_x(5, 0) = -_tmp33 * _tmp49 + _tmp33 * _tmp60 + _tmp41 * sqrt_info(5, 0) +
                     _tmp58 * sqrt_info(5, 1) + _tmp61 * sqrt_info(5, 0) -
                     _tmp62 * sqrt_info(5, 0) + _tmp68 * sqrt_info(5, 2) -
                     _tmp69 * sqrt_info(5, 1) + _tmp71 * sqrt_info(5, 1);
    _res_D_x(0, 1) = _tmp41 * sqrt_info(0, 1) + _tmp51 * _tmp80 - _tmp51 * _tmp82 +
                     _tmp76 * sqrt_info(0, 2) + _tmp78 * sqrt_info(0, 0) +
                     _tmp81 * sqrt_info(0, 2) + _tmp83 * sqrt_info(0, 0) -
                     _tmp84 * sqrt_info(0, 2) - _tmp85 * sqrt_info(0, 0);
    _res_D_x(1, 1) = _tmp41 * sqrt_info(1, 1) + _tmp70 * _tmp80 - _tmp70 * _tmp82 +
                     _tmp76 * sqrt_info(1, 2) + _tmp78 * sqrt_info(1, 0) +
                     _tmp81 * sqrt_info(1, 2) - _tmp84 * sqrt_info(1, 2) -
                     _tmp86 * sqrt_info(1, 1) + _tmp87 * sqrt_info(1, 1);
    _res_D_x(2, 1) = _tmp41 * sqrt_info(2, 1) + _tmp76 * sqrt_info(2, 2) +
                     _tmp78 * sqrt_info(2, 0) + _tmp81 * sqrt_info(2, 2) +
                     _tmp83 * sqrt_info(2, 0) - _tmp84 * sqrt_info(2, 2) -
                     _tmp85 * sqrt_info(2, 0) - _tmp86 * sqrt_info(2, 1) + _tmp87 * sqrt_info(2, 1);
    _res_D_x(3, 1) = _tmp41 * sqrt_info(3, 1) + _tmp72 * _tmp80 + _tmp73 * _tmp80 +
                     _tmp76 * sqrt_info(3, 2) + _tmp78 * sqrt_info(3, 0) -
                     _tmp84 * sqrt_info(3, 2) - _tmp85 * sqrt_info(3, 0) -
                     _tmp86 * sqrt_info(3, 1) + _tmp87 * sqrt_info(3, 1);
    _res_D_x(4, 1) = _tmp41 * sqrt_info(4, 1) + _tmp74 * _tmp80 - _tmp74 * _tmp82 +
                     _tmp75 * _tmp80 + _tmp76 * sqrt_info(4, 2) + _tmp77 * _tmp88 -
                     _tmp85 * sqrt_info(4, 0) - _tmp86 * sqrt_info(4, 1) + _tmp87 * sqrt_info(4, 1);
    _res_D_x(5, 1) = _tmp33 * _tmp80 - _tmp33 * _tmp82 + _tmp41 * sqrt_info(5, 1) +
                     _tmp76 * sqrt_info(5, 2) + _tmp78 * sqrt_info(5, 0) +
                     _tmp83 * sqrt_info(5, 0) - _tmp85 * sqrt_info(5, 0) -
                     _tmp86 * sqrt_info(5, 1) + _tmp87 * sqrt_info(5, 1);
    _res_D_x(0, 2) = _tmp41 * sqrt_info(0, 2) + _tmp51 * _tmp89 - _tmp51 * _tmp91 +
                     _tmp90 * sqrt_info(0, 0) - _tmp92 * sqrt_info(0, 0) +
                     _tmp93 * sqrt_info(0, 2) + _tmp94 * sqrt_info(0, 0) -
                     _tmp95 * sqrt_info(0, 2) + _tmp96 * sqrt_info(0, 1);
    _res_D_x(1, 2) = _tmp41 * sqrt_info(1, 2) + _tmp70 * _tmp89 - _tmp92 * sqrt_info(1, 0) +
                     _tmp93 * sqrt_info(1, 2) + _tmp94 * sqrt_info(1, 0) -
                     _tmp95 * sqrt_info(1, 2) + _tmp96 * sqrt_info(1, 1) +
                     _tmp97 * sqrt_info(1, 1) - _tmp98 * sqrt_info(1, 1);
    _res_D_x(2, 2) = _tmp41 * sqrt_info(2, 2) + _tmp90 * sqrt_info(2, 0) -
                     _tmp92 * sqrt_info(2, 0) + _tmp93 * sqrt_info(2, 2) +
                     _tmp94 * sqrt_info(2, 0) - _tmp95 * sqrt_info(2, 2) +
                     _tmp96 * sqrt_info(2, 1) + _tmp97 * sqrt_info(2, 1) - _tmp98 * sqrt_info(2, 1);
    _res_D_x(3, 2) = _tmp41 * sqrt_info(3, 2) + _tmp72 * _tmp89 + _tmp73 * _tmp89 -
                     _tmp92 * sqrt_info(3, 0) + _tmp94 * sqrt_info(3, 0) -
                     _tmp95 * sqrt_info(3, 2) + _tmp96 * sqrt_info(3, 1) +
                     _tmp97 * sqrt_info(3, 1) - _tmp98 * sqrt_info(3, 1);
    _res_D_x(4, 2) = _tmp41 * sqrt_info(4, 2) + _tmp74 * _tmp89 - _tmp74 * _tmp91 +
                     _tmp75 * _tmp89 + _tmp79 * _tmp88 - _tmp92 * sqrt_info(4, 0) +
                     _tmp96 * sqrt_info(4, 1) + _tmp97 * sqrt_info(4, 1) - _tmp98 * sqrt_info(4, 1);
    _res_D_x(5, 2) = _tmp33 * _tmp89 - _tmp33 * _tmp91 + _tmp41 * sqrt_info(5, 2) +
                     _tmp90 * sqrt_info(5, 0) - _tmp92 * sqrt_info(5, 0) +
                     _tmp94 * sqrt_info(5, 0) + _tmp96 * sqrt_info(5, 1) +
                     _tmp97 * sqrt_info(5, 1) - _tmp98 * sqrt_info(5, 1);
    _res_D_x(0, 3) = -sqrt_info(0, 3);
    _res_D_x(1, 3) = -sqrt_info(1, 3);
    _res_D_x(2, 3) = -sqrt_info(2, 3);
    _res_D_x(3, 3) = -sqrt_info(3, 3);
    _res_D_x(4, 3) = -sqrt_info(4, 3);
    _res_D_x(5, 3) = -sqrt_info(5, 3);
    _res_D_x(0, 4) = -sqrt_info(0, 4);
    _res_D_x(1, 4) = -sqrt_info(1, 4);
    _res_D_x(2, 4) = -sqrt_info(2, 4);
    _res_D_x(3, 4) = -sqrt_info(3, 4);
    _res_D_x(4, 4) = -sqrt_info(4, 4);
    _res_D_x(5, 4) = -sqrt_info(5, 4);
    _res_D_x(0, 5) = -sqrt_info(0, 5);
    _res_D_x(1, 5) = -sqrt_info(1, 5);
    _res_D_x(2, 5) = -sqrt_info(2, 5);
    _res_D_x(3, 5) = -sqrt_info(3, 5);
    _res_D_x(4, 5) = -sqrt_info(4, 5);
    _res_D_x(5, 5) = -sqrt_info(5, 5);
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
