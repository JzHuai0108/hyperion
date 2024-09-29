// -----------------------------------------------------------------------------
// This file was autogenerated by symforce from template:
//     COST_FUNCTION.hpp.jinja
// Do NOT modify by hand.
// -----------------------------------------------------------------------------

#pragma once

#include <ceres/sized_cost_function.h>

#include <sym/rot3.h>

namespace hyperion::ceres {

class Spline4Rot3PriorCostFunction final : public ::ceres::SizedCostFunction<3, 4, 4, 4, 4, 4> {
 public:
  /// Constructor.
  explicit Spline4Rot3PriorCostFunction(const Eigen::Matrix<double, 4, 1>& lambdas,
                                        const sym::Rot3<double>& prior,
                                        const Eigen::Matrix<double, 3, 3>& sqrtInfo)
      : lambdas_{lambdas}, y_{prior}, sqrt_info_{sqrtInfo} {}

  /// lambdas accessor.
  [[nodiscard]] auto lambdas() const -> const Eigen::Matrix<double, 4, 1>& {
    return lambdas_;
  }

  /// lambdas modifier.
  auto lambdas() -> Eigen::Matrix<double, 4, 1>& {
    return lambdas_;
  }

  /// prior accessor.
  [[nodiscard]] auto prior() const -> const sym::Rot3<double>& {
    return y_;
  }

  /// prior modifier.
  auto prior() -> sym::Rot3<double>& {
    return y_;
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
  Eigen::Matrix<double, 4, 1> lambdas_;
  sym::Rot3<double> y_;
  Eigen::Matrix<double, 3, 3> sqrt_info_;
};

}  // namespace hyperion::ceres
