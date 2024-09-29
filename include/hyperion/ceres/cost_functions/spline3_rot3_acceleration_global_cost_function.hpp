// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ceres/sized_cost_function.h>

#include <sym/rot3.h>

namespace hyperion::ceres {

class Spline3Rot3AccelerationGlobalCostFunction final
    : public ::ceres::SizedCostFunction<3, 4, 4, 4, 4> {
 public:
  /// Constructor.
  explicit Spline3Rot3AccelerationGlobalCostFunction(
      const double dt, const Eigen::Matrix<double, 3, 3>& lambdas,
      const Eigen::Matrix<double, 3, 1>& acceleration, const Eigen::Matrix<double, 3, 3>& sqrtInfo)
      : dt_{dt}, lambdas_{lambdas}, acceleration_{acceleration}, sqrt_info_{sqrtInfo} {}

  /// dt accessor.
  [[nodiscard]] auto dt() const -> const double& {
    return dt_;
  }

  /// dt modifier.
  auto dt() -> double& {
    return dt_;
  }

  /// lambdas accessor.
  [[nodiscard]] auto lambdas() const -> const Eigen::Matrix<double, 3, 3>& {
    return lambdas_;
  }

  /// lambdas modifier.
  auto lambdas() -> Eigen::Matrix<double, 3, 3>& {
    return lambdas_;
  }

  /// acceleration accessor.
  [[nodiscard]] auto acceleration() const -> const Eigen::Matrix<double, 3, 1>& {
    return acceleration_;
  }

  /// acceleration modifier.
  auto acceleration() -> Eigen::Matrix<double, 3, 1>& {
    return acceleration_;
  }

  /// sqrtInfo accessor.
  [[nodiscard]] auto sqrtInfo() const -> const Eigen::Matrix<double, 3, 3>& {
    return sqrt_info_;
  }

  /// sqrtInfo modifier.
  auto sqrtInfo() -> Eigen::Matrix<double, 3, 3>& {
    return sqrt_info_;
  }

  /// See documentation of base class.
  /// @note Returns (tangent_dim x ambient_dim) Jacobians stored in row-major order.
  auto Evaluate(double const* const* parameters, double* residuals, double** jacobians) const
      -> bool override;

 private:
  double dt_;
  Eigen::Matrix<double, 3, 3> lambdas_;
  Eigen::Matrix<double, 3, 1> acceleration_;
  Eigen::Matrix<double, 3, 3> sqrt_info_;
};

}  // namespace hyperion::ceres
