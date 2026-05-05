class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def findbound(isFirst):
            start = 0
            end = len(nums)-1
            bound = -1

            while(start<=end):
                mid = (start+end)//2
                if nums[mid] == target:
                    bound = mid

                    if isFirst:
                        end = mid-1
                    else:
                        start = mid+1

                elif nums[mid] > target:
                    end = mid-1
                
                else:
                    start = mid+1

            return bound

        return [findbound(True), findbound(False)]