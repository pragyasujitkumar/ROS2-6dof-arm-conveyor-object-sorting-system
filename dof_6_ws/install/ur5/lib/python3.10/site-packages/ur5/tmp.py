import cv2
import cv2.aruco as aruco

# Load the image
image = cv2.imread("/home/ps/dof_6_ws/src/ur5/captures/shot.png")

# Convert the image to grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Apply Gaussian blur to reduce noise
blurred = cv2.GaussianBlur(gray, (5, 5), 0)

# Enhance contrast using histogram equalization
equalized = cv2.equalizeHist(blurred)

# Optional: Display the preprocessed image to verify
cv2.imshow("Preprocessed Image", equalized)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Define ArUco dictionary and detector parameters
aruco_dict = aruco.Dictionary_get(aruco.DICT_4X4_250)
parameters = aruco.DetectorParameters_create()
    
# Detect markers using the current dictionary on the preprocessed image
corners, ids, _ = aruco.detectMarkers(equalized, aruco_dict, parameters=parameters)

print(f"Detected ArUco markers with Dictionary ID: {ids}")
print(f"Marker IDs: {ids.flatten()}")

# Check if any ArUco markers were detected
if ids is not None:
    aruco_marker_id = ids[0][0]  # ids is a list of arrays, so use [0][0]
    print(f"Detected ArUco marker ID: {aruco_marker_id}")
else:
    print("No ArUco markers detected.")
