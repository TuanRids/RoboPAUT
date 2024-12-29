////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file ultrasoundConfiguration/IConnector.h
///
/// Declares the IConnector interface.
////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <ultrasoundConfiguration/UltrasoundTypes.h>

namespace Instrumentation
{
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  /// Interface of a connector. Gives access to the elements of this connector.
  ////////////////////////////////////////////////////////////////////////////////////////////////////
  class IConnector
  {
  public:
    virtual ~IConnector() = default;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Get the name of this connector.
    ///
    /// @return
    /// The name as a wchar_t.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual const std::wstring& GetName() const = 0;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Get the number of pins available to use on this connector.
    ///
    /// @return
    /// The pin quantity.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual std::size_t GetPinQuantity() const = 0;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Get the maximum number of element for the aperture of this connector.
    ///
    /// @return
    /// The aperture maximum.
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    virtual std::size_t GetApertureMaximum() const = 0;

    virtual bool CanPulse() const= 0;
    virtual bool CanReceive() const= 0;
    virtual bool CanPulseAndReceive() const= 0;
  };

  using IConnectorPtr = std::shared_ptr<IConnector>;
  using IConnectorConstPtr = std::shared_ptr<const IConnector>;
}