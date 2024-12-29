///////////////////////////////////////////////////////////////////////////////////////////////////
/// @file View\ICircleCollection.h.
///
/// NDE file domain path Not available in NDE
/// 
/// Declares the ICircleCollection interface
///////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#include <memory>
#include <View/ICircle.h>


namespace Olympus
{
  namespace View
  {
    class ICircleCollection
    {
    public:
      virtual ~ICircleCollection() = default;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets the number of Circle in the collection.
      ///
      /// @returns The count.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual std::size_t GetCount() const = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Gets a Circle.
      /// NDE file domain path Not available in NDE
      ///
      /// @param index The index of the Circle.
      ///
      /// @returns A constant pointer to the Circle.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual ICircleConstPtr GetCircle(std::size_t index) const = 0;

      virtual ICirclePtr GetCircle(std::size_t index) = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Removes the Circle with a given index.
      ///
      /// @param index The index of the Circle to remove.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual void Remove(std::size_t index) = 0;

      /////////////////////////////////////////////////////////////////////////////////////////////
      /// Adds a Circle to the collection.
      ///
      /// @param name    The Name of the Circle.
      ///
      /// @returns A pointer to the Circle.
      /////////////////////////////////////////////////////////////////////////////////////////////
      virtual ICirclePtr Add(/*std::wstring name*/) = 0;

    };

    using ICircleCollectionPtr = std::shared_ptr<ICircleCollection>;
    using ICircleCollectionConstPtr = std::shared_ptr<const ICircleCollection>;
  }
}