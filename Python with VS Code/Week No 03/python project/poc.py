# computer vision -v

import cv2


cap = cv2.VideoCapture(0)


while True:
    _, frame = cap.read()


    cv2.imshow('Output',frame)

    if cv2.waitKey(10) == ord('s'):
        break

cap.release()
cv2.destroyAllWindows()