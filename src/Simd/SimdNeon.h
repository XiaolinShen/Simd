/*
* Simd Library (http://simd.sourceforge.net).
*
* Copyright (c) 2011-2016 Yermalayeu Ihar.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy 
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
* copies of the Software, and to permit persons to whom the Software is 
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in 
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
#ifndef __SimdNeon_h__
#define __SimdNeon_h__

#include "Simd/SimdDefs.h"

namespace Simd
{
#ifdef SIMD_NEON_ENABLE
    namespace Neon
    {
		void AbsDifferenceSum(const uint8_t *a, size_t aStride, const uint8_t *b, size_t bStride,
			size_t width, size_t height, uint64_t * sum);

		void AbsDifferenceSumMasked(const uint8_t *a, size_t aStride, const uint8_t *b, size_t bStride,
			const uint8_t *mask, size_t maskStride, uint8_t index, size_t width, size_t height, uint64_t * sum);

		void AbsDifferenceSums3x3(const uint8_t *current, size_t currentStride, const uint8_t * background, size_t backgroundStride,
			size_t width, size_t height, uint64_t * sums);

		void AbsDifferenceSums3x3Masked(const uint8_t *current, size_t currentStride, const uint8_t *background, size_t backgroundStride,
			const uint8_t *mask, size_t maskStride, uint8_t index, size_t width, size_t height, uint64_t * sums);

		void AbsGradientSaturatedSum(const uint8_t * src, size_t srcStride, size_t width, size_t height, uint8_t * dst, size_t dstStride);

		void AddFeatureDifference(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			const uint8_t * lo, size_t loStride, const uint8_t * hi, size_t hiStride,
			uint16_t weight, uint8_t * difference, size_t differenceStride);

		void AlphaBlending(const uint8_t *src, size_t srcStride, size_t width, size_t height, size_t channelCount,
			const uint8_t *alpha, size_t alphaStride, uint8_t *dst, size_t dstStride);

		void BackgroundGrowRangeSlow(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * lo, size_t loStride, uint8_t * hi, size_t hiStride);

		void BackgroundGrowRangeFast(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * lo, size_t loStride, uint8_t * hi, size_t hiStride);

		void BackgroundIncrementCount(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			const uint8_t * loValue, size_t loValueStride, const uint8_t * hiValue, size_t hiValueStride,
			uint8_t * loCount, size_t loCountStride, uint8_t * hiCount, size_t hiCountStride);

		void BackgroundAdjustRange(uint8_t * loCount, size_t loCountStride, size_t width, size_t height,
			uint8_t * loValue, size_t loValueStride, uint8_t * hiCount, size_t hiCountStride,
			uint8_t * hiValue, size_t hiValueStride, uint8_t threshold);

		void BackgroundAdjustRangeMasked(uint8_t * loCount, size_t loCountStride, size_t width, size_t height,
			uint8_t * loValue, size_t loValueStride, uint8_t * hiCount, size_t hiCountStride,
			uint8_t * hiValue, size_t hiValueStride, uint8_t threshold, const uint8_t * mask, size_t maskStride);

		void BackgroundShiftRange(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * lo, size_t loStride, uint8_t * hi, size_t hiStride);

		void BackgroundShiftRangeMasked(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * lo, size_t loStride, uint8_t * hi, size_t hiStride, const uint8_t * mask, size_t maskStride);

		void BackgroundInitMask(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t index, uint8_t value, uint8_t * dst, size_t dstStride);

		void BgraToBgr(const uint8_t * bgra, size_t width, size_t height, size_t bgraStride, uint8_t * bgr, size_t bgrStride);

		void BgraToGray(const uint8_t * bgra, size_t width, size_t height, size_t bgraStride, uint8_t * gray, size_t grayStride);

		void BgraToYuv420p(const uint8_t * bgra, size_t width, size_t height, size_t bgraStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void BgraToYuv422p(const uint8_t * bgra, size_t width, size_t height, size_t bgraStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void BgraToYuv444p(const uint8_t * bgra, size_t width, size_t height, size_t bgraStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void BgrToBgra(const uint8_t * bgr, size_t width, size_t height, size_t bgrStride, uint8_t * bgra, size_t bgraStride, uint8_t alpha);

		void BgrToGray(const uint8_t * bgr, size_t width, size_t height, size_t bgrStride, uint8_t * gray, size_t grayStride);

		void BgrToYuv420p(const uint8_t * bgr, size_t width, size_t height, size_t bgrStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void BgrToYuv422p(const uint8_t * bgr, size_t width, size_t height, size_t bgrStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void BgrToYuv444p(const uint8_t * bgr, size_t width, size_t height, size_t bgrStride, uint8_t * y, size_t yStride, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void Binarization(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t value, uint8_t positive, uint8_t negative, uint8_t * dst, size_t dstStride, SimdCompareType compareType);

		void AveragingBinarization(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t value, size_t neighborhood, uint8_t threshold, uint8_t positive, uint8_t negative,
			uint8_t * dst, size_t dstStride, SimdCompareType compareType);

		void ConditionalCount8u(const uint8_t * src, size_t stride, size_t width, size_t height,
			uint8_t value, SimdCompareType compareType, uint32_t * count);

		void ConditionalCount16i(const uint8_t * src, size_t stride, size_t width, size_t height,
			int16_t value, SimdCompareType compareType, uint32_t * count);

		void ConditionalSum(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			const uint8_t * mask, size_t maskStride, uint8_t value, SimdCompareType compareType, uint64_t * sum);

		void ConditionalSquareSum(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			const uint8_t * mask, size_t maskStride, uint8_t value, SimdCompareType compareType, uint64_t * sum);

		void ConditionalSquareGradientSum(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			const uint8_t * mask, size_t maskStride, uint8_t value, SimdCompareType compareType, uint64_t * sum);

		void ConditionalFill(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t threshold, SimdCompareType compareType, uint8_t value, uint8_t * dst, size_t dstStride);

		void DeinterleaveUv(const uint8_t * uv, size_t uvStride, size_t width, size_t height, uint8_t * u, size_t uStride, uint8_t * v, size_t vStride);

		void EdgeBackgroundGrowRangeSlow(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * background, size_t backgroundStride);

		void EdgeBackgroundGrowRangeFast(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * background, size_t backgroundStride);

		void EdgeBackgroundIncrementCount(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			const uint8_t * backgroundValue, size_t backgroundValueStride, uint8_t * backgroundCount, size_t backgroundCountStride);

		void EdgeBackgroundAdjustRange(uint8_t * backgroundCount, size_t backgroundCountStride, size_t width, size_t height,
			uint8_t * backgroundValue, size_t backgroundValueStride, uint8_t threshold);

		void EdgeBackgroundAdjustRangeMasked(uint8_t * backgroundCount, size_t backgroundCountStride, size_t width, size_t height,
			uint8_t * backgroundValue, size_t backgroundValueStride, uint8_t threshold, const uint8_t * mask, size_t maskStride);

		void EdgeBackgroundShiftRange(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * background, size_t backgroundStride);

		void EdgeBackgroundShiftRangeMasked(const uint8_t * value, size_t valueStride, size_t width, size_t height,
			uint8_t * background, size_t backgroundStride, const uint8_t * mask, size_t maskStride);

		void GaussianBlur3x3(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			size_t channelCount, uint8_t * dst, size_t dstStride);

		void GrayToBgr(const uint8_t *gray, size_t width, size_t height, size_t grayStride, uint8_t *bgr, size_t bgrStride);

		void GrayToBgra(const uint8_t *gray, size_t width, size_t height, size_t grayStride, uint8_t *bgra, size_t bgraStride, uint8_t alpha);

		void InterleaveUv(const uint8_t * u, size_t uStride, const uint8_t * v, size_t vStride, size_t width, size_t height, uint8_t * uv, size_t uvStride);

		void LbpEstimate(const uint8_t * src, size_t srcStride, size_t width, size_t height, uint8_t * dst, size_t dstStride);

		void MedianFilterRhomb3x3(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			size_t channelCount, uint8_t * dst, size_t dstStride);

		void MedianFilterRhomb5x5(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			size_t channelCount, uint8_t * dst, size_t dstStride);

		void MedianFilterSquare3x3(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			size_t channelCount, uint8_t * dst, size_t dstStride);

		void MedianFilterSquare5x5(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			size_t channelCount, uint8_t * dst, size_t dstStride);

		void OperationBinary8u(const uint8_t * a, size_t aStride, const uint8_t * b, size_t bStride,
			size_t width, size_t height, size_t channelCount, uint8_t * dst, size_t dstStride, SimdOperationBinary8uType type);

		void OperationBinary16i(const uint8_t * a, size_t aStride, const uint8_t * b, size_t bStride,
			size_t width, size_t height, uint8_t * dst, size_t dstStride, SimdOperationBinary16iType type);

		void VectorProduct(const uint8_t * vertical, const uint8_t * horizontal, uint8_t * dst, size_t stride, size_t width, size_t height);

		void ReduceGray2x2(const uint8_t *src, size_t srcWidth, size_t srcHeight, size_t srcStride,
			uint8_t *dst, size_t dstWidth, size_t dstHeight, size_t dstStride);

		void ReduceGray3x3(const uint8_t *src, size_t srcWidth, size_t srcHeight, size_t srcStride,
			uint8_t *dst, size_t dstWidth, size_t dstHeight, size_t dstStride, int compensation);

		void ReduceGray4x4(const uint8_t *src, size_t srcWidth, size_t srcHeight, size_t srcStride,
			uint8_t *dst, size_t dstWidth, size_t dstHeight, size_t dstStride);

		void ReduceGray5x5(const uint8_t *src, size_t srcWidth, size_t srcHeight, size_t srcStride,
			uint8_t *dst, size_t dstWidth, size_t dstHeight, size_t dstStride, int compensation);

		void Reorder16bit(const uint8_t * src, size_t size, uint8_t * dst);

		void Reorder32bit(const uint8_t * src, size_t size, uint8_t * dst);

		void Reorder64bit(const uint8_t * src, size_t size, uint8_t * dst);

		void SquaredDifferenceSum(const uint8_t * a, size_t aStride, const uint8_t * b, size_t bStride,
			size_t width, size_t height, uint64_t * sum);

		void SquaredDifferenceSumMasked(const uint8_t *a, size_t aStride, const uint8_t *b, size_t bStride,
			const uint8_t *mask, size_t maskStride, uint8_t index, size_t width, size_t height, uint64_t * sum);

		void SquaredDifferenceSum32f(const float * a, const float * b, size_t size, float * sum);

		void SquaredDifferenceKahanSum32f(const float * a, const float * b, size_t size, float * sum);

		void StretchGray2x2(const uint8_t *src, size_t srcWidth, size_t srcHeight, size_t srcStride,
			uint8_t *dst, size_t dstWidth, size_t dstHeight, size_t dstStride);

		void TextureBoostedSaturatedGradient(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t saturation, uint8_t boost, uint8_t * dx, size_t dxStride, uint8_t * dy, size_t dyStride);

		void TextureBoostedUv(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			uint8_t boost, uint8_t * dst, size_t dstStride);

		void TextureGetDifferenceSum(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			const uint8_t * lo, size_t loStride, const uint8_t * hi, size_t hiStride, int64_t * sum);

		void TexturePerformCompensation(const uint8_t * src, size_t srcStride, size_t width, size_t height,
			int shift, uint8_t * dst, size_t dstStride);
	}
#endif// SIMD_NEON_ENABLE
}
#endif//__SimdNeon_h__