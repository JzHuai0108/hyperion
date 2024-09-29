// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     FACTOR.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <Eigen/Core>

namespace sym_hyperion {

/**
 * This function was autogenerated from a symbolic function. Do not modify by hand.
 *
 * Symbolic function: r2_angular_delta_factor
 *
 * Args:
 *     x: Matrix21
 *     y: Matrix21
 *     sqrt_info: Matrix11
 *     epsilon: Scalar
 *
 * Outputs:
 *     res: Matrix11
 *     res_D_x: (1x2) jacobian of res (1) wrt arg x (2)
 */
template <typename Scalar>
Eigen::Matrix<Scalar, 1, 1> R2AngularDeltaFactorWithJacobian0(
    const Eigen::Matrix<Scalar, 2, 1>& x, const Eigen::Matrix<Scalar, 2, 1>& y,
    const Eigen::Matrix<Scalar, 1, 1>& sqrt_info, const Scalar epsilon,
    Scalar* const res_D_x = nullptr) {
  // Total ops: 28

  // Input arrays

  // Intermediate terms (7)
  const Scalar _tmp0 = x(0, 0) * y(1, 0) - x(1, 0) * y(0, 0);
  const Scalar _tmp1 = x(0, 0) * y(0, 0) + x(1, 0) * y(1, 0);
  const Scalar _tmp2 = _tmp1 + epsilon * ((((_tmp1) > 0) - ((_tmp1) < 0)) + Scalar(0.5));
  const Scalar _tmp3 = std::pow(_tmp2, Scalar(2));
  const Scalar _tmp4 = _tmp0 / _tmp3;
  const Scalar _tmp5 = Scalar(1.0) / (_tmp2);
  const Scalar _tmp6 = _tmp3 * sqrt_info(0, 0) / (std::pow(_tmp0, Scalar(2)) + _tmp3);

  // Output terms (2)
  Eigen::Matrix<Scalar, 1, 1> _res;

  _res(0, 0) = sqrt_info(0, 0) * std::atan2(_tmp0, _tmp2);

  if (res_D_x != nullptr) {
    Eigen::Map<Eigen::Matrix<Scalar, 1, 2>> _res_D_x{res_D_x};

    _res_D_x(0, 0) = _tmp6 * (-_tmp4 * y(0, 0) + _tmp5 * y(1, 0));
    _res_D_x(0, 1) = _tmp6 * (-_tmp4 * y(1, 0) - _tmp5 * y(0, 0));
  }

  return _res;
}  // NOLINT(readability/fn_size)

// NOLINTNEXTLINE(readability/fn_size)
}  // namespace sym_hyperion
